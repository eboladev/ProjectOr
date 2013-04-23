/****************************************************************************
** Meta object code from reading C++ file 'searchtermwidget.h'
**
** Created: Tue Apr 23 15:28:12 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "searchtermwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchtermwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_smart_playlists__SearchTermWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       1,   49, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      35,   34,   34,   34, 0x05,
      45,   34,   34,   34, 0x05,
      61,   34,   34,   34, 0x05,

 // slots: signature, parameters, type, tag, flags
      77,   71,   34,   34, 0x08,
      95,   71,   34,   34, 0x08,
     110,   34,   34,   34, 0x08,
     133,   34,   34,   34, 0x08,

 // properties: name, type, flags
     146,  140, 0x87095003,

       0        // eod
};

static const char qt_meta_stringdata_smart_playlists__SearchTermWidget[] = {
    "smart_playlists::SearchTermWidget\0\0"
    "Clicked()\0RemoveClicked()\0Changed()\0"
    "index\0FieldChanged(int)\0OpChanged(int)\0"
    "RelativeValueChanged()\0Grab()\0float\0"
    "overlay_opacity\0"
};

void smart_playlists::SearchTermWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SearchTermWidget *_t = static_cast<SearchTermWidget *>(_o);
        switch (_id) {
        case 0: _t->Clicked(); break;
        case 1: _t->RemoveClicked(); break;
        case 2: _t->Changed(); break;
        case 3: _t->FieldChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->OpChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->RelativeValueChanged(); break;
        case 6: _t->Grab(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData smart_playlists::SearchTermWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject smart_playlists::SearchTermWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_smart_playlists__SearchTermWidget,
      qt_meta_data_smart_playlists__SearchTermWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &smart_playlists::SearchTermWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *smart_playlists::SearchTermWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *smart_playlists::SearchTermWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_smart_playlists__SearchTermWidget))
        return static_cast<void*>(const_cast< SearchTermWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int smart_playlists::SearchTermWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = overlay_opacity(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: set_overlay_opacity(*reinterpret_cast< float*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void smart_playlists::SearchTermWidget::Clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void smart_playlists::SearchTermWidget::RemoveClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void smart_playlists::SearchTermWidget::Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
