/****************************************************************************
** Meta object code from reading C++ file 'gpoddersync.h'
**
** Created: Tue Apr 23 15:28:11 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gpoddersync.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gpoddersync.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GPodderSync[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      29,   12,   12,   12, 0x08,
      70,   46,   12,   12, 0x08,
     122,  116,   12,   12, 0x08,
     169,  116,   12,   12, 0x08,
     232,  214,   12,   12, 0x08,
     320,  303,   12,   12, 0x08,
     387,  379,   12,   12, 0x08,
     414,  379,   12,   12, 0x08,
     443,   12,   12,   12, 0x08,
     482,  462,   12,   12, 0x08,
     539,  116,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GPodderSync[] = {
    "GPodderSync\0\0GetUpdatesNow()\0"
    "ReloadSettings()\0reply,username,password\0"
    "LoginFinished(QNetworkReply*,QString,QString)\0"
    "reply\0DeviceUpdatesFinished(mygpo::DeviceUpdatesPtr)\0"
    "DeviceUpdatesFailed(mygpo::DeviceUpdatesPtr)\0"
    "reply,url,actions\0"
    "NewPodcastLoaded(PodcastUrlLoaderReply*,QUrl,QList<mygpo::EpisodePtr>)\0"
    "actions,episodes\0"
    "ApplyActions(QList<mygpo::EpisodePtr>,PodcastEpisodeList*)\0"
    "podcast\0SubscriptionAdded(Podcast)\0"
    "SubscriptionRemoved(Podcast)\0"
    "FlushUpdateQueue()\0reply,affected_urls\0"
    "AddRemoveFinished(mygpo::AddRemoveResultPtr,QList<QUrl>)\0"
    "AddRemoveFailed(mygpo::AddRemoveResultPtr)\0"
};

void GPodderSync::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GPodderSync *_t = static_cast<GPodderSync *>(_o);
        switch (_id) {
        case 0: _t->GetUpdatesNow(); break;
        case 1: _t->ReloadSettings(); break;
        case 2: _t->LoginFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 3: _t->DeviceUpdatesFinished((*reinterpret_cast< mygpo::DeviceUpdatesPtr(*)>(_a[1]))); break;
        case 4: _t->DeviceUpdatesFailed((*reinterpret_cast< mygpo::DeviceUpdatesPtr(*)>(_a[1]))); break;
        case 5: _t->NewPodcastLoaded((*reinterpret_cast< PodcastUrlLoaderReply*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< const QList<mygpo::EpisodePtr>(*)>(_a[3]))); break;
        case 6: _t->ApplyActions((*reinterpret_cast< const QList<mygpo::EpisodePtr>(*)>(_a[1])),(*reinterpret_cast< PodcastEpisodeList*(*)>(_a[2]))); break;
        case 7: _t->SubscriptionAdded((*reinterpret_cast< const Podcast(*)>(_a[1]))); break;
        case 8: _t->SubscriptionRemoved((*reinterpret_cast< const Podcast(*)>(_a[1]))); break;
        case 9: _t->FlushUpdateQueue(); break;
        case 10: _t->AddRemoveFinished((*reinterpret_cast< mygpo::AddRemoveResultPtr(*)>(_a[1])),(*reinterpret_cast< const QList<QUrl>(*)>(_a[2]))); break;
        case 11: _t->AddRemoveFailed((*reinterpret_cast< mygpo::AddRemoveResultPtr(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GPodderSync::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GPodderSync::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GPodderSync,
      qt_meta_data_GPodderSync, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GPodderSync::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GPodderSync::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GPodderSync::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GPodderSync))
        return static_cast<void*>(const_cast< GPodderSync*>(this));
    return QObject::qt_metacast(_clname);
}

int GPodderSync::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
