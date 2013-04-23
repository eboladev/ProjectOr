/****************************************************************************
** Meta object code from reading C++ file 'lastfmservice.h'
**
** Created: Tue Apr 23 15:28:18 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "lastfmservice.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lastfmservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LastFMService[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   15,   14,   14, 0x05,
      58,   52,   14,   14, 0x05,
      89,   52,   14,   14, 0x05,
     119,   52,   14,   14, 0x05,
     157,   52,   14,   14, 0x05,
     188,   14,   14,   14, 0x05,
     208,   52,   14,   14, 0x05,
     241,  227,   14,   14, 0x05,
     271,   14,   14,   14, 0x05,
     294,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     319,  314,   14,   14, 0x0a,
     336,   14,   14,   14, 0x0a,
     347,   14,   14,   14, 0x0a,
     354,   14,   14,   14, 0x0a,
     360,   14,   14,   14, 0x0a,
     373,   14,   14,   14, 0x0a,
     398,  392,   14,   14, 0x08,
     440,  392,   14,   14, 0x08,
     487,  392,   14,   14, 0x08,
     526,  392,   14,   14, 0x08,
     568,   14,   14,   14, 0x08,
     596,  590,   14,   14, 0x08,
     626,   52,   14,   14, 0x08,
     647,   14,   14,   14, 0x08,
     664,   14,   14,   14, 0x08,
     678,   14,   14,   14, 0x08,
     695,   14,   14,   14, 0x08,
     717,   14,   14,   14, 0x08,
     734,   14,   14,   14, 0x08,
     743,  392,   14,   14, 0x08,
     783,  392,   14,   14, 0x08,
     812,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LastFMService[] = {
    "LastFMService\0\0success\0"
    "AuthenticationComplete(bool)\0value\0"
    "ScrobblingEnabledChanged(bool)\0"
    "ButtonVisibilityChanged(bool)\0"
    "ScrobbleButtonVisibilityChanged(bool)\0"
    "PreferAlbumArtistChanged(bool)\0"
    "ScrobbleSubmitted()\0ScrobbleError(int)\0"
    "is_subscriber\0UpdatedSubscriberStatus(bool)\0"
    "ScrobbledRadioStream()\0SavedItemsChanged()\0"
    "song\0NowPlaying(Song)\0Scrobble()\0"
    "Love()\0Ban()\0ShowConfig()\0ToggleScrobbling()\0"
    "reply\0AuthenticateReplyFinished(QNetworkReply*)\0"
    "UpdateSubscriberStatusFinished(QNetworkReply*)\0"
    "RefreshFriendsFinished(QNetworkReply*)\0"
    "RefreshNeighboursFinished(QNetworkReply*)\0"
    "TunerTrackAvailable()\0error\0"
    "TunerError(lastfm::ws::Error)\0"
    "ScrobblerStatus(int)\0AddArtistRadio()\0"
    "AddTagRadio()\0AddCustomRadio()\0"
    "ForceRefreshFriends()\0RefreshFriends()\0"
    "Remove()\0FetchMoreTracksFinished(QNetworkReply*)\0"
    "TuneFinished(QNetworkReply*)\0"
    "StreamMetadataReady()\0"
};

void LastFMService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LastFMService *_t = static_cast<LastFMService *>(_o);
        switch (_id) {
        case 0: _t->AuthenticationComplete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->ScrobblingEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->ButtonVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->ScrobbleButtonVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->PreferAlbumArtistChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->ScrobbleSubmitted(); break;
        case 6: _t->ScrobbleError((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->UpdatedSubscriberStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->ScrobbledRadioStream(); break;
        case 9: _t->SavedItemsChanged(); break;
        case 10: _t->NowPlaying((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 11: _t->Scrobble(); break;
        case 12: _t->Love(); break;
        case 13: _t->Ban(); break;
        case 14: _t->ShowConfig(); break;
        case 15: _t->ToggleScrobbling(); break;
        case 16: _t->AuthenticateReplyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 17: _t->UpdateSubscriberStatusFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 18: _t->RefreshFriendsFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 19: _t->RefreshNeighboursFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 20: _t->TunerTrackAvailable(); break;
        case 21: _t->TunerError((*reinterpret_cast< lastfm::ws::Error(*)>(_a[1]))); break;
        case 22: _t->ScrobblerStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->AddArtistRadio(); break;
        case 24: _t->AddTagRadio(); break;
        case 25: _t->AddCustomRadio(); break;
        case 26: _t->ForceRefreshFriends(); break;
        case 27: _t->RefreshFriends(); break;
        case 28: _t->Remove(); break;
        case 29: _t->FetchMoreTracksFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 30: _t->TuneFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 31: _t->StreamMetadataReady(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LastFMService::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LastFMService::staticMetaObject = {
    { &InternetService::staticMetaObject, qt_meta_stringdata_LastFMService,
      qt_meta_data_LastFMService, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LastFMService::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LastFMService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LastFMService::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LastFMService))
        return static_cast<void*>(const_cast< LastFMService*>(this));
    return InternetService::qt_metacast(_clname);
}

int LastFMService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InternetService::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    return _id;
}

// SIGNAL 0
void LastFMService::AuthenticationComplete(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LastFMService::ScrobblingEnabledChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LastFMService::ButtonVisibilityChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LastFMService::ScrobbleButtonVisibilityChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LastFMService::PreferAlbumArtistChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void LastFMService::ScrobbleSubmitted()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void LastFMService::ScrobbleError(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void LastFMService::UpdatedSubscriberStatus(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void LastFMService::ScrobbledRadioStream()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void LastFMService::SavedItemsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}
QT_END_MOC_NAMESPACE
