/****************************************************************************
** Meta object code from reading C++ file 'globalshortcutssettingspage.h'
**
** Created: Tue Apr 23 15:28:15 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "globalshortcutssettingspage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'globalshortcutssettingspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GlobalShortcutsSettingsPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x08,
      59,   28,   28,   28, 0x08,
      73,   28,   28,   28, 0x08,
      90,   28,   28,   28, 0x08,
     106,   28,   28,   28, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GlobalShortcutsSettingsPage[] = {
    "GlobalShortcutsSettingsPage\0\0"
    "ItemClicked(QTreeWidgetItem*)\0"
    "NoneClicked()\0DefaultClicked()\0"
    "ChangeClicked()\0OpenGnomeKeybindingProperties()\0"
};

void GlobalShortcutsSettingsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GlobalShortcutsSettingsPage *_t = static_cast<GlobalShortcutsSettingsPage *>(_o);
        switch (_id) {
        case 0: _t->ItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->NoneClicked(); break;
        case 2: _t->DefaultClicked(); break;
        case 3: _t->ChangeClicked(); break;
        case 4: _t->OpenGnomeKeybindingProperties(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GlobalShortcutsSettingsPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GlobalShortcutsSettingsPage::staticMetaObject = {
    { &SettingsPage::staticMetaObject, qt_meta_stringdata_GlobalShortcutsSettingsPage,
      qt_meta_data_GlobalShortcutsSettingsPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GlobalShortcutsSettingsPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GlobalShortcutsSettingsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GlobalShortcutsSettingsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalShortcutsSettingsPage))
        return static_cast<void*>(const_cast< GlobalShortcutsSettingsPage*>(this));
    return SettingsPage::qt_metacast(_clname);
}

int GlobalShortcutsSettingsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
