/****************************************************************************
** Meta object code from reading C++ file 'EpisodeList_p.h'
**
** Created: Tue Apr 23 13:36:27 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "EpisodeList_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EpisodeList_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mygpo__EpisodeListPrivate[] = {

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
      27,   26,   26,   26, 0x08,
      45,   39,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_mygpo__EpisodeListPrivate[] = {
    "mygpo::EpisodeListPrivate\0\0parseData()\0"
    "error\0error(QNetworkReply::NetworkError)\0"
};

void mygpo::EpisodeListPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EpisodeListPrivate *_t = static_cast<EpisodeListPrivate *>(_o);
        switch (_id) {
        case 0: _t->parseData(); break;
        case 1: _t->error((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData mygpo::EpisodeListPrivate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject mygpo::EpisodeListPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_mygpo__EpisodeListPrivate,
      qt_meta_data_mygpo__EpisodeListPrivate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mygpo::EpisodeListPrivate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mygpo::EpisodeListPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mygpo::EpisodeListPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mygpo__EpisodeListPrivate))
        return static_cast<void*>(const_cast< EpisodeListPrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int mygpo::EpisodeListPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
