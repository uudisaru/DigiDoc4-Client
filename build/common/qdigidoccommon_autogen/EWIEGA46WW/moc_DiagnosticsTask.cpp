/****************************************************************************
** Meta object code from reading C++ file 'DiagnosticsTask.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../common/DiagnosticsTask.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DiagnosticsTask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DiagnosticsTask_t {
    QByteArrayData data[7];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DiagnosticsTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DiagnosticsTask_t qt_meta_stringdata_DiagnosticsTask = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DiagnosticsTask"
QT_MOC_LITERAL(1, 16, 8), // "finished"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 6), // "failed"
QT_MOC_LITERAL(4, 33, 3), // "run"
QT_MOC_LITERAL(5, 37, 10), // "insertHtml"
QT_MOC_LITERAL(6, 48, 4) // "text"

    },
    "DiagnosticsTask\0finished\0\0failed\0run\0"
    "insertHtml\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DiagnosticsTask[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x0a /* Public */,
       5,    1,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void DiagnosticsTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DiagnosticsTask *_t = static_cast<DiagnosticsTask *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->failed(); break;
        case 2: _t->run(); break;
        case 3: _t->insertHtml((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DiagnosticsTask::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DiagnosticsTask::finished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DiagnosticsTask::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DiagnosticsTask::failed)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject DiagnosticsTask::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DiagnosticsTask.data,
      qt_meta_data_DiagnosticsTask,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DiagnosticsTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DiagnosticsTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DiagnosticsTask.stringdata0))
        return static_cast<void*>(const_cast< DiagnosticsTask*>(this));
    return QObject::qt_metacast(_clname);
}

int DiagnosticsTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void DiagnosticsTask::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DiagnosticsTask::failed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
