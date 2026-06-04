#pragma once

#include <QObject>
#include <QSettings>

class UserSettings : public QObject
{
    Q_OBJECT

    Q_PROPERTY(int themeIndex READ themeIndex WRITE setThemeIndex NOTIFY themeIndexChanged)
    Q_PROPERTY(QString languageCode READ languageCode WRITE setLanguageCode NOTIFY languageCodeChanged)
    Q_PROPERTY(bool statsOverlayVisible READ statsOverlayVisible WRITE setStatsOverlayVisible NOTIFY statsOverlayVisibleChanged)
    Q_PROPERTY(bool firstSetupCompleted READ firstSetupCompleted WRITE setFirstSetupCompleted NOTIFY firstSetupCompletedChanged)
    Q_PROPERTY(QString controlCenterSection READ controlCenterSection WRITE setControlCenterSection NOTIFY controlCenterSectionChanged)

public:
    explicit UserSettings(QObject *parent = nullptr);

    int themeIndex() const { return m_themeIndex; }
    QString languageCode() const { return m_languageCode; }
    bool statsOverlayVisible() const { return m_statsOverlayVisible; }
    bool firstSetupCompleted() const { return m_firstSetupCompleted; }
    QString controlCenterSection() const { return m_controlCenterSection; }

public slots:
    void setThemeIndex(int themeIndex);
    void setLanguageCode(const QString &languageCode);
    void setStatsOverlayVisible(bool visible);
    void setFirstSetupCompleted(bool completed);
    void setControlCenterSection(const QString &section);

signals:
    void themeIndexChanged();
    void languageCodeChanged();
    void statsOverlayVisibleChanged();
    void firstSetupCompletedChanged();
    void controlCenterSectionChanged();

private:
    QSettings m_settings;
    int m_themeIndex = 0;
    QString m_languageCode = "en";
    bool m_statsOverlayVisible = false;
    bool m_firstSetupCompleted = false;
    QString m_controlCenterSection = "system";
};
