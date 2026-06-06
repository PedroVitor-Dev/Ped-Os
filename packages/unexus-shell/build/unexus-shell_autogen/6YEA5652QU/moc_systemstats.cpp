/****************************************************************************
** Meta object code from reading C++ file 'systemstats.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/systemstats.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systemstats.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11SystemStatsE_t {};
} // unnamed namespace

template <> constexpr inline auto SystemStats::qt_create_metaobjectdata<qt_meta_tag_ZN11SystemStatsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SystemStats",
        "cpuUsageChanged",
        "",
        "gpuUsageChanged",
        "gpuTempChanged",
        "ramUsageChanged",
        "gpuAvailabilityChanged",
        "visibleChanged",
        "update",
        "cpuUsage",
        "gpuUsage",
        "gpuTemp",
        "ramUsage",
        "hasGpuStats",
        "hasGpuTemp",
        "visible"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'cpuUsageChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'gpuUsageChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'gpuTempChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'ramUsageChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'gpuAvailabilityChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'visibleChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'update'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'cpuUsage'
        QtMocHelpers::PropertyData<int>(9, QMetaType::Int, QMC::DefaultPropertyFlags, 0),
        // property 'gpuUsage'
        QtMocHelpers::PropertyData<int>(10, QMetaType::Int, QMC::DefaultPropertyFlags, 1),
        // property 'gpuTemp'
        QtMocHelpers::PropertyData<int>(11, QMetaType::Int, QMC::DefaultPropertyFlags, 2),
        // property 'ramUsage'
        QtMocHelpers::PropertyData<int>(12, QMetaType::Int, QMC::DefaultPropertyFlags, 3),
        // property 'hasGpuStats'
        QtMocHelpers::PropertyData<bool>(13, QMetaType::Bool, QMC::DefaultPropertyFlags, 4),
        // property 'hasGpuTemp'
        QtMocHelpers::PropertyData<bool>(14, QMetaType::Bool, QMC::DefaultPropertyFlags, 4),
        // property 'visible'
        QtMocHelpers::PropertyData<bool>(15, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SystemStats, qt_meta_tag_ZN11SystemStatsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SystemStats::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11SystemStatsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11SystemStatsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11SystemStatsE_t>.metaTypes,
    nullptr
} };

void SystemStats::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SystemStats *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->cpuUsageChanged(); break;
        case 1: _t->gpuUsageChanged(); break;
        case 2: _t->gpuTempChanged(); break;
        case 3: _t->ramUsageChanged(); break;
        case 4: _t->gpuAvailabilityChanged(); break;
        case 5: _t->visibleChanged(); break;
        case 6: _t->update(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SystemStats::*)()>(_a, &SystemStats::cpuUsageChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SystemStats::*)()>(_a, &SystemStats::gpuUsageChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (SystemStats::*)()>(_a, &SystemStats::gpuTempChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (SystemStats::*)()>(_a, &SystemStats::ramUsageChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (SystemStats::*)()>(_a, &SystemStats::gpuAvailabilityChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (SystemStats::*)()>(_a, &SystemStats::visibleChanged, 5))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->cpuUsage(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->gpuUsage(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->gpuTemp(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->ramUsage(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->hasGpuStats(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->hasGpuTemp(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->visible(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 6: _t->setVisible(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *SystemStats::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemStats::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11SystemStatsE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SystemStats::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void SystemStats::cpuUsageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SystemStats::gpuUsageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SystemStats::gpuTempChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SystemStats::ramUsageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SystemStats::gpuAvailabilityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void SystemStats::visibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
