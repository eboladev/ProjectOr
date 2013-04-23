/****************************************************************************
** Meta object code from reading C++ file 'librarysettingspage.h'
**
** Created: Tue Apr 23 15:28:08 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "librarysettingspage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'librarysettingspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LibrarySettingsPage[] = {

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
      21,   20,   20,   20, 0x08,
      27,   20,   20,   20, 0x08,
      42,   36,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LibrarySettingsPage[] = {
    "LibrarySettingsPage\0\0Add()\0Remove()\0"
    "index\0CurrentRowChanged(QModelIndex)\0"
};

void LibrarySettingsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LibrarySettingsPage *_t = static_cast<LibrarySettingsPage *>(_o);
        switch (_id) {
        case 0: _t->Add(); break;
        case 1: _t->Remove(); break;
        case 2: _t->CurrentRowChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LibrarySettingsPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LibrarySettingsPage::staticMetaObject = {
    { &SettingsPage::staticMetaObject, qt_meta_stringdata_LibrarySettingsPage,
      qt_meta_data_LibrarySettingsPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LibrarySettingsPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LibrarySettingsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LibrarySettingsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LibrarySettingsPage))
        return static_cast<void*>(const_cast< LibrarySettingsPage*>(this));
    return SettingsPage::qt_metacast(_clname);
}

int LibrarySettingsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsPage::qt_metacall(_c, _id, _a);
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
