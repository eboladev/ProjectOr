/****************************************************************************
** Meta object code from reading C++ file 'digitallyimportedservicebase.h'
**
** Created: Tue Apr 23 15:28:05 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "digitallyimportedservicebase.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'digitallyimportedservicebase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DigitallyImportedServiceBase[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   29,   29,   29, 0x0a,
      74,   68,   29,   29, 0x08,
     111,   29,   29,   29, 0x08,
     122,   29,   29,   29, 0x08,
     144,   29,   29,   29, 0x08,
     175,  161,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DigitallyImportedServiceBase[] = {
    "DigitallyImportedServiceBase\0\0"
    "StreamsChanged()\0ShowSettingsDialog()\0"
    "reply\0LoadPlaylistFinished(QNetworkReply*)\0"
    "Homepage()\0ForceRefreshStreams()\0"
    "RefreshStreams()\0reply,task_id\0"
    "RefreshStreamsFinished(QNetworkReply*,int)\0"
};

void DigitallyImportedServiceBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DigitallyImportedServiceBase *_t = static_cast<DigitallyImportedServiceBase *>(_o);
        switch (_id) {
        case 0: _t->StreamsChanged(); break;
        case 1: _t->ShowSettingsDialog(); break;
        case 2: _t->LoadPlaylistFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: _t->Homepage(); break;
        case 4: _t->ForceRefreshStreams(); break;
        case 5: _t->RefreshStreams(); break;
        case 6: _t->RefreshStreamsFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DigitallyImportedServiceBase::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DigitallyImportedServiceBase::staticMetaObject = {
    { &InternetService::staticMetaObject, qt_meta_stringdata_DigitallyImportedServiceBase,
      qt_meta_data_DigitallyImportedServiceBase, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DigitallyImportedServiceBase::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DigitallyImportedServiceBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DigitallyImportedServiceBase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DigitallyImportedServiceBase))
        return static_cast<void*>(const_cast< DigitallyImportedServiceBase*>(this));
    return InternetService::qt_metacast(_clname);
}

int DigitallyImportedServiceBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InternetService::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void DigitallyImportedServiceBase::StreamsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
