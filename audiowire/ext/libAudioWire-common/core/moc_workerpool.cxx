/****************************************************************************
** Meta object code from reading C++ file 'workerpool.h'
**
** Created: Tue Apr 23 13:36:55 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "workerpool.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'workerpool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data__WorkerPoolBase[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   16,   16,   16, 0x09,
      49,   16,   16,   16, 0x09,
      65,   16,   16,   16, 0x09,
     102,   16,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata__WorkerPoolBase[] = {
    "_WorkerPoolBase\0\0WorkerFailedToStart()\0"
    "DoStart()\0NewConnection()\0"
    "ProcessError(QProcess::ProcessError)\0"
    "SendQueuedMessages()\0"
};

void _WorkerPoolBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        _WorkerPoolBase *_t = static_cast<_WorkerPoolBase *>(_o);
        switch (_id) {
        case 0: _t->WorkerFailedToStart(); break;
        case 1: _t->DoStart(); break;
        case 2: _t->NewConnection(); break;
        case 3: _t->ProcessError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 4: _t->SendQueuedMessages(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData _WorkerPoolBase::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject _WorkerPoolBase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata__WorkerPoolBase,
      qt_meta_data__WorkerPoolBase, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &_WorkerPoolBase::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *_WorkerPoolBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *_WorkerPoolBase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata__WorkerPoolBase))
        return static_cast<void*>(const_cast< _WorkerPoolBase*>(this));
    return QObject::qt_metacast(_clname);
}

int _WorkerPoolBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void _WorkerPoolBase::WorkerFailedToStart()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
