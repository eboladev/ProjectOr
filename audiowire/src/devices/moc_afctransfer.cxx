/****************************************************************************
** Meta object code from reading C++ file 'afctransfer.h'
**
** Created: Tue Apr 23 15:28:21 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "afctransfer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'afctransfer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AfcTransfer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   13,   12,   12, 0x05,
      46,   38,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      65,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AfcTransfer[] = {
    "AfcTransfer\0\0task_id\0TaskStarted(int)\0"
    "success\0CopyFinished(bool)\0CopyFromDevice()\0"
};

void AfcTransfer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AfcTransfer *_t = static_cast<AfcTransfer *>(_o);
        switch (_id) {
        case 0: _t->TaskStarted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->CopyFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->CopyFromDevice(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AfcTransfer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AfcTransfer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AfcTransfer,
      qt_meta_data_AfcTransfer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AfcTransfer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AfcTransfer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AfcTransfer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AfcTransfer))
        return static_cast<void*>(const_cast< AfcTransfer*>(this));
    return QObject::qt_metacast(_clname);
}

int AfcTransfer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void AfcTransfer::TaskStarted(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AfcTransfer::CopyFinished(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
