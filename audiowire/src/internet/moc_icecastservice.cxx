/****************************************************************************
** Meta object code from reading C++ file 'icecastservice.h'
**
** Created: Tue Apr 23 15:28:06 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "icecastservice.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'icecastservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IcecastService[] = {

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
      16,   15,   15,   15, 0x08,
      32,   15,   15,   15, 0x08,
      49,   43,   15,   15, 0x08,
      98,   91,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_IcecastService[] = {
    "IcecastService\0\0LoadDirectory()\0"
    "Homepage()\0reply\0"
    "DownloadDirectoryFinished(QNetworkReply*)\0"
    "future\0"
    "ParseDirectoryFinished(QFuture<IcecastBackend::StationList>)\0"
};

void IcecastService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IcecastService *_t = static_cast<IcecastService *>(_o);
        switch (_id) {
        case 0: _t->LoadDirectory(); break;
        case 1: _t->Homepage(); break;
        case 2: _t->DownloadDirectoryFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: _t->ParseDirectoryFinished((*reinterpret_cast< QFuture<IcecastBackend::StationList>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData IcecastService::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IcecastService::staticMetaObject = {
    { &InternetService::staticMetaObject, qt_meta_stringdata_IcecastService,
      qt_meta_data_IcecastService, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IcecastService::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IcecastService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IcecastService::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IcecastService))
        return static_cast<void*>(const_cast< IcecastService*>(this));
    return InternetService::qt_metacast(_clname);
}

int IcecastService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InternetService::qt_metacall(_c, _id, _a);
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
