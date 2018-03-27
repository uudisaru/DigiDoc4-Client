/****************************************************************************
** Meta object code from reading C++ file 'Application.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../client/Application.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Application.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Application_t {
    QByteArrayData data[19];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Application_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Application_t qt_meta_stringdata_Application = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Application"
QT_MOC_LITERAL(1, 12, 18), // "TSLLoadingFinished"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 9), // "showAbout"
QT_MOC_LITERAL(4, 42, 10), // "showClient"
QT_MOC_LITERAL(5, 53, 6), // "params"
QT_MOC_LITERAL(6, 60, 6), // "crypto"
QT_MOC_LITERAL(7, 67, 11), // "showWarning"
QT_MOC_LITERAL(8, 79, 3), // "msg"
QT_MOC_LITERAL(9, 83, 7), // "details"
QT_MOC_LITERAL(10, 91, 6), // "browse"
QT_MOC_LITERAL(11, 98, 3), // "url"
QT_MOC_LITERAL(12, 102, 11), // "closeWindow"
QT_MOC_LITERAL(13, 114, 6), // "mailTo"
QT_MOC_LITERAL(14, 121, 9), // "parseArgs"
QT_MOC_LITERAL(15, 131, 4), // "args"
QT_MOC_LITERAL(16, 136, 14), // "showTSLWarning"
QT_MOC_LITERAL(17, 151, 11), // "QEventLoop*"
QT_MOC_LITERAL(18, 163, 1) // "e"

    },
    "Application\0TSLLoadingFinished\0\0"
    "showAbout\0showClient\0params\0crypto\0"
    "showWarning\0msg\0details\0browse\0url\0"
    "closeWindow\0mailTo\0parseArgs\0args\0"
    "showTSLWarning\0QEventLoop*\0e"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Application[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   85,    2, 0x0a /* Public */,
       4,    2,   86,    2, 0x0a /* Public */,
       4,    1,   91,    2, 0x2a /* Public | MethodCloned */,
       4,    0,   94,    2, 0x2a /* Public | MethodCloned */,
       7,    2,   95,    2, 0x0a /* Public */,
       7,    1,  100,    2, 0x2a /* Public | MethodCloned */,
      10,    1,  103,    2, 0x08 /* Private */,
      12,    0,  106,    2, 0x08 /* Private */,
      13,    1,  107,    2, 0x08 /* Private */,
      14,    1,  110,    2, 0x08 /* Private */,
      14,    0,  113,    2, 0x28 /* Private | MethodCloned */,
      14,    1,  114,    2, 0x08 /* Private */,
      16,    1,  117,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList, QMetaType::Bool,    5,    6,
    QMetaType::Void, QMetaType::QStringList,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QUrl,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,   11,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   15,
    QMetaType::Void, 0x80000000 | 17,   18,

       0        // eod
};

void Application::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Application *_t = static_cast<Application *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->TSLLoadingFinished(); break;
        case 1: _t->showAbout(); break;
        case 2: _t->showClient((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->showClient((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 4: _t->showClient(); break;
        case 5: _t->showWarning((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->showWarning((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->browse((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 8: _t->closeWindow(); break;
        case 9: _t->mailTo((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 10: _t->parseArgs((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->parseArgs(); break;
        case 12: _t->parseArgs((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 13: _t->showTSLWarning((*reinterpret_cast< QEventLoop*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QEventLoop* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Application::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Application::TSLLoadingFinished)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Application::staticMetaObject = {
    { &Common::staticMetaObject, qt_meta_stringdata_Application.data,
      qt_meta_data_Application,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Application::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Application::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Application.stringdata0))
        return static_cast<void*>(const_cast< Application*>(this));
    return Common::qt_metacast(_clname);
}

int Application::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Common::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Application::TSLLoadingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
