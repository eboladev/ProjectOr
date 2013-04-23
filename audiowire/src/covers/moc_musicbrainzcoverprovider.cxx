/****************************************************************************
** Meta object code from reading C++ file 'musicbrainzcoverprovider.h'
**
** Created: Tue Apr 23 15:28:03 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "musicbrainzcoverprovider.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'musicbrainzcoverprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MusicbrainzCoverProvider[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      35,   26,   25,   25, 0x08,
      80,   77,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MusicbrainzCoverProvider[] = {
    "MusicbrainzCoverProvider\0\0reply,id\0"
    "ReleaseSearchFinished(QNetworkReply*,int)\0"
    "id\0ImageCheckFinished(int)\0"
};

void MusicbrainzCoverProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MusicbrainzCoverProvider *_t = static_cast<MusicbrainzCoverProvider *>(_o);
        switch (_id) {
        case 0: _t->ReleaseSearchFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->ImageCheckFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MusicbrainzCoverProvider::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MusicbrainzCoverProvider::staticMetaObject = {
    { &CoverProvider::staticMetaObject, qt_meta_stringdata_MusicbrainzCoverProvider,
      qt_meta_data_MusicbrainzCoverProvider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MusicbrainzCoverProvider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MusicbrainzCoverProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MusicbrainzCoverProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MusicbrainzCoverProvider))
        return static_cast<void*>(const_cast< MusicbrainzCoverProvider*>(this));
    return CoverProvider::qt_metacast(_clname);
}

int MusicbrainzCoverProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CoverProvider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
