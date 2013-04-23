/****************************************************************************
** Meta object code from reading C++ file 'lastfmsettingspage.h'
**
** Created: Tue Apr 23 15:28:19 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "lastfmsettingspage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lastfmsettingspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LastFMSettingsPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x08,
      36,   28,   19,   19, 0x08,
      65,   19,   19,   19, 0x08,
      88,   74,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LastFMSettingsPage[] = {
    "LastFMSettingsPage\0\0Login()\0success\0"
    "AuthenticationComplete(bool)\0Logout()\0"
    "is_subscriber\0UpdatedSubscriberStatus(bool)\0"
};

void LastFMSettingsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LastFMSettingsPage *_t = static_cast<LastFMSettingsPage *>(_o);
        switch (_id) {
        case 0: _t->Login(); break;
        case 1: _t->AuthenticationComplete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->Logout(); break;
        case 3: _t->UpdatedSubscriberStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LastFMSettingsPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LastFMSettingsPage::staticMetaObject = {
    { &SettingsPage::staticMetaObject, qt_meta_stringdata_LastFMSettingsPage,
      qt_meta_data_LastFMSettingsPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LastFMSettingsPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LastFMSettingsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LastFMSettingsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LastFMSettingsPage))
        return static_cast<void*>(const_cast< LastFMSettingsPage*>(this));
    return SettingsPage::qt_metacast(_clname);
}

int LastFMSettingsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
