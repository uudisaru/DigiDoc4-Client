/****************************************************************************
** Meta object code from reading C++ file 'InfoStack.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../client/widgets/InfoStack.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InfoStack.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InfoStack_t {
    QByteArrayData data[5];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InfoStack_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InfoStack_t qt_meta_stringdata_InfoStack = {
    {
QT_MOC_LITERAL(0, 0, 9), // "InfoStack"
QT_MOC_LITERAL(1, 10, 12), // "photoClicked"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 14), // "const QPixmap*"
QT_MOC_LITERAL(4, 39, 6) // "pixmap"

    },
    "InfoStack\0photoClicked\0\0const QPixmap*\0"
    "pixmap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InfoStack[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void InfoStack::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InfoStack *_t = static_cast<InfoStack *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->photoClicked((*reinterpret_cast< const QPixmap*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (InfoStack::*_t)(const QPixmap * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InfoStack::photoClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject InfoStack::staticMetaObject = {
    { &StyledWidget::staticMetaObject, qt_meta_stringdata_InfoStack.data,
      qt_meta_data_InfoStack,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *InfoStack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InfoStack::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InfoStack.stringdata0))
        return static_cast<void*>(const_cast< InfoStack*>(this));
    if (!strcmp(_clname, "PictureInterface"))
        return static_cast< PictureInterface*>(const_cast< InfoStack*>(this));
    return StyledWidget::qt_metacast(_clname);
}

int InfoStack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StyledWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void InfoStack::photoClicked(const QPixmap * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
