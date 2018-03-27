/****************************************************************************
** Meta object code from reading C++ file 'QSigner.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../client/QSigner.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSet>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QSigner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QSigner_t {
    QByteArrayData data[15];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSigner_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSigner_t qt_meta_stringdata_QSigner = {
    {
QT_MOC_LITERAL(0, 0, 7), // "QSigner"
QT_MOC_LITERAL(1, 8, 15), // "authDataChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 9), // "TokenData"
QT_MOC_LITERAL(4, 35, 5), // "token"
QT_MOC_LITERAL(5, 41, 15), // "signDataChanged"
QT_MOC_LITERAL(6, 57, 5), // "error"
QT_MOC_LITERAL(7, 63, 3), // "msg"
QT_MOC_LITERAL(8, 67, 13), // "cacheCardData"
QT_MOC_LITERAL(9, 81, 13), // "QSet<QString>"
QT_MOC_LITERAL(10, 95, 5), // "cards"
QT_MOC_LITERAL(11, 101, 14), // "selectAuthCard"
QT_MOC_LITERAL(12, 116, 4), // "card"
QT_MOC_LITERAL(13, 121, 14), // "selectSignCard"
QT_MOC_LITERAL(14, 136, 11) // "showWarning"

    },
    "QSigner\0authDataChanged\0\0TokenData\0"
    "token\0signDataChanged\0error\0msg\0"
    "cacheCardData\0QSet<QString>\0cards\0"
    "selectAuthCard\0card\0selectSignCard\0"
    "showWarning"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSigner[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,
       6,    1,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   58,    2, 0x08 /* Private */,
      11,    1,   61,    2, 0x08 /* Private */,
      13,    1,   64,    2, 0x08 /* Private */,
      14,    1,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void QSigner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QSigner *_t = static_cast<QSigner *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->authDataChanged((*reinterpret_cast< const TokenData(*)>(_a[1]))); break;
        case 1: _t->signDataChanged((*reinterpret_cast< const TokenData(*)>(_a[1]))); break;
        case 2: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->cacheCardData((*reinterpret_cast< const QSet<QString>(*)>(_a[1]))); break;
        case 4: _t->selectAuthCard((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->selectSignCard((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->showWarning((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSet<QString> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QSigner::*_t)(const TokenData & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSigner::authDataChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QSigner::*_t)(const TokenData & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSigner::signDataChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QSigner::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSigner::error)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QSigner::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QSigner.data,
      qt_meta_data_QSigner,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QSigner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSigner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSigner.stringdata0))
        return static_cast<void*>(const_cast< QSigner*>(this));
    if (!strcmp(_clname, "digidoc::Signer"))
        return static_cast< digidoc::Signer*>(const_cast< QSigner*>(this));
    return QThread::qt_metacast(_clname);
}

int QSigner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QSigner::authDataChanged(const TokenData & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QSigner::signDataChanged(const TokenData & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QSigner::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
