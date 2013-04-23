/****************************************************************************
** Meta object code from reading C++ file 'soundcloudservice.h'
**
** Created: Tue Apr 23 15:28:07 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "soundcloudservice.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'soundcloudservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SoundCloudService[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   19,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      71,   62,   18,   18, 0x08,
      97,   92,   18,   18, 0x28,
     113,   18,   18,   18, 0x08,
     135,  124,   18,   18, 0x08,
     179,  170,   18,   18, 0x08,
     220,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SoundCloudService[] = {
    "SoundCloudService\0\0id,songs\0"
    "SimpleSearchResults(int,SongList)\0"
    "text,now\0Search(QString,bool)\0text\0"
    "Search(QString)\0DoSearch()\0reply,task\0"
    "SearchFinished(QNetworkReply*,int)\0"
    "reply,id\0SimpleSearchFinished(QNetworkReply*,int)\0"
    "Homepage()\0"
};

void SoundCloudService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SoundCloudService *_t = static_cast<SoundCloudService *>(_o);
        switch (_id) {
        case 0: _t->SimpleSearchResults((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< SongList(*)>(_a[2]))); break;
        case 1: _t->Search((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->Search((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->DoSearch(); break;
        case 4: _t->SearchFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->SimpleSearchFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->Homepage(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SoundCloudService::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SoundCloudService::staticMetaObject = {
    { &InternetService::staticMetaObject, qt_meta_stringdata_SoundCloudService,
      qt_meta_data_SoundCloudService, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SoundCloudService::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SoundCloudService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SoundCloudService::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SoundCloudService))
        return static_cast<void*>(const_cast< SoundCloudService*>(this));
    return InternetService::qt_metacast(_clname);
}

int SoundCloudService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InternetService::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void SoundCloudService::SimpleSearchResults(int _t1, SongList _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
