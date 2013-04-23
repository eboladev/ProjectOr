/****************************************************************************
** Meta object code from reading C++ file 'musicbrainzclient.h'
**
** Created: Tue Apr 23 15:28:08 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "musicbrainzclient.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'musicbrainzclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MusicBrainzClient[] = {

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
      29,   19,   18,   18, 0x05,
      93,   73,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     158,  149,   18,   18, 0x08,
     200,  194,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MusicBrainzClient[] = {
    "MusicBrainzClient\0\0id,result\0"
    "Finished(int,MusicBrainzClient::ResultList)\0"
    "artist,album,result\0"
    "Finished(QString,QString,MusicBrainzClient::ResultList)\0"
    "reply,id\0RequestFinished(QNetworkReply*,int)\0"
    "reply\0DiscIdRequestFinished(QNetworkReply*)\0"
};

void MusicBrainzClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MusicBrainzClient *_t = static_cast<MusicBrainzClient *>(_o);
        switch (_id) {
        case 0: _t->Finished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const MusicBrainzClient::ResultList(*)>(_a[2]))); break;
        case 1: _t->Finished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const MusicBrainzClient::ResultList(*)>(_a[3]))); break;
        case 2: _t->RequestFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->DiscIdRequestFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MusicBrainzClient::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MusicBrainzClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MusicBrainzClient,
      qt_meta_data_MusicBrainzClient, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MusicBrainzClient::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MusicBrainzClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MusicBrainzClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MusicBrainzClient))
        return static_cast<void*>(const_cast< MusicBrainzClient*>(this));
    return QObject::qt_metacast(_clname);
}

int MusicBrainzClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void MusicBrainzClient::Finished(int _t1, const MusicBrainzClient::ResultList & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MusicBrainzClient::Finished(const QString & _t1, const QString _t2, const MusicBrainzClient::ResultList & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
