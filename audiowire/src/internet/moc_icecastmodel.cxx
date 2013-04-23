/****************************************************************************
** Meta object code from reading C++ file 'icecastmodel.h'
**
** Created: Tue Apr 23 15:28:06 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "icecastmodel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'icecastmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IcecastModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      21,   13,   13,   13, 0x0a,
      36,   29,   13,   13, 0x0a,
      64,   59,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_IcecastModel[] = {
    "IcecastModel\0\0Init()\0Reset()\0filter\0"
    "SetFilterText(QString)\0mode\0"
    "SetSortMode(SortMode)\0"
};

void IcecastModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IcecastModel *_t = static_cast<IcecastModel *>(_o);
        switch (_id) {
        case 0: _t->Init(); break;
        case 1: _t->Reset(); break;
        case 2: _t->SetFilterText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->SetSortMode((*reinterpret_cast< SortMode(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData IcecastModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IcecastModel::staticMetaObject = {
    { &SimpleTreeModel<IcecastItem>::staticMetaObject, qt_meta_stringdata_IcecastModel,
      qt_meta_data_IcecastModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IcecastModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IcecastModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IcecastModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IcecastModel))
        return static_cast<void*>(const_cast< IcecastModel*>(this));
    return SimpleTreeModel<IcecastItem>::qt_metacast(_clname);
}

int IcecastModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SimpleTreeModel<IcecastItem>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
