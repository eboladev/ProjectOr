/****************************************************************************
** Meta object code from reading C++ file 'googledriveclient.h'
**
** Created: Tue Apr 23 15:28:22 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "googledriveclient.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'googledriveclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_google_drive__ConnectResponse[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_google_drive__ConnectResponse[] = {
    "google_drive::ConnectResponse\0\0"
    "Finished()\0"
};

void google_drive::ConnectResponse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ConnectResponse *_t = static_cast<ConnectResponse *>(_o);
        switch (_id) {
        case 0: _t->Finished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData google_drive::ConnectResponse::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject google_drive::ConnectResponse::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_google_drive__ConnectResponse,
      qt_meta_data_google_drive__ConnectResponse, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &google_drive::ConnectResponse::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *google_drive::ConnectResponse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *google_drive::ConnectResponse::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_google_drive__ConnectResponse))
        return static_cast<void*>(const_cast< ConnectResponse*>(this));
    return QObject::qt_metacast(_clname);
}

int google_drive::ConnectResponse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void google_drive::ConnectResponse::Finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_google_drive__ListFilesResponse[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      39,   33,   32,   32, 0x05,
      77,   32,   32,   32, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_google_drive__ListFilesResponse[] = {
    "google_drive::ListFilesResponse\0\0files\0"
    "FilesFound(QList<google_drive::File>)\0"
    "Finished()\0"
};

void google_drive::ListFilesResponse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ListFilesResponse *_t = static_cast<ListFilesResponse *>(_o);
        switch (_id) {
        case 0: _t->FilesFound((*reinterpret_cast< const QList<google_drive::File>(*)>(_a[1]))); break;
        case 1: _t->Finished(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData google_drive::ListFilesResponse::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject google_drive::ListFilesResponse::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_google_drive__ListFilesResponse,
      qt_meta_data_google_drive__ListFilesResponse, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &google_drive::ListFilesResponse::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *google_drive::ListFilesResponse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *google_drive::ListFilesResponse::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_google_drive__ListFilesResponse))
        return static_cast<void*>(const_cast< ListFilesResponse*>(this));
    return QObject::qt_metacast(_clname);
}

int google_drive::ListFilesResponse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void google_drive::ListFilesResponse::FilesFound(const QList<google_drive::File> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void google_drive::ListFilesResponse::Finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_google_drive__GetFileResponse[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_google_drive__GetFileResponse[] = {
    "google_drive::GetFileResponse\0\0"
    "Finished()\0"
};

void google_drive::GetFileResponse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GetFileResponse *_t = static_cast<GetFileResponse *>(_o);
        switch (_id) {
        case 0: _t->Finished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData google_drive::GetFileResponse::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject google_drive::GetFileResponse::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_google_drive__GetFileResponse,
      qt_meta_data_google_drive__GetFileResponse, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &google_drive::GetFileResponse::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *google_drive::GetFileResponse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *google_drive::GetFileResponse::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_google_drive__GetFileResponse))
        return static_cast<void*>(const_cast< GetFileResponse*>(this));
    return QObject::qt_metacast(_clname);
}

int google_drive::GetFileResponse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void google_drive::GetFileResponse::Finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_google_drive__Client[] = {

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
      22,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      53,   38,   21,   21, 0x08,
     118,  103,   21,   21, 0x08,
     171,  103,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_google_drive__Client[] = {
    "google_drive::Client\0\0Authenticated()\0"
    "response,oauth\0"
    "ConnectFinished(ConnectResponse*,OAuthenticator*)\0"
    "response,reply\0"
    "ListFilesFinished(ListFilesResponse*,QNetworkReply*)\0"
    "GetFileFinished(GetFileResponse*,QNetworkReply*)\0"
};

void google_drive::Client::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Client *_t = static_cast<Client *>(_o);
        switch (_id) {
        case 0: _t->Authenticated(); break;
        case 1: _t->ConnectFinished((*reinterpret_cast< ConnectResponse*(*)>(_a[1])),(*reinterpret_cast< OAuthenticator*(*)>(_a[2]))); break;
        case 2: _t->ListFilesFinished((*reinterpret_cast< ListFilesResponse*(*)>(_a[1])),(*reinterpret_cast< QNetworkReply*(*)>(_a[2]))); break;
        case 3: _t->GetFileFinished((*reinterpret_cast< GetFileResponse*(*)>(_a[1])),(*reinterpret_cast< QNetworkReply*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData google_drive::Client::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject google_drive::Client::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_google_drive__Client,
      qt_meta_data_google_drive__Client, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &google_drive::Client::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *google_drive::Client::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *google_drive::Client::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_google_drive__Client))
        return static_cast<void*>(const_cast< Client*>(this));
    return QObject::qt_metacast(_clname);
}

int google_drive::Client::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void google_drive::Client::Authenticated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
