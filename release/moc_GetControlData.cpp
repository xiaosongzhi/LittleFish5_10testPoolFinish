/****************************************************************************
** Meta object code from reading C++ file 'GetControlData.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../GetControlData.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GetControlData.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GetControlData_t {
    QByteArrayData data[8];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetControlData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetControlData_t qt_meta_stringdata_GetControlData = {
    {
QT_MOC_LITERAL(0, 0, 14), // "GetControlData"
QT_MOC_LITERAL(1, 15, 26), // "sendControlDataToTransport"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 17), // "Data_MOVE_TypeDef"
QT_MOC_LITERAL(4, 61, 17), // "sendStableFormate"
QT_MOC_LITERAL(5, 79, 20), // "Data_FORMATE_TypeDef"
QT_MOC_LITERAL(6, 100, 7), // "openJoy"
QT_MOC_LITERAL(7, 108, 7) // "joyMove"

    },
    "GetControlData\0sendControlDataToTransport\0"
    "\0Data_MOVE_TypeDef\0sendStableFormate\0"
    "Data_FORMATE_TypeDef\0openJoy\0joyMove"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetControlData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   40,    2, 0x0a /* Public */,
       7,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,

       0        // eod
};

void GetControlData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GetControlData *_t = static_cast<GetControlData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendControlDataToTransport((*reinterpret_cast< Data_MOVE_TypeDef(*)>(_a[1]))); break;
        case 1: _t->sendStableFormate((*reinterpret_cast< Data_FORMATE_TypeDef(*)>(_a[1]))); break;
        case 2: { bool _r = _t->openJoy();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: _t->joyMove(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GetControlData::*_t)(Data_MOVE_TypeDef );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GetControlData::sendControlDataToTransport)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (GetControlData::*_t)(Data_FORMATE_TypeDef );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GetControlData::sendStableFormate)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject GetControlData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GetControlData.data,
      qt_meta_data_GetControlData,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GetControlData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetControlData::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GetControlData.stringdata0))
        return static_cast<void*>(const_cast< GetControlData*>(this));
    return QObject::qt_metacast(_clname);
}

int GetControlData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void GetControlData::sendControlDataToTransport(Data_MOVE_TypeDef _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GetControlData::sendStableFormate(Data_FORMATE_TypeDef _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
