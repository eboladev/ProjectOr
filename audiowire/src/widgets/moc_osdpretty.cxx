/****************************************************************************
** Meta object code from reading C++ file 'osdpretty.h'
**
** Created: Tue Apr 23 15:28:17 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "osdpretty.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'osdpretty.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OSDPretty[] = {

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
      11,   10,   10,   10, 0x0a,
      34,   28,   10,   10, 0x08,
      59,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OSDPretty[] = {
    "OSDPretty\0\0ReloadSettings()\0value\0"
    "FaderValueChanged(qreal)\0FaderFinished()\0"
};

void OSDPretty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OSDPretty *_t = static_cast<OSDPretty *>(_o);
        switch (_id) {
        case 0: _t->ReloadSettings(); break;
        case 1: _t->FaderValueChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->FaderFinished(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OSDPretty::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OSDPretty::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OSDPretty,
      qt_meta_data_OSDPretty, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OSDPretty::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OSDPretty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OSDPretty::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OSDPretty))
        return static_cast<void*>(const_cast< OSDPretty*>(this));
    return QWidget::qt_metacast(_clname);
}

int OSDPretty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
