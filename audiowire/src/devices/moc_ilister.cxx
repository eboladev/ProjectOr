/****************************************************************************
** Meta object code from reading C++ file 'ilister.h'
**
** Created: Tue Apr 23 15:28:21 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ilister.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ilister.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_iLister[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,    9,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_iLister[] = {
    "iLister\0\0id\0UpdateDeviceFreeSpace(QString)\0"
};

void iLister::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        iLister *_t = static_cast<iLister *>(_o);
        switch (_id) {
        case 0: _t->UpdateDeviceFreeSpace((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData iLister::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject iLister::staticMetaObject = {
    { &DeviceLister::staticMetaObject, qt_meta_stringdata_iLister,
      qt_meta_data_iLister, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &iLister::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *iLister::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *iLister::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_iLister))
        return static_cast<void*>(const_cast< iLister*>(this));
    return DeviceLister::qt_metacast(_clname);
}

int iLister::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DeviceLister::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
