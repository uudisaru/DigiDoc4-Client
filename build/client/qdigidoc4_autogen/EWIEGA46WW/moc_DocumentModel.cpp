/****************************************************************************
** Meta object code from reading C++ file 'DocumentModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../client/DocumentModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DocumentModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DocumentModel_t {
    QByteArrayData data[8];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DocumentModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DocumentModel_t qt_meta_stringdata_DocumentModel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DocumentModel"
QT_MOC_LITERAL(1, 14, 5), // "added"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 4), // "file"
QT_MOC_LITERAL(4, 26, 8), // "openFile"
QT_MOC_LITERAL(5, 35, 7), // "removed"
QT_MOC_LITERAL(6, 43, 3), // "row"
QT_MOC_LITERAL(7, 47, 4) // "open"

    },
    "DocumentModel\0added\0\0file\0openFile\0"
    "removed\0row\0open"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DocumentModel[] = {

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
       4,    1,   37,    2, 0x06 /* Public */,
       5,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void DocumentModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DocumentModel *_t = static_cast<DocumentModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->added((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->openFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->removed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->open((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DocumentModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DocumentModel::added)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DocumentModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DocumentModel::openFile)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DocumentModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DocumentModel::removed)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject DocumentModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DocumentModel.data,
      qt_meta_data_DocumentModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DocumentModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DocumentModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DocumentModel.stringdata0))
        return static_cast<void*>(const_cast< DocumentModel*>(this));
    return QObject::qt_metacast(_clname);
}

int DocumentModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void DocumentModel::added(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DocumentModel::openFile(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DocumentModel::removed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
