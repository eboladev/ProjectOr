/****************************************************************************
** Meta object code from reading C++ file 'DeviceUpdates.h'
**
** Created: Tue Apr 23 13:36:28 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "DeviceUpdates.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DeviceUpdates.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mygpo__DeviceUpdates[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       4,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,
      33,   21,   21,   21, 0x05,
      52,   46,   21,   21, 0x05,

 // properties: name, type, flags
     103,   94, 0xff095401,
     107,   94, 0xff095401,
     114,   94, 0xff095401,
     132,  121, 0x05095401,

       0        // eod
};

static const char qt_meta_stringdata_mygpo__DeviceUpdates[] = {
    "mygpo::DeviceUpdates\0\0finished()\0"
    "parseError()\0error\0"
    "requestError(QNetworkReply::NetworkError)\0"
    "QVariant\0add\0update\0remove\0qulonglong\0"
    "timestamp\0"
};

void mygpo::DeviceUpdates::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DeviceUpdates *_t = static_cast<DeviceUpdates *>(_o);
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->parseError(); break;
        case 2: _t->requestError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData mygpo::DeviceUpdates::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject mygpo::DeviceUpdates::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_mygpo__DeviceUpdates,
      qt_meta_data_mygpo__DeviceUpdates, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mygpo::DeviceUpdates::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mygpo::DeviceUpdates::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mygpo::DeviceUpdates::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mygpo__DeviceUpdates))
        return static_cast<void*>(const_cast< DeviceUpdates*>(this));
    return QObject::qt_metacast(_clname);
}

int mygpo::DeviceUpdates::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = add(); break;
        case 1: *reinterpret_cast< QVariant*>(_v) = update(); break;
        case 2: *reinterpret_cast< QVariant*>(_v) = remove(); break;
        case 3: *reinterpret_cast< qulonglong*>(_v) = timestamp(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mygpo::DeviceUpdates::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void mygpo::DeviceUpdates::parseError()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void mygpo::DeviceUpdates::requestError(QNetworkReply::NetworkError _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
