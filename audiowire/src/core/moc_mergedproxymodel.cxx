/****************************************************************************
** Meta object code from reading C++ file 'mergedproxymodel.h'
**
** Created: Tue Apr 23 15:28:01 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mergedproxymodel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mergedproxymodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MergedProxyModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   18,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      76,   17,   17,   17, 0x08,
      95,   17,   17,   17, 0x08,
     135,  111,   17,   17, 0x08,
     178,  111,   17,   17, 0x08,
     212,  111,   17,   17, 0x08,
     254,  111,   17,   17, 0x08,
     309,  287,   17,   17, 0x08,
     346,   17,   17,   17, 0x08,
     371,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MergedProxyModel[] = {
    "MergedProxyModel\0\0root,model\0"
    "SubModelReset(QModelIndex,QAbstractItemModel*)\0"
    "SourceModelReset()\0SubModelReset()\0"
    "source_parent,start,end\0"
    "RowsAboutToBeInserted(QModelIndex,int,int)\0"
    "RowsInserted(QModelIndex,int,int)\0"
    "RowsAboutToBeRemoved(QModelIndex,int,int)\0"
    "RowsRemoved(QModelIndex,int,int)\0"
    "top_left,bottom_right\0"
    "DataChanged(QModelIndex,QModelIndex)\0"
    "LayoutAboutToBeChanged()\0LayoutChanged()\0"
};

void MergedProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MergedProxyModel *_t = static_cast<MergedProxyModel *>(_o);
        switch (_id) {
        case 0: _t->SubModelReset((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< QAbstractItemModel*(*)>(_a[2]))); break;
        case 1: _t->SourceModelReset(); break;
        case 2: _t->SubModelReset(); break;
        case 3: _t->RowsAboutToBeInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->RowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->RowsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->RowsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->DataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 8: _t->LayoutAboutToBeChanged(); break;
        case 9: _t->LayoutChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MergedProxyModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MergedProxyModel::staticMetaObject = {
    { &QAbstractProxyModel::staticMetaObject, qt_meta_stringdata_MergedProxyModel,
      qt_meta_data_MergedProxyModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MergedProxyModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MergedProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MergedProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MergedProxyModel))
        return static_cast<void*>(const_cast< MergedProxyModel*>(this));
    return QAbstractProxyModel::qt_metacast(_clname);
}

int MergedProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void MergedProxyModel::SubModelReset(const QModelIndex & _t1, QAbstractItemModel * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
