/****************************************************************************
** Meta object code from reading C++ file 'deviceproperties.h'
**
** Created: Tue Apr 23 15:28:03 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "deviceproperties.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deviceproperties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DeviceProperties[] = {

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
      18,   17,   17,   17, 0x0a,
      27,   17,   17,   17, 0x08,
      42,   17,   17,   17, 0x08,
      55,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DeviceProperties[] = {
    "DeviceProperties\0\0accept()\0ModelChanged()\0"
    "OpenDevice()\0UpdateFormatsFinished()\0"
};

void DeviceProperties::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DeviceProperties *_t = static_cast<DeviceProperties *>(_o);
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->ModelChanged(); break;
        case 2: _t->OpenDevice(); break;
        case 3: _t->UpdateFormatsFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DeviceProperties::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DeviceProperties::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DeviceProperties,
      qt_meta_data_DeviceProperties, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DeviceProperties::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DeviceProperties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DeviceProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceProperties))
        return static_cast<void*>(const_cast< DeviceProperties*>(this));
    return QDialog::qt_metacast(_clname);
}

int DeviceProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
