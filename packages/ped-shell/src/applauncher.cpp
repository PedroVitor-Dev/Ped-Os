#include "applauncher.h"
#include <QProcess>
#include <QStandardPaths>

AppLauncher::AppLauncher(QObject *parent) : QObject(parent) {}

bool AppLauncher::launch(const QString &command, const QStringList &arguments) {
    if (command.trimmed().isEmpty())
        return false;
    return QProcess::startDetached(command, arguments);
}

bool AppLauncher::launchFirstAvailable(const QStringList &commands, const QStringList &arguments) {
    for (const QString &command : commands) {
        if (QStandardPaths::findExecutable(command).isEmpty())
            continue;
        if (QProcess::startDetached(command, arguments))
            return true;
    }
    return false;
}

bool AppLauncher::isInstalled(const QString &command) {
    return !QStandardPaths::findExecutable(command).isEmpty();
}

bool AppLauncher::isFlatpakInstalled(const QString &flatpakId) {
    QProcess process;
    process.start("flatpak", {"info", flatpakId});
    process.waitForFinished(3000);
    return process.exitCode() == 0;
}