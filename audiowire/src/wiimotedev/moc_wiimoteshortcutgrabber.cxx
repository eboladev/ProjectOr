/****************************************************************************
** Meta object code from reading C++ file 'wiimoteshortcutgrabber.h'
**
** Created: Tue Apr 23 15:28:20 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "wiimoteshortcutgrabber.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wiimoteshortcutgrabber.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WiimoteShortcutGrabber[] = {

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
      39,   24,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      77,   68,   23,   23, 0x08,
     128,  120,   23,   23, 0x08,
     155,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WiimoteShortcutGrabber[] = {
    "WiimoteShortcutGrabber\0\0buttons,action\0"
    "AddShortcut(quint64,quint32)\0id,value\0"
    "DbusWiimoteGeneralButtons(uint,qulonglong)\0"
    "checked\0RememberSwingChecked(bool)\0"
    "Timeout(int)\0"
};

void WiimoteShortcutGrabber::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WiimoteShortcutGrabber *_t = static_cast<WiimoteShortcutGrabber *>(_o);
        switch (_id) {
        case 0: _t->AddShortcut((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 1: _t->DbusWiimoteGeneralButtons((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< qulonglong(*)>(_a[2]))); break;
        case 2: _t->RememberSwingChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->Timeout((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WiimoteShortcutGrabber::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WiimoteShortcutGrabber::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_WiimoteShortcutGrabber,
      qt_meta_data_WiimoteShortcutGrabber, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WiimoteShortcutGrabber::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WiimoteShortcutGrabber::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WiimoteShortcutGrabber::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WiimoteShortcutGrabber))
        return static_cast<void*>(const_cast< WiimoteShortcutGrabber*>(this));
    return QDialog::qt_metacast(_clname);
}

int WiimoteShortcutGrabber::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void WiimoteShortcutGrabber::AddShortcut(quint64 _t1, quint32 _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
