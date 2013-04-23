/****************************************************************************
** Meta object code from reading C++ file 'network.h'
**
** Created: Tue Apr 23 15:28:01 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "network.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'network.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NetworkAccessManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_NetworkAccessManager[] = {
    "NetworkAccessManager\0"
};

void NetworkAccessManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData NetworkAccessManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NetworkAccessManager::staticMetaObject = {
    { &QNetworkAccessManager::staticMetaObject, qt_meta_stringdata_NetworkAccessManager,
      qt_meta_data_NetworkAccessManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NetworkAccessManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NetworkAccessManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NetworkAccessManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkAccessManager))
        return static_cast<void*>(const_cast< NetworkAccessManager*>(this));
    return QNetworkAccessManager::qt_metacast(_clname);
}

int NetworkAccessManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkAccessManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_RedirectFollower[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      30,   17,   17,   17, 0x05,
      86,   65,   17,   17, 0x05,
     141,  116,   17,   17, 0x05,
     173,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     184,   17,   17,   17, 0x08,
     196,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RedirectFollower[] = {
    "RedirectFollower\0\0readyRead()\0"
    "error(QNetworkReply::NetworkError)\0"
    "bytesSent,bytesTotal\0uploadProgress(qint64,qint64)\0"
    "bytesReceived,bytesTotal\0"
    "downloadProgress(qint64,qint64)\0"
    "finished()\0ReadyRead()\0ReplyFinished()\0"
};

void RedirectFollower::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RedirectFollower *_t = static_cast<RedirectFollower *>(_o);
        switch (_id) {
        case 0: _t->readyRead(); break;
        case 1: _t->error((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 2: _t->uploadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 3: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 4: _t->finished(); break;
        case 5: _t->ReadyRead(); break;
        case 6: _t->ReplyFinished(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RedirectFollower::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RedirectFollower::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RedirectFollower,
      qt_meta_data_RedirectFollower, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RedirectFollower::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RedirectFollower::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RedirectFollower::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RedirectFollower))
        return static_cast<void*>(const_cast< RedirectFollower*>(this));
    return QObject::qt_metacast(_clname);
}

int RedirectFollower::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void RedirectFollower::readyRead()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void RedirectFollower::error(QNetworkReply::NetworkError _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RedirectFollower::uploadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RedirectFollower::downloadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RedirectFollower::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
static const uint qt_meta_data_NetworkTimeouts[] = {

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
      17,   16,   16,   16, 0x08,
      42,   33,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_NetworkTimeouts[] = {
    "NetworkTimeouts\0\0ReplyFinished()\0"
    "redirect\0RedirectFinished(RedirectFollower*)\0"
};

void NetworkTimeouts::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NetworkTimeouts *_t = static_cast<NetworkTimeouts *>(_o);
        switch (_id) {
        case 0: _t->ReplyFinished(); break;
        case 1: _t->RedirectFinished((*reinterpret_cast< RedirectFollower*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData NetworkTimeouts::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NetworkTimeouts::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NetworkTimeouts,
      qt_meta_data_NetworkTimeouts, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NetworkTimeouts::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NetworkTimeouts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NetworkTimeouts::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkTimeouts))
        return static_cast<void*>(const_cast< NetworkTimeouts*>(this));
    return QObject::qt_metacast(_clname);
}

int NetworkTimeouts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
