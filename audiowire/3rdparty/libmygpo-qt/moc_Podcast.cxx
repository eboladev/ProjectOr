/****************************************************************************
** Meta object code from reading C++ file 'Podcast.h'
**
** Created: Tue Apr 23 13:36:27 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Podcast.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Podcast.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mygpo__Podcast[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       8,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      27,   15,   15,   15, 0x05,
      46,   40,   15,   15, 0x05,

 // properties: name, type, flags
      93,   88, 0x11095401,
     105,   97, 0x0a095401,
     111,   97, 0x0a095401,
     128,  123, 0x03095401,
     140,  123, 0x03095401,
     160,   88, 0x11095401,
     168,   88, 0x11095401,
     176,   88, 0x11095401,

       0        // eod
};

static const char qt_meta_stringdata_mygpo__Podcast[] = {
    "mygpo::Podcast\0\0finished()\0parseError()\0"
    "error\0requestError(QNetworkReply::NetworkError)\0"
    "QUrl\0url\0QString\0title\0description\0"
    "uint\0subscribers\0subscribersLastWeek\0"
    "logoUrl\0website\0mygpoUrl\0"
};

void mygpo::Podcast::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Podcast *_t = static_cast<Podcast *>(_o);
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->parseError(); break;
        case 2: _t->requestError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData mygpo::Podcast::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject mygpo::Podcast::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_mygpo__Podcast,
      qt_meta_data_mygpo__Podcast, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mygpo::Podcast::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mygpo::Podcast::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mygpo::Podcast::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mygpo__Podcast))
        return static_cast<void*>(const_cast< Podcast*>(this));
    return QObject::qt_metacast(_clname);
}

int mygpo::Podcast::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< QUrl*>(_v) = url(); break;
        case 1: *reinterpret_cast< QString*>(_v) = title(); break;
        case 2: *reinterpret_cast< QString*>(_v) = description(); break;
        case 3: *reinterpret_cast< uint*>(_v) = subscribers(); break;
        case 4: *reinterpret_cast< uint*>(_v) = subscribersLastWeek(); break;
        case 5: *reinterpret_cast< QUrl*>(_v) = logoUrl(); break;
        case 6: *reinterpret_cast< QUrl*>(_v) = website(); break;
        case 7: *reinterpret_cast< QUrl*>(_v) = mygpoUrl(); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 8;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mygpo::Podcast::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void mygpo::Podcast::parseError()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void mygpo::Podcast::requestError(QNetworkReply::NetworkError _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
