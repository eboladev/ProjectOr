/****************************************************************************
** Meta object code from reading C++ file 'collapsibleinfoheader.h'
**
** Created: Tue Apr 23 15:28:12 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "collapsibleinfoheader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'collapsibleinfoheader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CollapsibleInfoHeader[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,
      34,   22,   22,   22, 0x05,
      55,   46,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      77,   46,   22,   22, 0x0a,
     101,   95,   22,   22, 0x0a,
     124,  119,   22,   22, 0x0a,

 // properties: name, type, flags
     145,  139, 0x87095003,

       0        // eod
};

static const char qt_meta_stringdata_CollapsibleInfoHeader[] = {
    "CollapsibleInfoHeader\0\0Expanded()\0"
    "Collapsed()\0expanded\0ExpandedToggled(bool)\0"
    "SetExpanded(bool)\0title\0SetTitle(QString)\0"
    "icon\0SetIcon(QIcon)\0float\0opacity\0"
};

void CollapsibleInfoHeader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CollapsibleInfoHeader *_t = static_cast<CollapsibleInfoHeader *>(_o);
        switch (_id) {
        case 0: _t->Expanded(); break;
        case 1: _t->Collapsed(); break;
        case 2: _t->ExpandedToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->SetExpanded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->SetTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->SetIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CollapsibleInfoHeader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CollapsibleInfoHeader::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CollapsibleInfoHeader,
      qt_meta_data_CollapsibleInfoHeader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CollapsibleInfoHeader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CollapsibleInfoHeader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CollapsibleInfoHeader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CollapsibleInfoHeader))
        return static_cast<void*>(const_cast< CollapsibleInfoHeader*>(this));
    return QWidget::qt_metacast(_clname);
}

int CollapsibleInfoHeader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = opacity(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: set_opacity(*reinterpret_cast< float*>(_v)); break;
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
void CollapsibleInfoHeader::Expanded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CollapsibleInfoHeader::Collapsed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void CollapsibleInfoHeader::ExpandedToggled(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
