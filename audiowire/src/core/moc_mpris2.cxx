/****************************************************************************
** Meta object code from reading C++ file 'mpris2.h'
**
** Created: Tue Apr 23 15:28:20 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mpris2.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mpris2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mpris__Mpris2[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
      29,   89, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   15,   14,   14, 0x05,
      62,   42,   14,   14, 0x05,
     126,  106,   14,   14, 0x05,
     176,  168,   14,   14, 0x05,
     223,  206,   14,   14, 0x05,
     275,   14,   14,   14, 0x05,
     302,  293,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     346,  333,   14,   14, 0x08,
     379,  370,   14,   14, 0x08,
     413,   14,   14,   14, 0x08,
     429,   14,   14,   14, 0x08,
     463,  458,   14,   14, 0x08,
     488,   14,   14,   14, 0x08,
     509,   14,   14,   14, 0x08,
     529,  293,   14,   14, 0x08,

 // properties: name, type, flags
     561,  556, 0x01095001,
     569,  556, 0x01095001,
     578,  556, 0x01095001,
     599,  591, 0x0a095001,
     608,  591, 0x0a095001,
     633,  621, 0x0b095001,
     653,  621, 0x0b095001,
     672,  556, 0x01095001,
     689,  556, 0x01095003,
     700,  591, 0x0a095001,
     715,  591, 0x0a095003,
     733,  726, 0x06095003,
     738,  556, 0x01095003,
     758,  746, 0x08095001,
     767,  726, 0x06095003,
     784,  774, 0x04095001,
     793,  726, 0x06095001,
     805,  726, 0x06095001,
     817,  556, 0x01095001,
     827,  556, 0x01095001,
     841,  556, 0x01095001,
     849,  556, 0x01095001,
     858,  556, 0x01095001,
     866,  556, 0x01095001,
     886,  877, 0x00095009,
     893,  556, 0x01095001,
     915,  907, 0x03095001,
     929,  621, 0x0b095001,
     953,  939, 0x00095009,

       0        // eod
};

static const char qt_meta_stringdata_mpris__Mpris2[] = {
    "mpris::Mpris2\0\0position\0Seeked(qlonglong)\0"
    "Tracks,CurrentTrack\0"
    "TrackListReplaced(TrackIds,QDBusObjectPath)\0"
    "Metadata,AfterTrack\0"
    "TrackAdded(TrackMetadata,QDBusObjectPath)\0"
    "trackId\0TrackRemoved(QDBusObjectPath)\0"
    "trackId,metadata\0"
    "TrackMetadataChanged(QDBusObjectPath,TrackMetadata)\0"
    "RaiseMainWindow()\0playlist\0"
    "PlaylistChanged(MprisPlaylist)\0"
    "song,art_uri\0ArtLoaded(Song,QString)\0"
    "newState\0EngineStateChanged(Engine::State)\0"
    "VolumeChanged()\0PlaylistManagerInitialized()\0"
    "song\0CurrentSongChanged(Song)\0"
    "ShuffleModeChanged()\0RepeatModeChanged()\0"
    "PlaylistChanged(Playlist*)\0bool\0CanQuit\0"
    "CanRaise\0HasTrackList\0QString\0Identity\0"
    "DesktopEntry\0QStringList\0SupportedUriSchemes\0"
    "SupportedMimeTypes\0CanSetFullscreen\0"
    "Fullscreen\0PlaybackStatus\0LoopStatus\0"
    "double\0Rate\0Shuffle\0QVariantMap\0"
    "Metadata\0Volume\0qlonglong\0Position\0"
    "MinimumRate\0MaximumRate\0CanGoNext\0"
    "CanGoPrevious\0CanPlay\0CanPause\0CanSeek\0"
    "CanControl\0TrackIds\0Tracks\0CanEditTracks\0"
    "quint32\0PlaylistCount\0Orderings\0"
    "MaybePlaylist\0ActivePlaylist\0"
};

void mpris::Mpris2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Mpris2 *_t = static_cast<Mpris2 *>(_o);
        switch (_id) {
        case 0: _t->Seeked((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 1: _t->TrackListReplaced((*reinterpret_cast< const TrackIds(*)>(_a[1])),(*reinterpret_cast< QDBusObjectPath(*)>(_a[2]))); break;
        case 2: _t->TrackAdded((*reinterpret_cast< const TrackMetadata(*)>(_a[1])),(*reinterpret_cast< QDBusObjectPath(*)>(_a[2]))); break;
        case 3: _t->TrackRemoved((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1]))); break;
        case 4: _t->TrackMetadataChanged((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< const TrackMetadata(*)>(_a[2]))); break;
        case 5: _t->RaiseMainWindow(); break;
        case 6: _t->PlaylistChanged((*reinterpret_cast< const MprisPlaylist(*)>(_a[1]))); break;
        case 7: _t->ArtLoaded((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->EngineStateChanged((*reinterpret_cast< Engine::State(*)>(_a[1]))); break;
        case 9: _t->VolumeChanged(); break;
        case 10: _t->PlaylistManagerInitialized(); break;
        case 11: _t->CurrentSongChanged((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 12: _t->ShuffleModeChanged(); break;
        case 13: _t->RepeatModeChanged(); break;
        case 14: _t->PlaylistChanged((*reinterpret_cast< Playlist*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData mpris::Mpris2::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject mpris::Mpris2::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_mpris__Mpris2,
      qt_meta_data_mpris__Mpris2, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mpris::Mpris2::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mpris::Mpris2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mpris::Mpris2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mpris__Mpris2))
        return static_cast<void*>(const_cast< Mpris2*>(this));
    return QObject::qt_metacast(_clname);
}

int mpris::Mpris2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = CanQuit(); break;
        case 1: *reinterpret_cast< bool*>(_v) = CanRaise(); break;
        case 2: *reinterpret_cast< bool*>(_v) = HasTrackList(); break;
        case 3: *reinterpret_cast< QString*>(_v) = Identity(); break;
        case 4: *reinterpret_cast< QString*>(_v) = DesktopEntry(); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = SupportedUriSchemes(); break;
        case 6: *reinterpret_cast< QStringList*>(_v) = SupportedMimeTypes(); break;
        case 7: *reinterpret_cast< bool*>(_v) = CanSetFullscreen(); break;
        case 8: *reinterpret_cast< bool*>(_v) = Fullscreen(); break;
        case 9: *reinterpret_cast< QString*>(_v) = PlaybackStatus(); break;
        case 10: *reinterpret_cast< QString*>(_v) = LoopStatus(); break;
        case 11: *reinterpret_cast< double*>(_v) = Rate(); break;
        case 12: *reinterpret_cast< bool*>(_v) = Shuffle(); break;
        case 13: *reinterpret_cast< QVariantMap*>(_v) = Metadata(); break;
        case 14: *reinterpret_cast< double*>(_v) = Volume(); break;
        case 15: *reinterpret_cast< qlonglong*>(_v) = Position(); break;
        case 16: *reinterpret_cast< double*>(_v) = MinimumRate(); break;
        case 17: *reinterpret_cast< double*>(_v) = MaximumRate(); break;
        case 18: *reinterpret_cast< bool*>(_v) = CanGoNext(); break;
        case 19: *reinterpret_cast< bool*>(_v) = CanGoPrevious(); break;
        case 20: *reinterpret_cast< bool*>(_v) = CanPlay(); break;
        case 21: *reinterpret_cast< bool*>(_v) = CanPause(); break;
        case 22: *reinterpret_cast< bool*>(_v) = CanSeek(); break;
        case 23: *reinterpret_cast< bool*>(_v) = CanControl(); break;
        case 24: *reinterpret_cast< TrackIds*>(_v) = Tracks(); break;
        case 25: *reinterpret_cast< bool*>(_v) = CanEditTracks(); break;
        case 26: *reinterpret_cast< quint32*>(_v) = PlaylistCount(); break;
        case 27: *reinterpret_cast< QStringList*>(_v) = Orderings(); break;
        case 28: *reinterpret_cast< MaybePlaylist*>(_v) = ActivePlaylist(); break;
        }
        _id -= 29;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 8: SetFullscreen(*reinterpret_cast< bool*>(_v)); break;
        case 10: SetLoopStatus(*reinterpret_cast< QString*>(_v)); break;
        case 11: SetRate(*reinterpret_cast< double*>(_v)); break;
        case 12: SetShuffle(*reinterpret_cast< bool*>(_v)); break;
        case 14: SetVolume(*reinterpret_cast< double*>(_v)); break;
        }
        _id -= 29;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 29;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 29;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 29;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 29;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 29;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 29;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mpris::Mpris2::Seeked(qlonglong _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mpris::Mpris2::TrackListReplaced(const TrackIds & _t1, QDBusObjectPath _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mpris::Mpris2::TrackAdded(const TrackMetadata & _t1, QDBusObjectPath _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mpris::Mpris2::TrackRemoved(const QDBusObjectPath & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void mpris::Mpris2::TrackMetadataChanged(const QDBusObjectPath & _t1, const TrackMetadata & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void mpris::Mpris2::RaiseMainWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void mpris::Mpris2::PlaylistChanged(const MprisPlaylist & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
