/****************************************************************************
** Meta object code from reading C++ file 'AddRemoveResult_p.h'
**
** Created: Tue Apr 23 13:36:27 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "AddRemoveResult_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AddRemoveResult_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mygpo__AddRemoveResultPrivate[] = {

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
      31,   30,   30,   30, 0x08,
      49,   43,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_mygpo__AddRemoveResultPrivate[] = {
    "mygpo::AddRemoveResultPrivate\0\0"
    "parseData()\0error\0error(QNetworkReply::NetworkError)\0"
};

void mygpo::AddRemoveResultPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddRemoveResultPrivate *_t = static_cast<AddRemoveResultPrivate *>(_o);
        switch (_id) {
        case 0: _t->parseData(); break;
        case 1: _t->error((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData mygpo::AddRemoveResultPrivate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject mygpo::AddRemoveResultPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_mygpo__AddRemoveResultPrivate,
      qt_meta_data_mygpo__AddRemoveResultPrivate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mygpo::AddRemoveResultPrivate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mygpo::AddRemoveResultPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mygpo::AddRemoveResultPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mygpo__AddRemoveResultPrivate))
        return static_cast<void*>(const_cast< AddRemoveResultPrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int mygpo::AddRemoveResultPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
