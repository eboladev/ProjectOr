/****************************************************************************
** Meta object code from reading C++ file 'playlistbackend.h'
**
** Created: Tue Apr 23 15:28:08 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "playlistbackend.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlistbackend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PlaylistBackend[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       2,   19, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      52,   17,   16,   16, 0x0a,

 // constructors: signature, parameters, type, tag, flags
     132,  121,   16,   16, 0x0e,
     175,  171,   16,   16, 0x2e,

       0        // eod
};

static const char qt_meta_stringdata_PlaylistBackend[] = {
    "PlaylistBackend\0\0playlist,items,last_played,dynamic\0"
    "SavePlaylist(int,PlaylistItemList,int,smart_playlists::GeneratorPtr)\0"
    "app,parent\0PlaylistBackend(Application*,QObject*)\0"
    "app\0PlaylistBackend(Application*)\0"
};

void PlaylistBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { PlaylistBackend *_r = new PlaylistBackend((*reinterpret_cast< Application*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { PlaylistBackend *_r = new PlaylistBackend((*reinterpret_cast< Application*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PlaylistBackend *_t = static_cast<PlaylistBackend *>(_o);
        switch (_id) {
        case 0: _t->SavePlaylist((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const PlaylistItemList(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< smart_playlists::GeneratorPtr(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PlaylistBackend::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PlaylistBackend::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PlaylistBackend,
      qt_meta_data_PlaylistBackend, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlaylistBackend::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlaylistBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlaylistBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlaylistBackend))
        return static_cast<void*>(const_cast< PlaylistBackend*>(this));
    return QObject::qt_metacast(_clname);
}

int PlaylistBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
