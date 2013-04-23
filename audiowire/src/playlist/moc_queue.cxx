/****************************************************************************
** Meta object code from reading C++ file 'queue.h'
**
** Created: Tue Apr 23 15:28:09 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "queue.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'queue.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Queue[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,    7,    6,    6, 0x08,
      72,    6,    6,    6, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Queue[] = {
    "Queue\0\0top_left,bottom_right\0"
    "SourceDataChanged(QModelIndex,QModelIndex)\0"
    "SourceLayoutChanged()\0"
};

void Queue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Queue *_t = static_cast<Queue *>(_o);
        switch (_id) {
        case 0: _t->SourceDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 1: _t->SourceLayoutChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Queue::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Queue::staticMetaObject = {
    { &QAbstractProxyModel::staticMetaObject, qt_meta_stringdata_Queue,
      qt_meta_data_Queue, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Queue::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Queue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Queue::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Queue))
        return static_cast<void*>(const_cast< Queue*>(this));
    return QAbstractProxyModel::qt_metacast(_clname);
}

int Queue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
