/****************************************************************************
** Meta object code from reading C++ file 'jamendoservice.h'
**
** Created: Tue Apr 23 15:28:06 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "jamendoservice.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jamendoservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_JamendoService[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      51,   36,   15,   15, 0x08,
      92,   15,   15,   15, 0x08,
     120,   15,   15,   15, 0x08,
     151,  145,   15,   15, 0x08,
     177,   15,   15,   15, 0x08,
     189,   15,   15,   15, 0x08,
     205,   15,   15,   15, 0x08,
     233,  216,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_JamendoService[] = {
    "JamendoService\0\0DownloadDirectory()\0"
    "received,total\0DownloadDirectoryProgress(qint64,qint64)\0"
    "DownloadDirectoryFinished()\0"
    "ParseDirectoryFinished()\0count\0"
    "UpdateTotalSongCount(int)\0AlbumInfo()\0"
    "DownloadAlbum()\0Homepage()\0provider,enabled\0"
    "SearchProviderToggled(const SearchProvider*,bool)\0"
};

void JamendoService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        JamendoService *_t = static_cast<JamendoService *>(_o);
        switch (_id) {
        case 0: _t->DownloadDirectory(); break;
        case 1: _t->DownloadDirectoryProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 2: _t->DownloadDirectoryFinished(); break;
        case 3: _t->ParseDirectoryFinished(); break;
        case 4: _t->UpdateTotalSongCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->AlbumInfo(); break;
        case 6: _t->DownloadAlbum(); break;
        case 7: _t->Homepage(); break;
        case 8: _t->SearchProviderToggled((*reinterpret_cast< const SearchProvider*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData JamendoService::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject JamendoService::staticMetaObject = {
    { &InternetService::staticMetaObject, qt_meta_stringdata_JamendoService,
      qt_meta_data_JamendoService, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &JamendoService::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *JamendoService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *JamendoService::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_JamendoService))
        return static_cast<void*>(const_cast< JamendoService*>(this));
    return InternetService::qt_metacast(_clname);
}

int JamendoService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InternetService::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
