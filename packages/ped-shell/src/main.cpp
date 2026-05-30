#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "systeminfo.h"

int main(int argc, char *argv[]) {
    QGuiApplication app(argc, argv);

    SystemInfo systemInfo;

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("systemInfo", &systemInfo);
    engine.load(QUrl(QStringLiteral("qrc:/PedShell/qml/Main.qml")));

    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}