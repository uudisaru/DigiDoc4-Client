/****************************************************************************
** Meta object code from reading C++ file 'LdapSearch.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../client/crypto/LdapSearch.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LdapSearch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LdapSearch_t {
    QByteArrayData data[8];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LdapSearch_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LdapSearch_t qt_meta_stringdata_LdapSearch = {
    {
QT_MOC_LITERAL(0, 0, 10), // "LdapSearch"
QT_MOC_LITERAL(1, 11, 12), // "searchResult"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 22), // "QList<QSslCertificate>"
QT_MOC_LITERAL(4, 48, 6), // "result"
QT_MOC_LITERAL(5, 55, 5), // "error"
QT_MOC_LITERAL(6, 61, 3), // "msg"
QT_MOC_LITERAL(7, 65, 7) // "details"

    },
    "LdapSearch\0searchResult\0\0"
    "QList<QSslCertificate>\0result\0error\0"
    "msg\0details"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LdapSearch[] = {

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
       5,    2,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,

       0        // eod
};

void LdapSearch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LdapSearch *_t = static_cast<LdapSearch *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->searchResult((*reinterpret_cast< const QList<QSslCertificate>(*)>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LdapSearch::*_t)(const QList<QSslCertificate> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LdapSearch::searchResult)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (LdapSearch::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LdapSearch::error)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject LdapSearch::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LdapSearch.data,
      qt_meta_data_LdapSearch,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LdapSearch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LdapSearch::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LdapSearch.stringdata0))
        return static_cast<void*>(const_cast< LdapSearch*>(this));
    return QObject::qt_metacast(_clname);
}

int LdapSearch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void LdapSearch::searchResult(const QList<QSslCertificate> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LdapSearch::error(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
