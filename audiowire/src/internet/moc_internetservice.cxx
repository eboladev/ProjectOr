/****************************************************************************
** Meta object code from reading C++ file 'internetservice.h'
**
** Created: Tue Apr 23 15:28:06 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "internetservice.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'internetservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InternetService[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   17,   16,   16, 0x05,
      64,   46,   16,   16, 0x05,
     100,   95,   16,   16, 0x05,
     138,  132,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     165,   16,   16,   16, 0x0a,
     178,   16,   16,   16, 0x08,
     197,   16,   16,   16, 0x08,
     215,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_InternetService[] = {
    "InternetService\0\0message\0StreamError(QString)\0"
    "original_url,song\0StreamMetadataFound(QUrl,Song)\0"
    "data\0AddToPlaylistSignal(QMimeData*)\0"
    "index\0ScrollToIndex(QModelIndex)\0"
    "ShowConfig()\0AppendToPlaylist()\0"
    "ReplacePlaylist()\0OpenInNewPlaylist()\0"
};

void InternetService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        InternetService *_t = static_cast<InternetService *>(_o);
        switch (_id) {
        case 0: _t->StreamError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->StreamMetadataFound((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const Song(*)>(_a[2]))); break;
        case 2: _t->AddToPlaylistSignal((*reinterpret_cast< QMimeData*(*)>(_a[1]))); break;
        case 3: _t->ScrollToIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->ShowConfig(); break;
        case 5: _t->AppendToPlaylist(); break;
        case 6: _t->ReplacePlaylist(); break;
        case 7: _t->OpenInNewPlaylist(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData InternetService::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject InternetService::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_InternetService,
      qt_meta_data_InternetService, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InternetService::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InternetService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InternetService::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InternetService))
        return static_cast<void*>(const_cast< InternetService*>(this));
    return QObject::qt_metacast(_clname);
}

int InternetService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void InternetService::StreamError(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InternetService::StreamMetadataFound(const QUrl & _t1, const Song & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void InternetService::AddToPlaylistSignal(QMimeData * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void InternetService::ScrollToIndex(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
