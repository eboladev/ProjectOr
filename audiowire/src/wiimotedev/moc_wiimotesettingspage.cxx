/****************************************************************************
** Meta object code from reading C++ file 'wiimotesettingspage.h'
**
** Created: Tue Apr 23 15:28:20 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "wiimotesettingspage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wiimotesettingspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WiimoteSettingsPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      57,   20,   20,   20, 0x08,
      83,   69,   20,   20, 0x08,
     112,   20,   20,   20, 0x08,
     130,   20,   20,   20, 0x08,
     145,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WiimoteSettingsPage[] = {
    "WiimoteSettingsPage\0\0"
    "SetWiimotedevInterfaceActived(bool)\0"
    "AddAction()\0button,action\0"
    "AddShortcut(quint64,quint32)\0"
    "DefaultSettings()\0DeleteAction()\0"
    "ItemClicked(QTreeWidgetItem*)\0"
};

void WiimoteSettingsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WiimoteSettingsPage *_t = static_cast<WiimoteSettingsPage *>(_o);
        switch (_id) {
        case 0: _t->SetWiimotedevInterfaceActived((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->AddAction(); break;
        case 2: _t->AddShortcut((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 3: _t->DefaultSettings(); break;
        case 4: _t->DeleteAction(); break;
        case 5: _t->ItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WiimoteSettingsPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WiimoteSettingsPage::staticMetaObject = {
    { &SettingsPage::staticMetaObject, qt_meta_stringdata_WiimoteSettingsPage,
      qt_meta_data_WiimoteSettingsPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WiimoteSettingsPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WiimoteSettingsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WiimoteSettingsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WiimoteSettingsPage))
        return static_cast<void*>(const_cast< WiimoteSettingsPage*>(this));
    return SettingsPage::qt_metacast(_clname);
}

int WiimoteSettingsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void WiimoteSettingsPage::SetWiimotedevInterfaceActived(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
