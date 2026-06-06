#include "installerbackend.h"

#include <QGuiApplication>
#include <QDebug>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QQmlError>
#include <QUrl>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    app.setApplicationName(QStringLiteral("uNexus Installer"));
    app.setOrganizationName(QStringLiteral("uNexus"));

    QQmlApplicationEngine engine;
    QObject::connect(&engine, &QQmlApplicationEngine::warnings, [](const QList<QQmlError> &warnings) {
        for (const QQmlError &warning : warnings)
            qWarning().noquote() << warning.toString();
    });

    InstallerBackend installer;
    engine.rootContext()->setContextProperty(QStringLiteral("installer"), &installer);
    engine.loadFromModule(QStringLiteral("UNexusInstaller"), QStringLiteral("Main"));

    if (engine.rootObjects().isEmpty()) {
        qWarning() << "uNexus Installer failed to load its QML entrypoint";
        return 1;
    }

    return app.exec();
}
