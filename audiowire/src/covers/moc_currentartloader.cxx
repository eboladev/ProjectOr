/****************************************************************************
** Meta object code from reading C++ file 'currentartloader.h'
**
** Created: Tue Apr 23 15:28:02 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "currentartloader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'currentartloader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CurrentArtLoader[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   18,   17,   17, 0x05,
      64,   18,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     106,  101,   17,   17, 0x0a,
     129,  120,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CurrentArtLoader[] = {
    "CurrentArtLoader\0\0song,uri,image\0"
    "ArtLoaded(Song,QString,QImage)\0"
    "ThumbnailLoaded(Song,QString,QImage)\0"
    "song\0LoadArt(Song)\0id,image\0"
    "TempArtLoaded(quint64,QImage)\0"
};

void CurrentArtLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CurrentArtLoader *_t = static_cast<CurrentArtLoader *>(_o);
        switch (_id) {
        case 0: _t->ArtLoaded((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QImage(*)>(_a[3]))); break;
        case 1: _t->ThumbnailLoaded((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QImage(*)>(_a[3]))); break;
        case 2: _t->LoadArt((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 3: _t->TempArtLoaded((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CurrentArtLoader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CurrentArtLoader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CurrentArtLoader,
      qt_meta_data_CurrentArtLoader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CurrentArtLoader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CurrentArtLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CurrentArtLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CurrentArtLoader))
        return static_cast<void*>(const_cast< CurrentArtLoader*>(this));
    return QObject::qt_metacast(_clname);
}

int CurrentArtLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void CurrentArtLoader::ArtLoaded(const Song & _t1, const QString & _t2, const QImage & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CurrentArtLoader::ThumbnailLoaded(const Song & _t1, const QString & _t2, const QImage & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
