/****************************************************************************
** Meta object code from reading C++ file 'moodbarloader.h'
**
** Created: Tue Apr 23 15:28:21 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "moodbarloader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'moodbarloader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MoodbarLoader[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      49,   32,   14,   14, 0x08,
      88,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MoodbarLoader[] = {
    "MoodbarLoader\0\0ReloadSettings()\0"
    "request,filename\0"
    "RequestFinished(MoodbarPipeline*,QUrl)\0"
    "MaybeTakeNextRequest()\0"
};

void MoodbarLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MoodbarLoader *_t = static_cast<MoodbarLoader *>(_o);
        switch (_id) {
        case 0: _t->ReloadSettings(); break;
        case 1: _t->RequestFinished((*reinterpret_cast< MoodbarPipeline*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 2: _t->MaybeTakeNextRequest(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MoodbarLoader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MoodbarLoader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MoodbarLoader,
      qt_meta_data_MoodbarLoader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MoodbarLoader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MoodbarLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MoodbarLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MoodbarLoader))
        return static_cast<void*>(const_cast< MoodbarLoader*>(this));
    return QObject::qt_metacast(_clname);
}

int MoodbarLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
