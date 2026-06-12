#include "systeminfo.h"

#include <QDir>
#include <QFile>
#include <QFileInfo>
#include <QProcess>
#include <QRegularExpression>
#include <QStandardPaths>
#include <QSysInfo>
#include <QTextStream>

namespace {

QString unknownIfEmpty(const QString &value)
{
    const QString trimmed = value.trimmed();
    return trimmed.isEmpty() ? QStringLiteral("Unknown") : trimmed;
}

QString readTextFile(const QString &path)
{
    QFile file(path);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return QString();

    return QString::fromUtf8(file.readAll()).trimmed();
}

QString runCommand(const QString &program, const QStringList &arguments, int timeoutMs = 900)
{
    const QString executable = QStandardPaths::findExecutable(program);
    if (executable.isEmpty())
        return QString();

    QProcess process;
    process.start(executable, arguments);
    if (!process.waitForFinished(timeoutMs) || process.exitStatus() != QProcess::NormalExit || process.exitCode() != 0)
        return QString();

    return QString::fromUtf8(process.readAllStandardOutput()).trimmed();
}

QString firstMatchingLine(const QString &text, const QRegularExpression &pattern)
{
    const QStringList lines = text.split(QLatin1Char('\n'));
    for (const QString &line : lines) {
        const QRegularExpressionMatch match = pattern.match(line.trimmed());
        if (match.hasMatch())
            return match.captured(1).trimmed();
    }

    return QString();
}

QString formatBytes(qint64 bytes)
{
    if (bytes <= 0)
        return QString();

    const QStringList units = {
        QStringLiteral("B"),
        QStringLiteral("KB"),
        QStringLiteral("MB"),
        QStringLiteral("GB")
    };

    double value = static_cast<double>(bytes);
    int unitIndex = 0;
    while (value >= 1024.0 && unitIndex < units.size() - 1) {
        value /= 1024.0;
        ++unitIndex;
    }

    return QString::number(value, 'f', unitIndex >= 2 ? 1 : 0) + QStringLiteral(" ") + units.at(unitIndex);
}

QString gpuNameFromSysfs(const QString &devicePath)
{
    const QString vendor = readTextFile(devicePath + QStringLiteral("/vendor")).toLower();
    const QString device = readTextFile(devicePath + QStringLiteral("/device")).toLower();
    if (vendor.isEmpty() || device.isEmpty())
        return QString();

    const QString pciIds = runCommand(QStringLiteral("lspci"), { QStringLiteral("-mm"), QStringLiteral("-nn") });
    const QString idPair = vendor.mid(2) + QStringLiteral(":") + device.mid(2);
    const QStringList lines = pciIds.split(QLatin1Char('\n'));
    for (const QString &line : lines) {
        if (line.contains(idPair, Qt::CaseInsensitive))
            return line.section(QLatin1Char('"'), 5, 5).trimmed();
    }

    if (vendor == QStringLiteral("0x1002"))
        return QStringLiteral("AMD GPU");
    if (vendor == QStringLiteral("0x10de"))
        return QStringLiteral("NVIDIA GPU");
    if (vendor == QStringLiteral("0x8086"))
        return QStringLiteral("Intel GPU");

    return QStringLiteral("GPU ") + vendor + QStringLiteral(":") + device;
}

QString mesaVersion()
{
    const QString glxInfo = runCommand(QStringLiteral("glxinfo"), { QStringLiteral("-B") }, 1200);
    QString value = firstMatchingLine(glxInfo, QRegularExpression(QStringLiteral("^OpenGL version string:\\s*(.+)$")));
    QRegularExpressionMatch mesaMatch = QRegularExpression(QStringLiteral("(Mesa\\s+[0-9][^\\s]*)")).match(value);
    if (mesaMatch.hasMatch())
        return mesaMatch.captured(1);

    const QString pacmanMesa = runCommand(QStringLiteral("pacman"), { QStringLiteral("-Q"), QStringLiteral("mesa") });
    if (!pacmanMesa.isEmpty())
        return pacmanMesa.section(QLatin1Char(' '), 1, 1);

    return QString();
}

}

SystemInfo::SystemInfo(QObject *parent) : QObject(parent) {
    connect(&m_timer, &QTimer::timeout, this, &SystemInfo::update);
    m_timer.start(5000);
    readHardware();
    update();
}

void SystemInfo::update() {
    readBattery();
    readNetwork();
}

void SystemInfo::readBattery() {
    QString basePath = "/sys/class/power_supply/";
    QDir dir(basePath);
    QStringList entries = dir.entryList(QDir::Dirs | QDir::NoDotAndDotDot);

    for (const QString &entry : entries) {
        if (entry.startsWith("BAT")) {
            QString capacityPath = basePath + entry + "/capacity";
            QString statusPath = basePath + entry + "/status";

            QFile capacityFile(capacityPath);
            if (capacityFile.open(QIODevice::ReadOnly)) {
                QTextStream stream(&capacityFile);
                int level = stream.readAll().trimmed().toInt();
                if (level != m_batteryLevel) {
                    m_batteryLevel = level;
                    emit batteryLevelChanged();
                }
            }

            QFile statusFile(statusPath);
            if (statusFile.open(QIODevice::ReadOnly)) {
                QTextStream stream(&statusFile);
                bool charging = stream.readAll().trimmed() == "Charging";
                if (charging != m_batteryCharging) {
                    m_batteryCharging = charging;
                    emit batteryChargingChanged();
                }
            }

            if (!m_hasBattery) {
                m_hasBattery = true;
                emit hasBatteryChanged();
            }
            return;
        }
    }

    if (m_hasBattery) {
        m_hasBattery = false;
        emit hasBatteryChanged();
    }
}

void SystemInfo::readNetwork() {
    QString path = "/sys/class/net/";
    QDir dir(path);
    QStringList entries = dir.entryList(QDir::Dirs | QDir::NoDotAndDotDot);

    bool connected = false;
    for (const QString &entry : entries) {
        if (entry == "lo") continue;
        QFile operstate(path + entry + "/operstate");
        if (operstate.open(QIODevice::ReadOnly)) {
            QTextStream stream(&operstate);
            QString state = stream.readAll().trimmed();
            if (state == "up" || state == "unknown") {
                connected = true;
                break;
            }
        }
    }

    if (connected != m_networkConnected) {
        m_networkConnected = connected;
        emit networkConnectedChanged();
    }
}

void SystemInfo::readHardware()
{
    QString gpuName;
    QString vram;
    QString activeDriver;

    const QString drmPath = QStringLiteral("/sys/class/drm");
    QDir drmDir(drmPath);
    const QStringList cards = drmDir.entryList({ QStringLiteral("card[0-9]*") }, QDir::Dirs | QDir::NoDotAndDotDot, QDir::Name);

    for (const QString &card : cards) {
        const QString devicePath = drmDir.filePath(card + QStringLiteral("/device"));
        if (!QDir(devicePath).exists())
            continue;

        if (gpuName.isEmpty())
            gpuName = gpuNameFromSysfs(devicePath);

        if (vram.isEmpty()) {
            bool ok = false;
            const qint64 totalVram = readTextFile(devicePath + QStringLiteral("/mem_info_vram_total")).toLongLong(&ok);
            if (ok)
                vram = formatBytes(totalVram);
        }

        if (activeDriver.isEmpty()) {
            const QFileInfo driverLink(devicePath + QStringLiteral("/driver"));
            if (driverLink.exists())
                activeDriver = driverLink.symLinkTarget().section(QLatin1Char('/'), -1);
        }

        if (!gpuName.isEmpty() && !activeDriver.isEmpty() && !vram.isEmpty())
            break;
    }

    if (gpuName.isEmpty()) {
        const QString lspci = runCommand(QStringLiteral("lspci"), {});
        gpuName = firstMatchingLine(lspci, QRegularExpression(QStringLiteral("(?i)(?:VGA compatible controller|3D controller|Display controller):\\s*(.+)$")));
    }

    if (activeDriver.isEmpty()) {
        const QString lspciKernel = runCommand(QStringLiteral("lspci"), { QStringLiteral("-k") });
        activeDriver = firstMatchingLine(lspciKernel, QRegularExpression(QStringLiteral("^Kernel driver in use:\\s*(.+)$")));
    }

    m_gpuName = unknownIfEmpty(gpuName);
    m_vram = unknownIfEmpty(vram);
    m_activeDriver = unknownIfEmpty(activeDriver);
    m_kernelVersion = unknownIfEmpty(QSysInfo::kernelVersion());
    m_mesaVersion = unknownIfEmpty(mesaVersion());
    emit hardwareChanged();
}
