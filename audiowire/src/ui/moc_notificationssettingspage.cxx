/****************************************************************************
** Meta object code from reading C++ file 'notificationssettingspage.h'
**
** Created: Tue Apr 23 15:28:15 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "notificationssettingspage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notificationssettingspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NotificationsSettingsPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x08,
      61,   53,   26,   26, 0x08,
      97,   26,   26,   26, 0x08,
     133,  126,   26,   26, 0x08,
     167,  126,   26,   26, 0x08,
     202,  126,   26,   26, 0x08,
     234,  228,   26,   26, 0x08,
     266,  260,   26,   26, 0x08,
     296,   26,   26,   26, 0x08,
     312,   26,   26,   26, 0x08,
     328,   26,   26,   26, 0x08,
     341,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_NotificationsSettingsPage[] = {
    "NotificationsSettingsPage\0\0"
    "NotificationTypeChanged()\0enabled\0"
    "NotificationCustomTextChanged(bool)\0"
    "PrepareNotificationPreview()\0action\0"
    "InsertVariableFirstLine(QAction*)\0"
    "InsertVariableSecondLine(QAction*)\0"
    "ShowMenuTooltip(QAction*)\0value\0"
    "PrettyOpacityChanged(int)\0index\0"
    "PrettyColorPresetChanged(int)\0"
    "ChooseBgColor()\0ChooseFgColor()\0"
    "ChooseFont()\0UpdatePopupVisible()\0"
};

void NotificationsSettingsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NotificationsSettingsPage *_t = static_cast<NotificationsSettingsPage *>(_o);
        switch (_id) {
        case 0: _t->NotificationTypeChanged(); break;
        case 1: _t->NotificationCustomTextChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->PrepareNotificationPreview(); break;
        case 3: _t->InsertVariableFirstLine((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 4: _t->InsertVariableSecondLine((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 5: _t->ShowMenuTooltip((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 6: _t->PrettyOpacityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->PrettyColorPresetChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->ChooseBgColor(); break;
        case 9: _t->ChooseFgColor(); break;
        case 10: _t->ChooseFont(); break;
        case 11: _t->UpdatePopupVisible(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData NotificationsSettingsPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NotificationsSettingsPage::staticMetaObject = {
    { &SettingsPage::staticMetaObject, qt_meta_stringdata_NotificationsSettingsPage,
      qt_meta_data_NotificationsSettingsPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NotificationsSettingsPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NotificationsSettingsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NotificationsSettingsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NotificationsSettingsPage))
        return static_cast<void*>(const_cast< NotificationsSettingsPage*>(this));
    return SettingsPage::qt_metacast(_clname);
}

int NotificationsSettingsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
