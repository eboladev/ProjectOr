/****************************************************************************
** Meta object code from reading C++ file 'oauthenticator.h'
**
** Created: Tue Apr 23 15:28:07 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "oauthenticator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'oauthenticator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OAuthenticator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      27,   15,   15,   15, 0x08,
      57,   43,   15,   15, 0x08,
     103,   97,   15,   15, 0x08,
     144,   97,   15,   15, 0x08,
     187,   97,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OAuthenticator[] = {
    "OAuthenticator\0\0Finished()\0NewConnection()\0"
    "socket,buffer\0RedirectArrived(QTcpSocket*,QByteArray)\0"
    "reply\0FetchAccessTokenFinished(QNetworkReply*)\0"
    "RefreshAccessTokenFinished(QNetworkReply*)\0"
    "FetchUserInfoFinished(QNetworkReply*)\0"
};

void OAuthenticator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OAuthenticator *_t = static_cast<OAuthenticator *>(_o);
        switch (_id) {
        case 0: _t->Finished(); break;
        case 1: _t->NewConnection(); break;
        case 2: _t->RedirectArrived((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 3: _t->FetchAccessTokenFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 4: _t->RefreshAccessTokenFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 5: _t->FetchUserInfoFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OAuthenticator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OAuthenticator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OAuthenticator,
      qt_meta_data_OAuthenticator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OAuthenticator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OAuthenticator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OAuthenticator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OAuthenticator))
        return static_cast<void*>(const_cast< OAuthenticator*>(this));
    return QObject::qt_metacast(_clname);
}

int OAuthenticator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void OAuthenticator::Finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
