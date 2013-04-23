/****************************************************************************
** Meta object code from reading C++ file 'trackslider.h'
**
** Created: Tue Apr 23 15:28:18 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "trackslider.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trackslider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TrackSlider[] = {

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
      19,   13,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      51,   37,   12,   12, 0x0a,
      69,   12,   12,   12, 0x0a,
      91,   82,   12,   12, 0x0a,
     112,  108,   12,   12, 0x0a,
     122,   13,   12,   12, 0x08,
     145,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TrackSlider[] = {
    "TrackSlider\0\0value\0ValueChanged(int)\0"
    "elapsed,total\0SetValue(int,int)\0"
    "SetStopped()\0can_seek\0SetCanSeek(bool)\0"
    "gap\0Seek(int)\0ValueMaybeChanged(int)\0"
    "ToggleTimeDisplay()\0"
};

void TrackSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TrackSlider *_t = static_cast<TrackSlider *>(_o);
        switch (_id) {
        case 0: _t->ValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->SetValue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->SetStopped(); break;
        case 3: _t->SetCanSeek((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->Seek((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->ValueMaybeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->ToggleTimeDisplay(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TrackSlider::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TrackSlider::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TrackSlider,
      qt_meta_data_TrackSlider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TrackSlider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TrackSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TrackSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TrackSlider))
        return static_cast<void*>(const_cast< TrackSlider*>(this));
    return QWidget::qt_metacast(_clname);
}

int TrackSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void TrackSlider::ValueChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
