/****************************************************************************
** Meta object code from reading C++ file 'magnatuneservice.h'
**
** Created: Tue Apr 23 15:28:07 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "magnatuneservice.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'magnatuneservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MagnatuneService[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   18,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      61,   55,   17,   17, 0x08,
      87,   17,   17,   17, 0x08,
     104,   17,   17,   17, 0x08,
     129,   17,   17,   17, 0x08,
     140,   17,   17,   17, 0x08,
     151,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MagnatuneService[] = {
    "MagnatuneService\0\0albums\0"
    "DownloadFinished(QStringList)\0count\0"
    "UpdateTotalSongCount(int)\0ReloadDatabase()\0"
    "ReloadDatabaseFinished()\0Download()\0"
    "Homepage()\0ShowConfig()\0"
};

void MagnatuneService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MagnatuneService *_t = static_cast<MagnatuneService *>(_o);
        switch (_id) {
        case 0: _t->DownloadFinished((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->UpdateTotalSongCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->ReloadDatabase(); break;
        case 3: _t->ReloadDatabaseFinished(); break;
        case 4: _t->Download(); break;
        case 5: _t->Homepage(); break;
        case 6: _t->ShowConfig(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MagnatuneService::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MagnatuneService::staticMetaObject = {
    { &InternetService::staticMetaObject, qt_meta_stringdata_MagnatuneService,
      qt_meta_data_MagnatuneService, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MagnatuneService::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MagnatuneService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MagnatuneService::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MagnatuneService))
        return static_cast<void*>(const_cast< MagnatuneService*>(this));
    return InternetService::qt_metacast(_clname);
}

int MagnatuneService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InternetService::qt_metacall(_c, _id, _a);
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
void MagnatuneService::DownloadFinished(const QStringList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
