/****************************************************************************
** Meta object code from reading C++ file 'podcastservice.h'
**
** Created: Tue Apr 23 15:28:11 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "podcastservice.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'podcastservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PodcastService[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      29,   15,   15,   15, 0x08,
      53,   15,   15,   15, 0x08,
      77,   15,   15,   15, 0x08,
     103,   15,   15,   15, 0x08,
     126,   15,   15,   15, 0x08,
     135,   15,   15,   15, 0x08,
     149,   15,   15,   15, 0x08,
     170,  162,   15,   15, 0x08,
     197,  162,   15,   15, 0x08,
     235,  226,   15,   15, 0x08,
     272,  226,   15,   15, 0x08,
     333,  311,   15,   15, 0x08,
     411,  402,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PodcastService[] = {
    "PodcastService\0\0AddPodcast()\0"
    "UpdateSelectedPodcast()\0RemoveSelectedPodcast()\0"
    "DownloadSelectedEpisode()\0"
    "DeleteDownloadedData()\0SetNew()\0"
    "SetListened()\0ShowConfig()\0podcast\0"
    "SubscriptionAdded(Podcast)\0"
    "SubscriptionRemoved(Podcast)\0episodes\0"
    "EpisodesAdded(QList<PodcastEpisode>)\0"
    "EpisodesUpdated(QList<PodcastEpisode>)\0"
    "episode,state,percent\0"
    "DownloadProgressChanged(PodcastEpisode,PodcastDownloader::State,int)\0"
    "metadata\0CurrentSongChanged(Song)\0"
};

void PodcastService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PodcastService *_t = static_cast<PodcastService *>(_o);
        switch (_id) {
        case 0: _t->AddPodcast(); break;
        case 1: _t->UpdateSelectedPodcast(); break;
        case 2: _t->RemoveSelectedPodcast(); break;
        case 3: _t->DownloadSelectedEpisode(); break;
        case 4: _t->DeleteDownloadedData(); break;
        case 5: _t->SetNew(); break;
        case 6: _t->SetListened(); break;
        case 7: _t->ShowConfig(); break;
        case 8: _t->SubscriptionAdded((*reinterpret_cast< const Podcast(*)>(_a[1]))); break;
        case 9: _t->SubscriptionRemoved((*reinterpret_cast< const Podcast(*)>(_a[1]))); break;
        case 10: _t->EpisodesAdded((*reinterpret_cast< const QList<PodcastEpisode>(*)>(_a[1]))); break;
        case 11: _t->EpisodesUpdated((*reinterpret_cast< const QList<PodcastEpisode>(*)>(_a[1]))); break;
        case 12: _t->DownloadProgressChanged((*reinterpret_cast< const PodcastEpisode(*)>(_a[1])),(*reinterpret_cast< PodcastDownloader::State(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 13: _t->CurrentSongChanged((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PodcastService::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PodcastService::staticMetaObject = {
    { &InternetService::staticMetaObject, qt_meta_stringdata_PodcastService,
      qt_meta_data_PodcastService, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PodcastService::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PodcastService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PodcastService::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PodcastService))
        return static_cast<void*>(const_cast< PodcastService*>(this));
    return InternetService::qt_metacast(_clname);
}

int PodcastService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InternetService::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
