#pragma once

#include <QFileSystemWatcher>
#include <QObject>
#include <QString>

class GlobalShortcuts : public QObject
{
    Q_OBJECT

public:
    explicit GlobalShortcuts(QObject *parent = nullptr);

    Q_INVOKABLE void start();
    static bool sendShortcutCommand(const QString &action);
    static QString commandFilePath();

signals:
    void actionRequested(const QString &action);

private slots:
    void readCommandFile();

private:
    QFileSystemWatcher m_watcher;
    QString m_lastCommand;
};