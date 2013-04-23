/****************************************************************************
** Meta object code from reading C++ file 'mtpdevice.h'
**
** Created: Tue Apr 23 15:28:21 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mtpdevice.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mtpdevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MtpDevice[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,   19, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,

 // constructors: signature, parameters, type, tag, flags
      82,   26,   10,   10, 0x0e,

       0        // eod
};

static const char qt_meta_stringdata_MtpDevice[] = {
    "MtpDevice\0\0LoadFinished()\0"
    "url,lister,unique_id,manager,app,database_id,first_time\0"
    "MtpDevice(QUrl,DeviceLister*,QString,DeviceManager*,Application*,int,b"
    "ool)\0"
};

void MtpDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { MtpDevice *_r = new MtpDevice((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< DeviceLister*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< DeviceManager*(*)>(_a[4])),(*reinterpret_cast< Application*(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MtpDevice *_t = static_cast<MtpDevice *>(_o);
        switch (_id) {
        case 0: _t->LoadFinished(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MtpDevice::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MtpDevice::staticMetaObject = {
    { &ConnectedDevice::staticMetaObject, qt_meta_stringdata_MtpDevice,
      qt_meta_data_MtpDevice, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MtpDevice::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MtpDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MtpDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MtpDevice))
        return static_cast<void*>(const_cast< MtpDevice*>(this));
    return ConnectedDevice::qt_metacast(_clname);
}

int MtpDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConnectedDevice::qt_metacall(_c, _id, _a);
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
