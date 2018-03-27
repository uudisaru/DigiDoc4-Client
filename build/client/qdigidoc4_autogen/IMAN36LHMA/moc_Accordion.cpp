/****************************************************************************
** Meta object code from reading C++ file 'Accordion.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../client/widgets/Accordion.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Accordion.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Accordion_t {
    QByteArrayData data[14];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Accordion_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Accordion_t qt_meta_stringdata_Accordion = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Accordion"
QT_MOC_LITERAL(1, 10, 16), // "showCertWarnings"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 10), // "checkEMail"
QT_MOC_LITERAL(4, 39, 13), // "activateEMail"
QT_MOC_LITERAL(5, 53, 17), // "changePin1Clicked"
QT_MOC_LITERAL(6, 71, 11), // "isForgotPin"
QT_MOC_LITERAL(7, 83, 12), // "isBlockedPin"
QT_MOC_LITERAL(8, 96, 17), // "changePin2Clicked"
QT_MOC_LITERAL(9, 114, 16), // "changePukClicked"
QT_MOC_LITERAL(10, 131, 18), // "certDetailsClicked"
QT_MOC_LITERAL(11, 150, 4), // "link"
QT_MOC_LITERAL(12, 155, 13), // "checkOtherEID"
QT_MOC_LITERAL(13, 169, 11) // "certDetails"

    },
    "Accordion\0showCertWarnings\0\0checkEMail\0"
    "activateEMail\0changePin1Clicked\0"
    "isForgotPin\0isBlockedPin\0changePin2Clicked\0"
    "changePukClicked\0certDetailsClicked\0"
    "link\0checkOtherEID\0certDetails"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Accordion[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    2,   62,    2, 0x06 /* Public */,
       8,    2,   67,    2, 0x06 /* Public */,
       9,    0,   72,    2, 0x06 /* Public */,
      10,    1,   73,    2, 0x06 /* Public */,
      12,    0,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    6,    7,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void Accordion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Accordion *_t = static_cast<Accordion *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showCertWarnings(); break;
        case 1: _t->checkEMail(); break;
        case 2: _t->activateEMail(); break;
        case 3: _t->changePin1Clicked((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->changePin2Clicked((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->changePukClicked(); break;
        case 6: _t->certDetailsClicked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->checkOtherEID(); break;
        case 8: _t->certDetails((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Accordion::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Accordion::showCertWarnings)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Accordion::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Accordion::checkEMail)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Accordion::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Accordion::activateEMail)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Accordion::*_t)(bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Accordion::changePin1Clicked)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Accordion::*_t)(bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Accordion::changePin2Clicked)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Accordion::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Accordion::changePukClicked)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Accordion::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Accordion::certDetailsClicked)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Accordion::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Accordion::checkOtherEID)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject Accordion::staticMetaObject = {
    { &StyledWidget::staticMetaObject, qt_meta_stringdata_Accordion.data,
      qt_meta_data_Accordion,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Accordion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Accordion::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Accordion.stringdata0))
        return static_cast<void*>(const_cast< Accordion*>(this));
    return StyledWidget::qt_metacast(_clname);
}

int Accordion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StyledWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Accordion::showCertWarnings()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Accordion::checkEMail()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Accordion::activateEMail()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Accordion::changePin1Clicked(bool _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Accordion::changePin2Clicked(bool _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Accordion::changePukClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Accordion::certDetailsClicked(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Accordion::checkOtherEID()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
