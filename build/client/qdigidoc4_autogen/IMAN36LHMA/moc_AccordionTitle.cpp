/****************************************************************************
** Meta object code from reading C++ file 'AccordionTitle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../client/widgets/AccordionTitle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AccordionTitle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AccordionTitle_t {
    QByteArrayData data[5];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AccordionTitle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AccordionTitle_t qt_meta_stringdata_AccordionTitle = {
    {
QT_MOC_LITERAL(0, 0, 14), // "AccordionTitle"
QT_MOC_LITERAL(1, 15, 6), // "closed"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 15), // "AccordionTitle*"
QT_MOC_LITERAL(4, 39, 6) // "opened"

    },
    "AccordionTitle\0closed\0\0AccordionTitle*\0"
    "opened"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AccordionTitle[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void AccordionTitle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AccordionTitle *_t = static_cast<AccordionTitle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closed((*reinterpret_cast< AccordionTitle*(*)>(_a[1]))); break;
        case 1: _t->opened((*reinterpret_cast< AccordionTitle*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccordionTitle* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccordionTitle* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AccordionTitle::*_t)(AccordionTitle * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AccordionTitle::closed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AccordionTitle::*_t)(AccordionTitle * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AccordionTitle::opened)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject AccordionTitle::staticMetaObject = {
    { &StyledWidget::staticMetaObject, qt_meta_stringdata_AccordionTitle.data,
      qt_meta_data_AccordionTitle,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AccordionTitle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AccordionTitle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AccordionTitle.stringdata0))
        return static_cast<void*>(const_cast< AccordionTitle*>(this));
    return StyledWidget::qt_metacast(_clname);
}

int AccordionTitle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StyledWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void AccordionTitle::closed(AccordionTitle * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AccordionTitle::opened(AccordionTitle * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
