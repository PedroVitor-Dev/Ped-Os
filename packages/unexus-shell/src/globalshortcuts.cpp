#include "globalshortcuts.h"

#include <QDateTime>
#include <QDir>
#include <QFile>
#include <QSaveFile>
#include <QStandardPaths>
#include <QTextStream>

namespace {
QString runtimeRoot()
{
    QString runtimeDir = qEnvironmentVariable("XDG_RUNTIME_DIR");
    if (runtimeDir.trimmed().isEmpty())
        runtimeDir = QDir::tempPath();

    return runtimeDir + QStringLiteral("/unexus");
}

bool isKnownAction(const QString &action)
{
    return action == QStringLiteral("launcher") ||
           action == QStringLiteral("settings") ||
           action == QStringLiteral("stats") ||
           action == QStringLiteral("gameSettings");
}
}

GlobalShortcuts::GlobalShortcuts(QObject *parent)
    : QObject(parent)
{
    connect(&m_watcher, &QFileSystemWatcher::fileChanged, this, &GlobalShortcuts::readCommandFile);
}

QString GlobalShortcuts::commandFilePath()
{
    return runtimeRoot() + QStringLiteral("/shortcut-command");
}

bool GlobalShortcuts::sendShortcutCommand(const QString &action)
{
    const QString normalizedAction = action.trimmed();
    if (!isKnownAction(normalizedAction))
        return false;

    QDir().mkpath(runtimeRoot());

    QSaveFile file(commandFilePath());
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return false;

    QTextStream stream(&file);
    stream << normalizedAction << ' ' << QDateTime::currentMSecsSinceEpoch() << '\n';
    return file.commit();
}

void GlobalShortcuts::start()
{
    QDir().mkpath(runtimeRoot());

    const QString commandPath = commandFilePath();
    if (!QFile::exists(commandPath)) {
        QFile file(commandPath);
        if (file.open(QIODevice::WriteOnly | QIODevice::Text))
            file.close();
    }

    if (!m_watcher.files().contains(commandPath))
        m_watcher.addPath(commandPath);
}

void GlobalShortcuts::readCommandFile()
{
    const QString commandPath = commandFilePath();
    if (!m_watcher.files().contains(commandPath) && QFile::exists(commandPath))
        m_watcher.addPath(commandPath);

    QFile file(commandPath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    const QString payload = QString::fromUtf8(file.readAll()).trimmed();
    if (payload.isEmpty() || payload == m_lastCommand)
        return;

    m_lastCommand = payload;
    const QString action = payload.section(' ', 0, 0).trimmed();
    if (isKnownAction(action))
        emit actionRequested(action);
}