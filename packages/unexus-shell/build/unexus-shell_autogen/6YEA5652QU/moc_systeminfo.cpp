/****************************************************************************
** Meta object code from reading C++ file 'systeminfo.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/systeminfo.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systeminfo.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10SystemInfoE_t {};
} // unnamed namespace

template <> constexpr inline auto SystemInfo::qt_create_metaobjectdata<qt_meta_tag_ZN10SystemInfoE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SystemInfo",
        "batteryLevelChanged",
        "",
        "batteryChargingChanged",
        "networkConnectedChanged",
        "hasBatteryChanged",
        "update",
        "batteryLevel",
        "batteryCharging",
        "networkConnected",
        "hasBattery"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'batteryLevelChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'batteryChargingChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'networkConnectedChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'hasBatteryChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'update'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'batteryLevel'
        QtMocHelpers::PropertyData<int>(7, QMetaType::Int, QMC::DefaultPropertyFlags, 0),
        // property 'batteryCharging'
        QtMocHelpers::PropertyData<bool>(8, QMetaType::Bool, QMC::DefaultPropertyFlags, 1),
        // property 'networkConnected'
        QtMocHelpers::PropertyData<bool>(9, QMetaType::Bool, QMC::DefaultPropertyFlags, 2),
        // property 'hasBattery'
        QtMocHelpers::PropertyData<bool>(10, QMetaType::Bool, QMC::DefaultPropertyFlags, 3),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SystemInfo, qt_meta_tag_ZN10SystemInfoE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SystemInfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10SystemInfoE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10SystemInfoE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10SystemInfoE_t>.metaTypes,
    nullptr
} };

void SystemInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SystemInfo *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->batteryLevelChanged(); break;
        case 1: _t->batteryChargingChanged(); break;
        case 2: _t->networkConnectedChanged(); break;
        case 3: _t->hasBatteryChanged(); break;
        case 4: _t->update(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SystemInfo::*)()>(_a, &SystemInfo::batteryLevelChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SystemInfo::*)()>(_a, &SystemInfo::batteryChargingChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (SystemInfo::*)()>(_a, &SystemInfo::networkConnectedChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (SystemInfo::*)()>(_a, &SystemInfo::hasBatteryChanged, 3))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->batteryLevel(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->batteryCharging(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->networkConnected(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->hasBattery(); break;
        default: break;
        }
    }
}

const QMetaObject *SystemInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10SystemInfoE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SystemInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SystemInfo::batteryLevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SystemInfo::batteryChargingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SystemInfo::networkConnectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SystemInfo::hasBatteryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
