/****************************************************************************
** Meta object code from reading C++ file 'visualisationoverlay.h'
**
** Created: Tue Apr 23 15:28:18 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "visualisationoverlay.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'visualisationoverlay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VisualisationOverlay[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   22,   21,   21, 0x05,
      54,   50,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      84,   76,   21,   21, 0x0a,
     101,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VisualisationOverlay[] = {
    "VisualisationOverlay\0\0value\0"
    "OpacityChanged(qreal)\0pos\0"
    "ShowPopupMenu(QPoint)\0visible\0"
    "SetVisible(bool)\0ShowSettingsMenu()\0"
};

void VisualisationOverlay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VisualisationOverlay *_t = static_cast<VisualisationOverlay *>(_o);
        switch (_id) {
        case 0: _t->OpacityChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->ShowPopupMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->SetVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->ShowSettingsMenu(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VisualisationOverlay::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VisualisationOverlay::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VisualisationOverlay,
      qt_meta_data_VisualisationOverlay, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VisualisationOverlay::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VisualisationOverlay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VisualisationOverlay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VisualisationOverlay))
        return static_cast<void*>(const_cast< VisualisationOverlay*>(this));
    return QWidget::qt_metacast(_clname);
}

int VisualisationOverlay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void VisualisationOverlay::OpacityChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VisualisationOverlay::ShowPopupMenu(const QPoint & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
