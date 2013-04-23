/****************************************************************************
** Meta object code from reading C++ file 'podcastupdater.h'
**
** Created: Tue Apr 23 15:28:11 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "podcastupdater.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'podcastupdater.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PodcastUpdater[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      47,   39,   15,   15, 0x0a,
      73,   15,   15,   15, 0x08,
      90,   39,   15,   15, 0x08,
     143,  117,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PodcastUpdater[] = {
    "PodcastUpdater\0\0UpdateAllPodcastsNow()\0"
    "podcast\0UpdatePodcastNow(Podcast)\0"
    "ReloadSettings()\0SubscriptionAdded(Podcast)\0"
    "reply,podcast,one_of_many\0"
    "PodcastLoaded(PodcastUrlLoaderReply*,Podcast,bool)\0"
};

void PodcastUpdater::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PodcastUpdater *_t = static_cast<PodcastUpdater *>(_o);
        switch (_id) {
        case 0: _t->UpdateAllPodcastsNow(); break;
        case 1: _t->UpdatePodcastNow((*reinterpret_cast< const Podcast(*)>(_a[1]))); break;
        case 2: _t->ReloadSettings(); break;
        case 3: _t->SubscriptionAdded((*reinterpret_cast< const Podcast(*)>(_a[1]))); break;
        case 4: _t->PodcastLoaded((*reinterpret_cast< PodcastUrlLoaderReply*(*)>(_a[1])),(*reinterpret_cast< const Podcast(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PodcastUpdater::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PodcastUpdater::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PodcastUpdater,
      qt_meta_data_PodcastUpdater, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PodcastUpdater::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PodcastUpdater::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PodcastUpdater::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PodcastUpdater))
        return static_cast<void*>(const_cast< PodcastUpdater*>(this));
    return QObject::qt_metacast(_clname);
}

int PodcastUpdater::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
