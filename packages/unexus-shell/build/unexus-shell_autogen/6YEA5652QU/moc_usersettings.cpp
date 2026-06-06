/****************************************************************************
** Meta object code from reading C++ file 'usersettings.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/usersettings.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'usersettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN12UserSettingsE_t {};
} // unnamed namespace

template <> constexpr inline auto UserSettings::qt_create_metaobjectdata<qt_meta_tag_ZN12UserSettingsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "UserSettings",
        "themeIndexChanged",
        "",
        "languageCodeChanged",
        "statsOverlayVisibleChanged",
        "firstSetupCompletedChanged",
        "notificationsEnabledChanged",
        "wallpaperIdChanged",
        "launcherShortcutChanged",
        "settingsShortcutChanged",
        "gameSettingsShortcutChanged",
        "statsShortcutChanged",
        "controlCenterSectionChanged",
        "notificationTimeoutSecondsChanged",
        "setThemeIndex",
        "themeIndex",
        "setLanguageCode",
        "languageCode",
        "setStatsOverlayVisible",
        "visible",
        "setFirstSetupCompleted",
        "completed",
        "setNotificationsEnabled",
        "enabled",
        "setWallpaperId",
        "wallpaperId",
        "setLauncherShortcut",
        "shortcut",
        "setSettingsShortcut",
        "setGameSettingsShortcut",
        "setStatsShortcut",
        "setControlCenterSection",
        "section",
        "setNotificationTimeoutSeconds",
        "seconds",
        "statsOverlayVisible",
        "firstSetupCompleted",
        "notificationsEnabled",
        "launcherShortcut",
        "settingsShortcut",
        "gameSettingsShortcut",
        "statsShortcut",
        "controlCenterSection",
        "notificationTimeoutSeconds"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'themeIndexChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'languageCodeChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'statsOverlayVisibleChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'firstSetupCompletedChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'notificationsEnabledChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'wallpaperIdChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'launcherShortcutChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'settingsShortcutChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'gameSettingsShortcutChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'statsShortcutChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'controlCenterSectionChanged'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'notificationTimeoutSecondsChanged'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setThemeIndex'
        QtMocHelpers::SlotData<void(int)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 15 },
        }}),
        // Slot 'setLanguageCode'
        QtMocHelpers::SlotData<void(const QString &)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 17 },
        }}),
        // Slot 'setStatsOverlayVisible'
        QtMocHelpers::SlotData<void(bool)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 19 },
        }}),
        // Slot 'setFirstSetupCompleted'
        QtMocHelpers::SlotData<void(bool)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 21 },
        }}),
        // Slot 'setNotificationsEnabled'
        QtMocHelpers::SlotData<void(bool)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 23 },
        }}),
        // Slot 'setWallpaperId'
        QtMocHelpers::SlotData<void(const QString &)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 25 },
        }}),
        // Slot 'setLauncherShortcut'
        QtMocHelpers::SlotData<void(const QString &)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 27 },
        }}),
        // Slot 'setSettingsShortcut'
        QtMocHelpers::SlotData<void(const QString &)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 27 },
        }}),
        // Slot 'setGameSettingsShortcut'
        QtMocHelpers::SlotData<void(const QString &)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 27 },
        }}),
        // Slot 'setStatsShortcut'
        QtMocHelpers::SlotData<void(const QString &)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 27 },
        }}),
        // Slot 'setControlCenterSection'
        QtMocHelpers::SlotData<void(const QString &)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 32 },
        }}),
        // Slot 'setNotificationTimeoutSeconds'
        QtMocHelpers::SlotData<void(int)>(33, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 34 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'themeIndex'
        QtMocHelpers::PropertyData<int>(15, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'languageCode'
        QtMocHelpers::PropertyData<QString>(17, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'statsOverlayVisible'
        QtMocHelpers::PropertyData<bool>(35, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'firstSetupCompleted'
        QtMocHelpers::PropertyData<bool>(36, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'notificationsEnabled'
        QtMocHelpers::PropertyData<bool>(37, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'wallpaperId'
        QtMocHelpers::PropertyData<QString>(25, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'launcherShortcut'
        QtMocHelpers::PropertyData<QString>(38, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'settingsShortcut'
        QtMocHelpers::PropertyData<QString>(39, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'gameSettingsShortcut'
        QtMocHelpers::PropertyData<QString>(40, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'statsShortcut'
        QtMocHelpers::PropertyData<QString>(41, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 9),
        // property 'controlCenterSection'
        QtMocHelpers::PropertyData<QString>(42, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 10),
        // property 'notificationTimeoutSeconds'
        QtMocHelpers::PropertyData<int>(43, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 11),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<UserSettings, qt_meta_tag_ZN12UserSettingsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject UserSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12UserSettingsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12UserSettingsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12UserSettingsE_t>.metaTypes,
    nullptr
} };

void UserSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<UserSettings *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->themeIndexChanged(); break;
        case 1: _t->languageCodeChanged(); break;
        case 2: _t->statsOverlayVisibleChanged(); break;
        case 3: _t->firstSetupCompletedChanged(); break;
        case 4: _t->notificationsEnabledChanged(); break;
        case 5: _t->wallpaperIdChanged(); break;
        case 6: _t->launcherShortcutChanged(); break;
        case 7: _t->settingsShortcutChanged(); break;
        case 8: _t->gameSettingsShortcutChanged(); break;
        case 9: _t->statsShortcutChanged(); break;
        case 10: _t->controlCenterSectionChanged(); break;
        case 11: _t->notificationTimeoutSecondsChanged(); break;
        case 12: _t->setThemeIndex((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->setLanguageCode((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->setStatsOverlayVisible((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->setFirstSetupCompleted((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->setNotificationsEnabled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->setWallpaperId((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 18: _t->setLauncherShortcut((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->setSettingsShortcut((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: _t->setGameSettingsShortcut((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: _t->setStatsShortcut((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 22: _t->setControlCenterSection((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 23: _t->setNotificationTimeoutSeconds((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (UserSettings::*)()>(_a, &UserSettings::themeIndexChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (UserSettings::*)()>(_a, &UserSettings::languageCodeChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (UserSettings::*)()>(_a, &UserSettings::statsOverlayVisibleChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (UserSettings::*)()>(_a, &UserSettings::firstSetupCompletedChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (UserSettings::*)()>(_a, &UserSettings::notificationsEnabledChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (UserSettings::*)()>(_a, &UserSettings::wallpaperIdChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (UserSettings::*)()>(_a, &UserSettings::launcherShortcutChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (UserSettings::*)()>(_a, &UserSettings::settingsShortcutChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (UserSettings::*)()>(_a, &UserSettings::gameSettingsShortcutChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (UserSettings::*)()>(_a, &UserSettings::statsShortcutChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (UserSettings::*)()>(_a, &UserSettings::controlCenterSectionChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (UserSettings::*)()>(_a, &UserSettings::notificationTimeoutSecondsChanged, 11))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->themeIndex(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->languageCode(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->statsOverlayVisible(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->firstSetupCompleted(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->notificationsEnabled(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->wallpaperId(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->launcherShortcut(); break;
        case 7: *reinterpret_cast<QString*>(_v) = _t->settingsShortcut(); break;
        case 8: *reinterpret_cast<QString*>(_v) = _t->gameSettingsShortcut(); break;
        case 9: *reinterpret_cast<QString*>(_v) = _t->statsShortcut(); break;
        case 10: *reinterpret_cast<QString*>(_v) = _t->controlCenterSection(); break;
        case 11: *reinterpret_cast<int*>(_v) = _t->notificationTimeoutSeconds(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setThemeIndex(*reinterpret_cast<int*>(_v)); break;
        case 1: _t->setLanguageCode(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setStatsOverlayVisible(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setFirstSetupCompleted(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setNotificationsEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 5: _t->setWallpaperId(*reinterpret_cast<QString*>(_v)); break;
        case 6: _t->setLauncherShortcut(*reinterpret_cast<QString*>(_v)); break;
        case 7: _t->setSettingsShortcut(*reinterpret_cast<QString*>(_v)); break;
        case 8: _t->setGameSettingsShortcut(*reinterpret_cast<QString*>(_v)); break;
        case 9: _t->setStatsShortcut(*reinterpret_cast<QString*>(_v)); break;
        case 10: _t->setControlCenterSection(*reinterpret_cast<QString*>(_v)); break;
        case 11: _t->setNotificationTimeoutSeconds(*reinterpret_cast<int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *UserSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12UserSettingsE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UserSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 24;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void UserSettings::themeIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void UserSettings::languageCodeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void UserSettings::statsOverlayVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void UserSettings::firstSetupCompletedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void UserSettings::notificationsEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void UserSettings::wallpaperIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void UserSettings::launcherShortcutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void UserSettings::settingsShortcutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void UserSettings::gameSettingsShortcutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void UserSettings::statsShortcutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void UserSettings::controlCenterSectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void UserSettings::notificationTimeoutSecondsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
