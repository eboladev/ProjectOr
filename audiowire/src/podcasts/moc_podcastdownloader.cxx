/****************************************************************************
** Meta object code from reading C++ file 'podcastdownloader.h'
**
** Created: Tue Apr 23 15:28:11 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "podcastdownloader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'podcastdownloader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PodcastDownloader[] = {

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
      41,   19,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     110,  102,   18,   18, 0x0a,
     142,  102,   18,   18, 0x0a,
     172,   18,   18,   18, 0x08,
     197,  189,   18,   18, 0x08,
     233,  224,   18,   18, 0x08,
     270,   18,   18,   18, 0x08,
     287,   18,   18,   18, 0x08,
     318,  303,   18,   18, 0x08,
     355,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PodcastDownloader[] = {
    "PodcastDownloader\0\0episode,state,percent\0"
    "ProgressChanged(PodcastEpisode,PodcastDownloader::State,int)\0"
    "episode\0DownloadEpisode(PodcastEpisode)\0"
    "DeleteEpisode(PodcastEpisode)\0"
    "ReloadSettings()\0podcast\0"
    "SubscriptionAdded(Podcast)\0episodes\0"
    "EpisodesAdded(QList<PodcastEpisode>)\0"
    "ReplyReadyRead()\0ReplyFinished()\0"
    "received,total\0ReplyDownloadProgress(qint64,qint64)\0"
    "AutoDelete()\0"
};

void PodcastDownloader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PodcastDownloader *_t = static_cast<PodcastDownloader *>(_o);
        switch (_id) {
        case 0: _t->ProgressChanged((*reinterpret_cast< const PodcastEpisode(*)>(_a[1])),(*reinterpret_cast< PodcastDownloader::State(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->DownloadEpisode((*reinterpret_cast< const PodcastEpisode(*)>(_a[1]))); break;
        case 2: _t->DeleteEpisode((*reinterpret_cast< const PodcastEpisode(*)>(_a[1]))); break;
        case 3: _t->ReloadSettings(); break;
        case 4: _t->SubscriptionAdded((*reinterpret_cast< const Podcast(*)>(_a[1]))); break;
        case 5: _t->EpisodesAdded((*reinterpret_cast< const QList<PodcastEpisode>(*)>(_a[1]))); break;
        case 6: _t->ReplyReadyRead(); break;
        case 7: _t->ReplyFinished(); break;
        case 8: _t->ReplyDownloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 9: _t->AutoDelete(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PodcastDownloader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PodcastDownloader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PodcastDownloader,
      qt_meta_data_PodcastDownloader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PodcastDownloader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PodcastDownloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PodcastDownloader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PodcastDownloader))
        return static_cast<void*>(const_cast< PodcastDownloader*>(this));
    return QObject::qt_metacast(_clname);
}

int PodcastDownloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void PodcastDownloader::ProgressChanged(const PodcastEpisode & _t1, PodcastDownloader::State _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
