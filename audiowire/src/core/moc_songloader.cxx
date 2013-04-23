/****************************************************************************
** Meta object code from reading C++ file 'songloader.h'
**
** Created: Tue Apr 23 15:28:02 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "songloader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'songloader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SongLoader[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   11,   11,   11, 0x08,
      49,   11,   11,   11, 0x08,
      85,   64,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SongLoader[] = {
    "SongLoader\0\0success\0LoadFinished(bool)\0"
    "Timeout()\0StopTypefind()\0artist,album,results\0"
    "AudioCDTagsLoaded(QString,QString,MusicBrainzClient::ResultList)\0"
};

void SongLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SongLoader *_t = static_cast<SongLoader *>(_o);
        switch (_id) {
        case 0: _t->LoadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->Timeout(); break;
        case 2: _t->StopTypefind(); break;
        case 3: _t->AudioCDTagsLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const MusicBrainzClient::ResultList(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SongLoader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SongLoader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SongLoader,
      qt_meta_data_SongLoader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SongLoader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SongLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SongLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SongLoader))
        return static_cast<void*>(const_cast< SongLoader*>(this));
    return QObject::qt_metacast(_clname);
}

int SongLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SongLoader::LoadFinished(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
