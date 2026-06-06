/****************************************************************************
** Meta object code from reading C++ file 'filemanager.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/filemanager.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filemanager.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11FileManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto FileManager::qt_create_metaobjectdata<qt_meta_tag_ZN11FileManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FileManager",
        "operationQueueChanged",
        "",
        "operationFinished",
        "id",
        "ok",
        "kind",
        "homePath",
        "parentPath",
        "path",
        "places",
        "QVariantList",
        "listDirectory",
        "openPath",
        "createFolder",
        "name",
        "renamePath",
        "newName",
        "moveToTrash",
        "movePathsToTrash",
        "paths",
        "copyPaths",
        "targetDirectory",
        "movePaths",
        "copyPathsAsync",
        "movePathsAsync",
        "movePathsToTrashAsync",
        "previewInfo",
        "QVariantMap",
        "operationQueue"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'operationQueueChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'operationFinished'
        QtMocHelpers::SignalData<void(int, bool, const QString &)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 4 }, { QMetaType::Bool, 5 }, { QMetaType::QString, 6 },
        }}),
        // Method 'homePath'
        QtMocHelpers::MethodData<QString() const>(7, 2, QMC::AccessPublic, QMetaType::QString),
        // Method 'parentPath'
        QtMocHelpers::MethodData<QString(const QString &) const>(8, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 9 },
        }}),
        // Method 'places'
        QtMocHelpers::MethodData<QVariantList() const>(10, 2, QMC::AccessPublic, 0x80000000 | 11),
        // Method 'listDirectory'
        QtMocHelpers::MethodData<QVariantList(const QString &) const>(12, 2, QMC::AccessPublic, 0x80000000 | 11, {{
            { QMetaType::QString, 9 },
        }}),
        // Method 'openPath'
        QtMocHelpers::MethodData<bool(const QString &) const>(13, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 9 },
        }}),
        // Method 'createFolder'
        QtMocHelpers::MethodData<bool(const QString &, const QString &) const>(14, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 8 }, { QMetaType::QString, 15 },
        }}),
        // Method 'renamePath'
        QtMocHelpers::MethodData<bool(const QString &, const QString &) const>(16, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 17 },
        }}),
        // Method 'moveToTrash'
        QtMocHelpers::MethodData<bool(const QString &) const>(18, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 9 },
        }}),
        // Method 'movePathsToTrash'
        QtMocHelpers::MethodData<bool(const QStringList &) const>(19, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QStringList, 20 },
        }}),
        // Method 'copyPaths'
        QtMocHelpers::MethodData<bool(const QStringList &, const QString &) const>(21, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QStringList, 20 }, { QMetaType::QString, 22 },
        }}),
        // Method 'movePaths'
        QtMocHelpers::MethodData<bool(const QStringList &, const QString &) const>(23, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QStringList, 20 }, { QMetaType::QString, 22 },
        }}),
        // Method 'copyPathsAsync'
        QtMocHelpers::MethodData<int(const QStringList &, const QString &)>(24, 2, QMC::AccessPublic, QMetaType::Int, {{
            { QMetaType::QStringList, 20 }, { QMetaType::QString, 22 },
        }}),
        // Method 'movePathsAsync'
        QtMocHelpers::MethodData<int(const QStringList &, const QString &)>(25, 2, QMC::AccessPublic, QMetaType::Int, {{
            { QMetaType::QStringList, 20 }, { QMetaType::QString, 22 },
        }}),
        // Method 'movePathsToTrashAsync'
        QtMocHelpers::MethodData<int(const QStringList &)>(26, 2, QMC::AccessPublic, QMetaType::Int, {{
            { QMetaType::QStringList, 20 },
        }}),
        // Method 'previewInfo'
        QtMocHelpers::MethodData<QVariantMap(const QString &) const>(27, 2, QMC::AccessPublic, 0x80000000 | 28, {{
            { QMetaType::QString, 9 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'operationQueue'
        QtMocHelpers::PropertyData<QVariantList>(29, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 0),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FileManager, qt_meta_tag_ZN11FileManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FileManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11FileManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11FileManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11FileManagerE_t>.metaTypes,
    nullptr
} };

void FileManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FileManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->operationQueueChanged(); break;
        case 1: _t->operationFinished((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        case 2: { QString _r = _t->homePath();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->parentPath((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QVariantList _r = _t->places();
            if (_a[0]) *reinterpret_cast<QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 5: { QVariantList _r = _t->listDirectory((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->openPath((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->createFolder((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->renamePath((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->moveToTrash((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->movePathsToTrash((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->copyPaths((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->movePaths((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { int _r = _t->copyPathsAsync((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 14: { int _r = _t->movePathsAsync((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 15: { int _r = _t->movePathsToTrashAsync((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 16: { QVariantMap _r = _t->previewInfo((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QVariantMap*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (FileManager::*)()>(_a, &FileManager::operationQueueChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (FileManager::*)(int , bool , const QString & )>(_a, &FileManager::operationFinished, 1))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QVariantList*>(_v) = _t->operationQueue(); break;
        default: break;
        }
    }
}

const QMetaObject *FileManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11FileManagerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FileManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void FileManager::operationQueueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FileManager::operationFinished(int _t1, bool _t2, const QString & _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2, _t3);
}
QT_WARNING_POP
