/****************************************************************************
** Meta object code from reading C++ file 'icecastfilterwidget.h'
**
** Created: Tue Apr 23 15:28:06 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "icecastfilterwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'icecastfilterwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IcecastFilterWidget[] = {

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
      23,   21,   20,   20, 0x0a,
      54,   49,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_IcecastFilterWidget[] = {
    "IcecastFilterWidget\0\0e\0FocusOnFilter(QKeyEvent*)\0"
    "mode\0SortModeChanged(int)\0"
};

void IcecastFilterWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IcecastFilterWidget *_t = static_cast<IcecastFilterWidget *>(_o);
        switch (_id) {
        case 0: _t->FocusOnFilter((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 1: _t->SortModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData IcecastFilterWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IcecastFilterWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_IcecastFilterWidget,
      qt_meta_data_IcecastFilterWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IcecastFilterWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IcecastFilterWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IcecastFilterWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IcecastFilterWidget))
        return static_cast<void*>(const_cast< IcecastFilterWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int IcecastFilterWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
