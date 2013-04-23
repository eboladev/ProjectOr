/****************************************************************************
** Meta object code from reading C++ file 'magnatunesettingspage.h'
**
** Created: Tue Apr 23 15:28:07 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "magnatunesettingspage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'magnatunesettingspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MagnatuneSettingsPage[] = {

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
      23,   22,   22,   22, 0x08,
      31,   22,   22,   22, 0x08,
      46,   40,   22,   22, 0x08,
      69,   22,   22,   22, 0x08,
      96,   85,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MagnatuneSettingsPage[] = {
    "MagnatuneSettingsPage\0\0Login()\0Logout()\0"
    "value\0MembershipChanged(int)\0"
    "LoginFinished()\0reply,auth\0"
    "AuthenticationRequired(QNetworkReply*,QAuthenticator*)\0"
};

void MagnatuneSettingsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MagnatuneSettingsPage *_t = static_cast<MagnatuneSettingsPage *>(_o);
        switch (_id) {
        case 0: _t->Login(); break;
        case 1: _t->Logout(); break;
        case 2: _t->MembershipChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->LoginFinished(); break;
        case 4: _t->AuthenticationRequired((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MagnatuneSettingsPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MagnatuneSettingsPage::staticMetaObject = {
    { &SettingsPage::staticMetaObject, qt_meta_stringdata_MagnatuneSettingsPage,
      qt_meta_data_MagnatuneSettingsPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MagnatuneSettingsPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MagnatuneSettingsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MagnatuneSettingsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MagnatuneSettingsPage))
        return static_cast<void*>(const_cast< MagnatuneSettingsPage*>(this));
    return SettingsPage::qt_metacast(_clname);
}

int MagnatuneSettingsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
