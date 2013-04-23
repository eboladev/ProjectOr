/****************************************************************************
** Meta object code from reading C++ file 'EpisodeActionList.h'
**
** Created: Tue Apr 23 13:36:28 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "EpisodeActionList.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EpisodeActionList.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mygpo__EpisodeActionList[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x05,
      37,   25,   25,   25, 0x05,
      56,   50,   25,   25, 0x05,

 // properties: name, type, flags
     107,   98, 0xff095401,
     133,  122, 0x05095401,

       0        // eod
};

static const char qt_meta_stringdata_mygpo__EpisodeActionList[] = {
    "mygpo::EpisodeActionList\0\0finished()\0"
    "parseError()\0error\0"
    "requestError(QNetworkReply::NetworkError)\0"
    "QVariant\0episodeActions\0qulonglong\0"
    "timestamp\0"
};

void mygpo::EpisodeActionList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EpisodeActionList *_t = static_cast<EpisodeActionList *>(_o);
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->parseError(); break;
        case 2: _t->requestError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData mygpo::EpisodeActionList::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject mygpo::EpisodeActionList::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_mygpo__EpisodeActionList,
      qt_meta_data_mygpo__EpisodeActionList, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mygpo::EpisodeActionList::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mygpo::EpisodeActionList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mygpo::EpisodeActionList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mygpo__EpisodeActionList))
        return static_cast<void*>(const_cast< EpisodeActionList*>(this));
    return QObject::qt_metacast(_clname);
}

int mygpo::EpisodeActionList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = episodeActions(); break;
        case 1: *reinterpret_cast< qulonglong*>(_v) = timestamp(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mygpo::EpisodeActionList::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void mygpo::EpisodeActionList::parseError()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void mygpo::EpisodeActionList::requestError(QNetworkReply::NetworkError _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
