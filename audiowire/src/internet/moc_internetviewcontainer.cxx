/****************************************************************************
** Meta object code from reading C++ file 'internetviewcontainer.h'
**
** Created: Tue Apr 23 15:28:06 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "internetviewcontainer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'internetviewcontainer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InternetViewContainer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   23,   22,   22, 0x0a,
      56,   23,   22,   22, 0x08,
      79,   23,   22,   22, 0x08,
     101,   23,   22,   22, 0x08,
     141,  134,   22,   22, 0x08,
     168,  162,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_InternetViewContainer[] = {
    "InternetViewContainer\0\0index\0"
    "ScrollToIndex(QModelIndex)\0"
    "Collapsed(QModelIndex)\0Expanded(QModelIndex)\0"
    "CurrentIndexChanged(QModelIndex)\0"
    "height\0SetHeaderHeight(int)\0event\0"
    "FocusOnFilter(QKeyEvent*)\0"
};

void InternetViewContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        InternetViewContainer *_t = static_cast<InternetViewContainer *>(_o);
        switch (_id) {
        case 0: _t->ScrollToIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->Collapsed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->Expanded((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->CurrentIndexChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->SetHeaderHeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->FocusOnFilter((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData InternetViewContainer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject InternetViewContainer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_InternetViewContainer,
      qt_meta_data_InternetViewContainer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InternetViewContainer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InternetViewContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InternetViewContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InternetViewContainer))
        return static_cast<void*>(const_cast< InternetViewContainer*>(this));
    return QWidget::qt_metacast(_clname);
}

int InternetViewContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
