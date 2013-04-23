/****************************************************************************
** Meta object code from reading C++ file 'loginstatewidget.h'
**
** Created: Tue Apr 23 15:28:17 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "loginstatewidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loginstatewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LoginStateWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      34,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      68,   49,   17,   17, 0x0a,
     101,   95,   17,   17, 0x2a,
     120,   17,   17,   17, 0x0a,
     145,  140,   17,   17, 0x0a,
     181,  173,   17,   17, 0x0a,
     217,  209,   17,   17, 0x0a,
     235,   17,   17,   17, 0x08,
     244,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LoginStateWidget[] = {
    "LoginStateWidget\0\0LogoutClicked()\0"
    "LoginClicked()\0state,account_name\0"
    "SetLoggedIn(State,QString)\0state\0"
    "SetLoggedIn(State)\0HideLoggedInState()\0"
    "text\0SetAccountTypeText(QString)\0"
    "visible\0SetAccountTypeVisible(bool)\0"
    "expires\0SetExpires(QDate)\0Logout()\0"
    "FocusLastCredentialField()\0"
};

void LoginStateWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LoginStateWidget *_t = static_cast<LoginStateWidget *>(_o);
        switch (_id) {
        case 0: _t->LogoutClicked(); break;
        case 1: _t->LoginClicked(); break;
        case 2: _t->SetLoggedIn((*reinterpret_cast< State(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->SetLoggedIn((*reinterpret_cast< State(*)>(_a[1]))); break;
        case 4: _t->HideLoggedInState(); break;
        case 5: _t->SetAccountTypeText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->SetAccountTypeVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->SetExpires((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 8: _t->Logout(); break;
        case 9: _t->FocusLastCredentialField(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LoginStateWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LoginStateWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LoginStateWidget,
      qt_meta_data_LoginStateWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LoginStateWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LoginStateWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LoginStateWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LoginStateWidget))
        return static_cast<void*>(const_cast< LoginStateWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int LoginStateWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void LoginStateWidget::LogoutClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void LoginStateWidget::LoginClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
