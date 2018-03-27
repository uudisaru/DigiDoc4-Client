/****************************************************************************
** Meta object code from reading C++ file 'ItemList.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../client/widgets/ItemList.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ItemList.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ItemList_t {
    QByteArrayData data[22];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ItemList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ItemList_t qt_meta_stringdata_ItemList = {
    {
QT_MOC_LITERAL(0, 0, 8), // "ItemList"
QT_MOC_LITERAL(1, 9, 6), // "addAll"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 7), // "addItem"
QT_MOC_LITERAL(4, 25, 4), // "code"
QT_MOC_LITERAL(5, 30, 13), // "addressSearch"
QT_MOC_LITERAL(6, 44, 9), // "idChanged"
QT_MOC_LITERAL(7, 54, 8), // "cardCode"
QT_MOC_LITERAL(8, 63, 10), // "mobileCode"
QT_MOC_LITERAL(9, 74, 12), // "serialNumber"
QT_MOC_LITERAL(10, 87, 12), // "keysSelected"
QT_MOC_LITERAL(11, 100, 12), // "QList<Item*>"
QT_MOC_LITERAL(12, 113, 4), // "keys"
QT_MOC_LITERAL(13, 118, 7), // "removed"
QT_MOC_LITERAL(14, 126, 3), // "row"
QT_MOC_LITERAL(15, 130, 6), // "search"
QT_MOC_LITERAL(16, 137, 4), // "term"
QT_MOC_LITERAL(17, 142, 7), // "details"
QT_MOC_LITERAL(18, 150, 2), // "id"
QT_MOC_LITERAL(19, 153, 6), // "remove"
QT_MOC_LITERAL(20, 160, 5), // "Item*"
QT_MOC_LITERAL(21, 166, 4) // "item"

    },
    "ItemList\0addAll\0\0addItem\0code\0"
    "addressSearch\0idChanged\0cardCode\0"
    "mobileCode\0serialNumber\0keysSelected\0"
    "QList<Item*>\0keys\0removed\0row\0search\0"
    "term\0details\0id\0remove\0Item*\0item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ItemList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    1,   60,    2, 0x06 /* Public */,
       5,    0,   63,    2, 0x06 /* Public */,
       6,    3,   64,    2, 0x06 /* Public */,
      10,    1,   71,    2, 0x06 /* Public */,
      13,    1,   74,    2, 0x06 /* Public */,
      15,    1,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    1,   80,    2, 0x0a /* Public */,
      19,    1,   83,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QByteArray,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::QString,   16,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, 0x80000000 | 20,   21,

       0        // eod
};

void ItemList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ItemList *_t = static_cast<ItemList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addAll(); break;
        case 1: _t->addItem((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->addressSearch(); break;
        case 3: _t->idChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 4: _t->keysSelected((*reinterpret_cast< QList<Item*>(*)>(_a[1]))); break;
        case 5: _t->removed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->search((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->details((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->remove((*reinterpret_cast< Item*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Item*> >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Item* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ItemList::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ItemList::addAll)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ItemList::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ItemList::addItem)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ItemList::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ItemList::addressSearch)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ItemList::*_t)(const QString & , const QString & , const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ItemList::idChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ItemList::*_t)(QList<Item*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ItemList::keysSelected)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (ItemList::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ItemList::removed)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (ItemList::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ItemList::search)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject ItemList::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ItemList.data,
      qt_meta_data_ItemList,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ItemList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ItemList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ItemList.stringdata0))
        return static_cast<void*>(const_cast< ItemList*>(this));
    return QWidget::qt_metacast(_clname);
}

int ItemList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ItemList::addAll()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ItemList::addItem(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ItemList::addressSearch()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ItemList::idChanged(const QString & _t1, const QString & _t2, const QByteArray & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ItemList::keysSelected(QList<Item*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ItemList::removed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ItemList::search(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
