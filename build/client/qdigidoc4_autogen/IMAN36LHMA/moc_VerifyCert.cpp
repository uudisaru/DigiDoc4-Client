/****************************************************************************
** Meta object code from reading C++ file 'VerifyCert.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../client/widgets/VerifyCert.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VerifyCert.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VerifyCert_t {
    QByteArrayData data[8];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VerifyCert_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VerifyCert_t qt_meta_stringdata_VerifyCert = {
    {
QT_MOC_LITERAL(0, 0, 10), // "VerifyCert"
QT_MOC_LITERAL(1, 11, 16), // "changePinClicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "isForgotPin"
QT_MOC_LITERAL(4, 41, 12), // "isBlockedPin"
QT_MOC_LITERAL(5, 54, 18), // "certDetailsClicked"
QT_MOC_LITERAL(6, 73, 4), // "link"
QT_MOC_LITERAL(7, 78, 15) // "showWarningIcon"

    },
    "VerifyCert\0changePinClicked\0\0isForgotPin\0"
    "isBlockedPin\0certDetailsClicked\0link\0"
    "showWarningIcon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VerifyCert[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       5,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void VerifyCert::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VerifyCert *_t = static_cast<VerifyCert *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changePinClicked((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->certDetailsClicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->showWarningIcon(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VerifyCert::*_t)(bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VerifyCert::changePinClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (VerifyCert::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VerifyCert::certDetailsClicked)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject VerifyCert::staticMetaObject = {
    { &StyledWidget::staticMetaObject, qt_meta_stringdata_VerifyCert.data,
      qt_meta_data_VerifyCert,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *VerifyCert::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VerifyCert::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VerifyCert.stringdata0))
        return static_cast<void*>(const_cast< VerifyCert*>(this));
    return StyledWidget::qt_metacast(_clname);
}

int VerifyCert::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StyledWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void VerifyCert::changePinClicked(bool _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VerifyCert::certDetailsClicked(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
