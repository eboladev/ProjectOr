/****************************************************************************
** Meta object code from reading C++ file 'tagfetcher.h'
**
** Created: Tue Apr 23 15:28:08 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tagfetcher.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tagfetcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TagFetcher[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   12,   11,   11, 0x05,
      83,   55,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     114,   11,   11,   11, 0x0a,
     129,  123,   11,   11, 0x08,
     162,  151,   11,   11, 0x08,
     198,  185,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TagFetcher[] = {
    "TagFetcher\0\0original_song,stage\0"
    "Progress(Song,QString)\0"
    "original_song,songs_guessed\0"
    "ResultAvailable(Song,SongList)\0Cancel()\0"
    "index\0FingerprintFound(int)\0index,puid\0"
    "PuidFound(int,QString)\0index,result\0"
    "TagsFetched(int,MusicBrainzClient::ResultList)\0"
};

void TagFetcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TagFetcher *_t = static_cast<TagFetcher *>(_o);
        switch (_id) {
        case 0: _t->Progress((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->ResultAvailable((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const SongList(*)>(_a[2]))); break;
        case 2: _t->Cancel(); break;
        case 3: _t->FingerprintFound((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->PuidFound((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->TagsFetched((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const MusicBrainzClient::ResultList(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TagFetcher::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TagFetcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TagFetcher,
      qt_meta_data_TagFetcher, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TagFetcher::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TagFetcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TagFetcher::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TagFetcher))
        return static_cast<void*>(const_cast< TagFetcher*>(this));
    return QObject::qt_metacast(_clname);
}

int TagFetcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void TagFetcher::Progress(const Song & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TagFetcher::ResultAvailable(const Song & _t1, const SongList & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
