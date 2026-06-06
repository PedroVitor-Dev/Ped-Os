/****************************************************************************
** Meta object code from reading C++ file 'applauncher.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/applauncher.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'applauncher.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11AppLauncherE_t {};
} // unnamed namespace

template <> constexpr inline auto AppLauncher::qt_create_metaobjectdata<qt_meta_tag_ZN11AppLauncherE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "AppLauncher",
        "launch",
        "",
        "command",
        "arguments",
        "launchFirstAvailable",
        "commands",
        "isInstalled",
        "isFlatpakInstalled",
        "flatpakId",
        "installFlatpak",
        "isMangoHudInstalled",
        "isGameModeRunInstalled",
        "isWindowOpen",
        "windowClasses",
        "isWindowHidden",
        "isProcessRunning",
        "processNames",
        "copyToClipboard",
        "text",
        "findIcon",
        "iconNames",
        "focusWindow",
        "focusOrLaunch",
        "focusOrLaunchGame",
        "useMangoHud",
        "useGameMode",
        "closeWindow",
        "closeApp",
        "maximizeWindow",
        "moveWindowToNextWorkspace",
        "minimizeWindow",
        "restoreWindow",
        "windowPreviewDirection",
        "QVariantMap",
        "workspaces",
        "QVariantList",
        "workspaceWindows",
        "focusWorkspace",
        "workspaceId",
        "focusWindowAddress",
        "address",
        "moveWindowAddressToWorkspace",
        "activeWorkspace"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'launch'
        QtMocHelpers::MethodData<bool(const QString &, const QStringList &)>(1, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 3 }, { QMetaType::QStringList, 4 },
        }}),
        // Method 'launch'
        QtMocHelpers::MethodData<bool(const QString &)>(1, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QString, 3 },
        }}),
        // Method 'launchFirstAvailable'
        QtMocHelpers::MethodData<bool(const QStringList &, const QStringList &)>(5, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QStringList, 6 }, { QMetaType::QStringList, 4 },
        }}),
        // Method 'launchFirstAvailable'
        QtMocHelpers::MethodData<bool(const QStringList &)>(5, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QStringList, 6 },
        }}),
        // Method 'isInstalled'
        QtMocHelpers::MethodData<bool(const QString &)>(7, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 3 },
        }}),
        // Method 'isFlatpakInstalled'
        QtMocHelpers::MethodData<bool(const QString &)>(8, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 9 },
        }}),
        // Method 'installFlatpak'
        QtMocHelpers::MethodData<bool(const QString &)>(10, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 9 },
        }}),
        // Method 'isMangoHudInstalled'
        QtMocHelpers::MethodData<bool()>(11, 2, QMC::AccessPublic, QMetaType::Bool),
        // Method 'isGameModeRunInstalled'
        QtMocHelpers::MethodData<bool()>(12, 2, QMC::AccessPublic, QMetaType::Bool),
        // Method 'isWindowOpen'
        QtMocHelpers::MethodData<bool(const QStringList &)>(13, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QStringList, 14 },
        }}),
        // Method 'isWindowHidden'
        QtMocHelpers::MethodData<bool(const QStringList &)>(15, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QStringList, 14 },
        }}),
        // Method 'isProcessRunning'
        QtMocHelpers::MethodData<bool(const QStringList &)>(16, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QStringList, 17 },
        }}),
        // Method 'copyToClipboard'
        QtMocHelpers::MethodData<void(const QString &)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 19 },
        }}),
        // Method 'findIcon'
        QtMocHelpers::MethodData<QString(const QStringList &)>(20, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QStringList, 21 },
        }}),
        // Method 'focusWindow'
        QtMocHelpers::MethodData<bool(const QStringList &)>(22, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QStringList, 14 },
        }}),
        // Method 'focusOrLaunch'
        QtMocHelpers::MethodData<bool(const QStringList &, const QString &, const QStringList &, const QString &)>(23, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QStringList, 14 }, { QMetaType::QString, 3 }, { QMetaType::QStringList, 4 }, { QMetaType::QString, 9 },
        }}),
        // Method 'focusOrLaunch'
        QtMocHelpers::MethodData<bool(const QStringList &, const QString &, const QStringList &)>(23, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QStringList, 14 }, { QMetaType::QString, 3 }, { QMetaType::QStringList, 4 },
        }}),
        // Method 'focusOrLaunch'
        QtMocHelpers::MethodData<bool(const QStringList &, const QString &)>(23, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QStringList, 14 }, { QMetaType::QString, 3 },
        }}),
        // Method 'focusOrLaunchGame'
        QtMocHelpers::MethodData<bool(const QStringList &, const QString &, const QStringList &, const QString &, bool, bool)>(24, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QStringList, 14 }, { QMetaType::QString, 3 }, { QMetaType::QStringList, 4 }, { QMetaType::QString, 9 },
            { QMetaType::Bool, 25 }, { QMetaType::Bool, 26 },
        }}),
        // Method 'focusOrLaunchGame'
        QtMocHelpers::MethodData<bool(const QStringList &, const QString &, const QStringList &, const QString &, bool)>(24, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QStringList, 14 }, { QMetaType::QString, 3 }, { QMetaType::QStringList, 4 }, { QMetaType::QString, 9 },
            { QMetaType::Bool, 25 },
        }}),
        // Method 'focusOrLaunchGame'
        QtMocHelpers::MethodData<bool(const QStringList &, const QString &, const QStringList &, const QString &)>(24, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QStringList, 14 }, { QMetaType::QString, 3 }, { QMetaType::QStringList, 4 }, { QMetaType::QString, 9 },
        }}),
        // Method 'focusOrLaunchGame'
        QtMocHelpers::MethodData<bool(const QStringList &, const QString &, const QStringList &)>(24, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QStringList, 14 }, { QMetaType::QString, 3 }, { QMetaType::QStringList, 4 },
        }}),
        // Method 'focusOrLaunchGame'
        QtMocHelpers::MethodData<bool(const QStringList &, const QString &)>(24, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QStringList, 14 }, { QMetaType::QString, 3 },
        }}),
        // Method 'closeWindow'
        QtMocHelpers::MethodData<bool(const QStringList &)>(27, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QStringList, 14 },
        }}),
        // Method 'closeApp'
        QtMocHelpers::MethodData<bool(const QStringList &, const QStringList &)>(28, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QStringList, 14 }, { QMetaType::QStringList, 17 },
        }}),
        // Method 'maximizeWindow'
        QtMocHelpers::MethodData<bool(const QStringList &)>(29, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QStringList, 14 },
        }}),
        // Method 'moveWindowToNextWorkspace'
        QtMocHelpers::MethodData<bool(const QStringList &)>(30, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QStringList, 14 },
        }}),
        // Method 'minimizeWindow'
        QtMocHelpers::MethodData<bool(const QStringList &)>(31, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QStringList, 14 },
        }}),
        // Method 'restoreWindow'
        QtMocHelpers::MethodData<bool(const QStringList &)>(32, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QStringList, 14 },
        }}),
        // Method 'windowPreviewDirection'
        QtMocHelpers::MethodData<QVariantMap(const QStringList &)>(33, 2, QMC::AccessPublic, 0x80000000 | 34, {{
            { QMetaType::QStringList, 14 },
        }}),
        // Method 'workspaces'
        QtMocHelpers::MethodData<QVariantList()>(35, 2, QMC::AccessPublic, 0x80000000 | 36),
        // Method 'workspaceWindows'
        QtMocHelpers::MethodData<QVariantList()>(37, 2, QMC::AccessPublic, 0x80000000 | 36),
        // Method 'focusWorkspace'
        QtMocHelpers::MethodData<bool(int)>(38, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 39 },
        }}),
        // Method 'focusWindowAddress'
        QtMocHelpers::MethodData<bool(const QString &)>(40, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 41 },
        }}),
        // Method 'moveWindowAddressToWorkspace'
        QtMocHelpers::MethodData<bool(const QString &, int)>(42, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 41 }, { QMetaType::Int, 39 },
        }}),
        // Method 'activeWorkspace'
        QtMocHelpers::MethodData<int()>(43, 2, QMC::AccessPublic, QMetaType::Int),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AppLauncher, qt_meta_tag_ZN11AppLauncherE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject AppLauncher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11AppLauncherE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11AppLauncherE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11AppLauncherE_t>.metaTypes,
    nullptr
} };

void AppLauncher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AppLauncher *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { bool _r = _t->launch((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->launch((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->launchFirstAvailable((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->launchFirstAvailable((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->isInstalled((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->isFlatpakInstalled((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->installFlatpak((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->isMangoHudInstalled();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->isGameModeRunInstalled();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->isWindowOpen((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->isWindowHidden((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->isProcessRunning((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->copyToClipboard((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: { QString _r = _t->findIcon((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->focusWindow((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 15: { bool _r = _t->focusOrLaunch((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[4])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 16: { bool _r = _t->focusOrLaunch((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[3])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 17: { bool _r = _t->focusOrLaunch((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 18: { bool _r = _t->focusOrLaunchGame((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[6])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 19: { bool _r = _t->focusOrLaunchGame((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[5])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 20: { bool _r = _t->focusOrLaunchGame((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[4])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 21: { bool _r = _t->focusOrLaunchGame((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[3])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 22: { bool _r = _t->focusOrLaunchGame((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 23: { bool _r = _t->closeWindow((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 24: { bool _r = _t->closeApp((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 25: { bool _r = _t->maximizeWindow((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 26: { bool _r = _t->moveWindowToNextWorkspace((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 27: { bool _r = _t->minimizeWindow((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 28: { bool _r = _t->restoreWindow((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 29: { QVariantMap _r = _t->windowPreviewDirection((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 30: { QVariantList _r = _t->workspaces();
            if (_a[0]) *reinterpret_cast<QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 31: { QVariantList _r = _t->workspaceWindows();
            if (_a[0]) *reinterpret_cast<QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 32: { bool _r = _t->focusWorkspace((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 33: { bool _r = _t->focusWindowAddress((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 34: { bool _r = _t->moveWindowAddressToWorkspace((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 35: { int _r = _t->activeWorkspace();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *AppLauncher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppLauncher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11AppLauncherE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AppLauncher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 36)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 36;
    }
    return _id;
}
QT_WARNING_POP
