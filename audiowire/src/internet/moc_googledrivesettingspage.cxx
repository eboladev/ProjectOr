/****************************************************************************
** Meta object code from reading C++ file 'googledrivesettingspage.h'
**
** Created: Tue Apr 23 15:28:22 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "googledrivesettingspage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'googledrivesettingspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GoogleDriveSettingsPage[] = {

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
      25,   24,   24,   24, 0x08,
      40,   24,   24,   24, 0x08,
      56,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GoogleDriveSettingsPage[] = {
    "GoogleDriveSettingsPage\0\0LoginClicked()\0"
    "LogoutClicked()\0Connected()\0"
};

void GoogleDriveSettingsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GoogleDriveSettingsPage *_t = static_cast<GoogleDriveSettingsPage *>(_o);
        switch (_id) {
        case 0: _t->LoginClicked(); break;
        case 1: _t->LogoutClicked(); break;
        case 2: _t->Connected(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData GoogleDriveSettingsPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GoogleDriveSettingsPage::staticMetaObject = {
    { &SettingsPage::staticMetaObject, qt_meta_stringdata_GoogleDriveSettingsPage,
      qt_meta_data_GoogleDriveSettingsPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GoogleDriveSettingsPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GoogleDriveSettingsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GoogleDriveSettingsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GoogleDriveSettingsPage))
        return static_cast<void*>(const_cast< GoogleDriveSettingsPage*>(this));
    return SettingsPage::qt_metacast(_clname);
}

int GoogleDriveSettingsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
