/****************************************************************************
** Meta object code from reading C++ file 'osd.h'
**
** Created: Tue Apr 23 15:28:17 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "osd.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'osd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OSD[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       5,    4,    4,    4, 0x0a,
      22,    4,    4,    4, 0x0a,
      31,    4,    4,    4, 0x0a,
      41,    4,    4,    4, 0x0a,
      66,   60,    4,    4, 0x0a,
      92,   85,    4,    4, 0x0a,
     136,  131,    4,    4, 0x0a,
     184,  131,    4,    4, 0x0a,
     234,    4,    4,    4, 0x0a,
     257,  254,    4,    4, 0x0a,
     279,  254,    4,    4, 0x0a,
     303,  254,    4,    4, 0x0a,
     327,  254,    4,    4, 0x0a,
     362,  354,    4,    4, 0x0a,
     391,  354,    4,    4, 0x0a,
     447,  425,    4,    4, 0x0a,
     499,  491,    4,    4, 0x08,
     553,  538,    4,    4, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OSD[] = {
    "OSD\0\0ReloadSettings()\0Paused()\0Stopped()\0"
    "PlaylistFinished()\0value\0VolumeChanged(int)\0"
    "albums\0MagnatuneDownloadFinished(QStringList)\0"
    "mode\0RepeatModeChanged(PlaylistSequence::RepeatMode)\0"
    "ShuffleModeChanged(PlaylistSequence::ShuffleMode)\0"
    "ReshowCurrentSong()\0id\0WiiremoteActived(int)\0"
    "WiiremoteDeactived(int)\0WiiremoteConnected(int)\0"
    "WiiremoteDisconnected(int)\0id,live\0"
    "WiiremoteLowBattery(int,int)\0"
    "WiiremoteCriticalBattery(int,int)\0"
    "type,line1,line2,song\0"
    "ShowPreview(Behaviour,QString,QString,Song)\0"
    "watcher\0CallFinished(QDBusPendingCallWatcher*)\0"
    "song,uri,image\0AlbumArtLoaded(Song,QString,QImage)\0"
};

void OSD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OSD *_t = static_cast<OSD *>(_o);
        switch (_id) {
        case 0: _t->ReloadSettings(); break;
        case 1: _t->Paused(); break;
        case 2: _t->Stopped(); break;
        case 3: _t->PlaylistFinished(); break;
        case 4: _t->VolumeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->MagnatuneDownloadFinished((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 6: _t->RepeatModeChanged((*reinterpret_cast< PlaylistSequence::RepeatMode(*)>(_a[1]))); break;
        case 7: _t->ShuffleModeChanged((*reinterpret_cast< PlaylistSequence::ShuffleMode(*)>(_a[1]))); break;
        case 8: _t->ReshowCurrentSong(); break;
        case 9: _t->WiiremoteActived((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->WiiremoteDeactived((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->WiiremoteConnected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->WiiremoteDisconnected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->WiiremoteLowBattery((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->WiiremoteCriticalBattery((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->ShowPreview((*reinterpret_cast< const Behaviour(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const Song(*)>(_a[4]))); break;
        case 16: _t->CallFinished((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 17: _t->AlbumArtLoaded((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QImage(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OSD::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OSD::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OSD,
      qt_meta_data_OSD, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OSD::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OSD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OSD::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OSD))
        return static_cast<void*>(const_cast< OSD*>(this));
    return QObject::qt_metacast(_clname);
}

int OSD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
