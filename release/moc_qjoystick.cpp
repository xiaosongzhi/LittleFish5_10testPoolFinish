/****************************************************************************
** Meta object code from reading C++ file 'qjoystick.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qjoystick.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qjoystick.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QJoystick_t {
    QByteArrayData data[10];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QJoystick_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QJoystick_t qt_meta_stringdata_QJoystick = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QJoystick"
QT_MOC_LITERAL(1, 10, 13), // "JoystickEvent"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 15), // "QJoystickEvent*"
QT_MOC_LITERAL(4, 41, 5), // "event"
QT_MOC_LITERAL(5, 47, 19), // "JoystickButtonEvent"
QT_MOC_LITERAL(6, 67, 21), // "QJoystickButtonEvent*"
QT_MOC_LITERAL(7, 89, 17), // "JoystickAxisEvent"
QT_MOC_LITERAL(8, 107, 19), // "QJoystickAxisEvent*"
QT_MOC_LITERAL(9, 127, 12) // "readJoystick"

    },
    "QJoystick\0JoystickEvent\0\0QJoystickEvent*\0"
    "event\0JoystickButtonEvent\0"
    "QJoystickButtonEvent*\0JoystickAxisEvent\0"
    "QJoystickAxisEvent*\0readJoystick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QJoystick[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,
       7,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, 0x80000000 | 8,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QJoystick::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QJoystick *_t = static_cast<QJoystick *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->JoystickEvent((*reinterpret_cast< QJoystickEvent*(*)>(_a[1]))); break;
        case 1: _t->JoystickButtonEvent((*reinterpret_cast< QJoystickButtonEvent*(*)>(_a[1]))); break;
        case 2: _t->JoystickAxisEvent((*reinterpret_cast< QJoystickAxisEvent*(*)>(_a[1]))); break;
        case 3: _t->readJoystick(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QJoystick::*_t)(QJoystickEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QJoystick::JoystickEvent)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QJoystick::*_t)(QJoystickButtonEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QJoystick::JoystickButtonEvent)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QJoystick::*_t)(QJoystickAxisEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QJoystick::JoystickAxisEvent)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QJoystick::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QJoystick.data,
      qt_meta_data_QJoystick,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QJoystick::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QJoystick::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QJoystick.stringdata0))
        return static_cast<void*>(const_cast< QJoystick*>(this));
    return QObject::qt_metacast(_clname);
}

int QJoystick::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QJoystick::JoystickEvent(QJoystickEvent * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QJoystick::JoystickButtonEvent(QJoystickButtonEvent * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QJoystick::JoystickAxisEvent(QJoystickAxisEvent * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
