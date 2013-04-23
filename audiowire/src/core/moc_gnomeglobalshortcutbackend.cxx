/****************************************************************************
** Meta object code from reading C++ file 'gnomeglobalshortcutbackend.h'
**
** Created: Tue Apr 23 15:28:00 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gnomeglobalshortcutbackend.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gnomeglobalshortcutbackend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GnomeGlobalShortcutBackend[] = {

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
      36,   28,   27,   27, 0x08,
      95,   79,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GnomeGlobalShortcutBackend[] = {
    "GnomeGlobalShortcutBackend\0\0watcher\0"
    "RegisterFinished(QDBusPendingCallWatcher*)\0"
    "application,key\0GnomeMediaKeyPressed(QString,QString)\0"
};

void GnomeGlobalShortcutBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GnomeGlobalShortcutBackend *_t = static_cast<GnomeGlobalShortcutBackend *>(_o);
        switch (_id) {
        case 0: _t->RegisterFinished((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 1: _t->GnomeMediaKeyPressed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GnomeGlobalShortcutBackend::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GnomeGlobalShortcutBackend::staticMetaObject = {
    { &GlobalShortcutBackend::staticMetaObject, qt_meta_stringdata_GnomeGlobalShortcutBackend,
      qt_meta_data_GnomeGlobalShortcutBackend, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GnomeGlobalShortcutBackend::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GnomeGlobalShortcutBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GnomeGlobalShortcutBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GnomeGlobalShortcutBackend))
        return static_cast<void*>(const_cast< GnomeGlobalShortcutBackend*>(this));
    return GlobalShortcutBackend::qt_metacast(_clname);
}

int GnomeGlobalShortcutBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GlobalShortcutBackend::qt_metacall(_c, _id, _a);
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
