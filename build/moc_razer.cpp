/****************************************************************************
** Meta object code from reading C++ file 'razer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../razer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'razer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Razer_t {
    const uint offsetsAndSize[18];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Razer_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Razer_t qt_meta_stringdata_Razer = {
    {
QT_MOC_LITERAL(0, 5), // "Razer"
QT_MOC_LITERAL(6, 20), // "onPowerPresetChanged"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 12), // "onCPUChanged"
QT_MOC_LITERAL(41, 12), // "onGPUChanged"
QT_MOC_LITERAL(54, 14), // "onPowerApplied"
QT_MOC_LITERAL(69, 18), // "onFanPresetChanged"
QT_MOC_LITERAL(88, 15), // "onFanRPMChanged"
QT_MOC_LITERAL(104, 12) // "onFanApplied"

    },
    "Razer\0onPowerPresetChanged\0\0onCPUChanged\0"
    "onGPUChanged\0onPowerApplied\0"
    "onFanPresetChanged\0onFanRPMChanged\0"
    "onFanApplied"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Razer[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x0a,    0 /* Public */,
       3,    1,   59,    2, 0x0a,    2 /* Public */,
       4,    1,   62,    2, 0x0a,    4 /* Public */,
       5,    0,   65,    2, 0x0a,    6 /* Public */,
       6,    1,   66,    2, 0x0a,    7 /* Public */,
       7,    1,   69,    2, 0x0a,    9 /* Public */,
       8,    0,   72,    2, 0x0a,   11 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void Razer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Razer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onPowerPresetChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onCPUChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onGPUChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onPowerApplied(); break;
        case 4: _t->onFanPresetChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->onFanRPMChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->onFanApplied(); break;
        default: ;
        }
    }
}

const QMetaObject Razer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Razer.offsetsAndSize,
    qt_meta_data_Razer,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Razer_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Razer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Razer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Razer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Razer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
