/****************************************************************************
** Meta object code from reading C++ file 'qtsinglecoreapplication.h'
**
** Created: Tue Apr 23 13:36:03 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qtsinglecoreapplication.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtsinglecoreapplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QtSingleCoreApplication[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   25,   24,   24, 0x05,
      58,   25,   24,   24, 0x05,
      86,   25,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
     136,  120,  115,   24, 0x0a,
     161,   25,  115,   24, 0x2a,
     182,  120,  115,   24, 0x0a,
     210,   25,  115,   24, 0x2a,
     234,  120,  115,   24, 0x0a,
     263,   25,  115,   24, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_QtSingleCoreApplication[] = {
    "QtSingleCoreApplication\0\0message\0"
    "messageReceived(QString)\0"
    "messageReceived(QByteArray)\0"
    "messageReceived(const char*)\0bool\0"
    "message,timeout\0sendMessage(QString,int)\0"
    "sendMessage(QString)\0sendMessage(QByteArray,int)\0"
    "sendMessage(QByteArray)\0"
    "sendMessage(const char*,int)\0"
    "sendMessage(const char*)\0"
};

void QtSingleCoreApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QtSingleCoreApplication *_t = static_cast<QtSingleCoreApplication *>(_o);
        switch (_id) {
        case 0: _t->messageReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->messageReceived((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 2: _t->messageReceived((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->sendMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->sendMessage((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->sendMessage((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->sendMessage((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->sendMessage((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->sendMessage((*reinterpret_cast< const char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QtSingleCoreApplication::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QtSingleCoreApplication::staticMetaObject = {
    { &QCoreApplication::staticMetaObject, qt_meta_stringdata_QtSingleCoreApplication,
      qt_meta_data_QtSingleCoreApplication, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QtSingleCoreApplication::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QtSingleCoreApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QtSingleCoreApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtSingleCoreApplication))
        return static_cast<void*>(const_cast< QtSingleCoreApplication*>(this));
    return QCoreApplication::qt_metacast(_clname);
}

int QtSingleCoreApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCoreApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QtSingleCoreApplication::messageReceived(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtSingleCoreApplication::messageReceived(const QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtSingleCoreApplication::messageReceived(const char * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
