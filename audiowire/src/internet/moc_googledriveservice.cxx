/****************************************************************************
** Meta object code from reading C++ file 'googledriveservice.h'
**
** Created: Tue Apr 23 15:28:22 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "googledriveservice.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'googledriveservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GoogleDriveService[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      32,   19,   19,   19, 0x0a,
      42,   19,   19,   19, 0x0a,
      71,   62,   19,   19, 0x08,
     125,  119,   19,   19, 0x08,
     163,   62,   19,   19, 0x08,
     242,  215,   19,   19, 0x08,
     319,   19,   19,   19, 0x08,
     335,   19,   19,   19, 0x08,
     356,   19,   19,   19, 0x08,
     380,  375,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GoogleDriveService[] = {
    "GoogleDriveService\0\0Connected()\0"
    "Connect()\0ForgetCredentials()\0response\0"
    "ConnectFinished(google_drive::ConnectResponse*)\0"
    "files\0FilesFound(QList<google_drive::File>)\0"
    "ListFilesFinished(google_drive::ListFilesResponse*)\0"
    "reply,metadata,url,task_id\0"
    "ReadTagsFinished(TagReaderClient::ReplyType*,google_drive::File,QStrin"
    "g,int)\0"
    "OpenWithDrive()\0ShowSettingsDialog()\0"
    "ShowCoverManager()\0mime\0"
    "AddToPlaylist(QMimeData*)\0"
};

void GoogleDriveService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GoogleDriveService *_t = static_cast<GoogleDriveService *>(_o);
        switch (_id) {
        case 0: _t->Connected(); break;
        case 1: _t->Connect(); break;
        case 2: _t->ForgetCredentials(); break;
        case 3: _t->ConnectFinished((*reinterpret_cast< google_drive::ConnectResponse*(*)>(_a[1]))); break;
        case 4: _t->FilesFound((*reinterpret_cast< const QList<google_drive::File>(*)>(_a[1]))); break;
        case 5: _t->ListFilesFinished((*reinterpret_cast< google_drive::ListFilesResponse*(*)>(_a[1]))); break;
        case 6: _t->ReadTagsFinished((*reinterpret_cast< TagReaderClient::ReplyType*(*)>(_a[1])),(*reinterpret_cast< const google_drive::File(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4]))); break;
        case 7: _t->OpenWithDrive(); break;
        case 8: _t->ShowSettingsDialog(); break;
        case 9: _t->ShowCoverManager(); break;
        case 10: _t->AddToPlaylist((*reinterpret_cast< QMimeData*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GoogleDriveService::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GoogleDriveService::staticMetaObject = {
    { &InternetService::staticMetaObject, qt_meta_stringdata_GoogleDriveService,
      qt_meta_data_GoogleDriveService, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GoogleDriveService::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GoogleDriveService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GoogleDriveService::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GoogleDriveService))
        return static_cast<void*>(const_cast< GoogleDriveService*>(this));
    return InternetService::qt_metacast(_clname);
}

int GoogleDriveService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InternetService::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void GoogleDriveService::Connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
