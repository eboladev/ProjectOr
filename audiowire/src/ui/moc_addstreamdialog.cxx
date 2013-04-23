/****************************************************************************
** Meta object code from reading C++ file 'addstreamdialog.h'
**
** Created: Tue Apr 23 15:28:14 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "addstreamdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addstreamdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddStreamDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   17,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AddStreamDialog[] = {
    "AddStreamDialog\0\0text\0TextChanged(QString)\0"
};

void AddStreamDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddStreamDialog *_t = static_cast<AddStreamDialog *>(_o);
        switch (_id) {
        case 0: _t->TextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AddStreamDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AddStreamDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddStreamDialog,
      qt_meta_data_AddStreamDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddStreamDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddStreamDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddStreamDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddStreamDialog))
        return static_cast<void*>(const_cast< AddStreamDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddStreamDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
