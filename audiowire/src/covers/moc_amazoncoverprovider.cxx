/****************************************************************************
** Meta object code from reading C++ file 'amazoncoverprovider.h'
**
** Created: Tue Apr 23 15:28:02 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "amazoncoverprovider.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'amazoncoverprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AmazonCoverProvider[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   21,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AmazonCoverProvider[] = {
    "AmazonCoverProvider\0\0reply,id\0"
    "QueryFinished(QNetworkReply*,int)\0"
};

void AmazonCoverProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AmazonCoverProvider *_t = static_cast<AmazonCoverProvider *>(_o);
        switch (_id) {
        case 0: _t->QueryFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AmazonCoverProvider::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AmazonCoverProvider::staticMetaObject = {
    { &CoverProvider::staticMetaObject, qt_meta_stringdata_AmazonCoverProvider,
      qt_meta_data_AmazonCoverProvider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AmazonCoverProvider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AmazonCoverProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AmazonCoverProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AmazonCoverProvider))
        return static_cast<void*>(const_cast< AmazonCoverProvider*>(this));
    return CoverProvider::qt_metacast(_clname);
}

int AmazonCoverProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CoverProvider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
