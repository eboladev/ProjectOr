/****************************************************************************
** Meta object code from reading C++ file 'organisedialog.h'
**
** Created: Tue Apr 23 15:28:15 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "organisedialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'organisedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OrganiseDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      25,   15,   15,   15, 0x08,
      37,   33,   15,   15, 0x08,
      65,   56,   15,   15, 0x08,
      91,   15,   15,   15, 0x08,
     126,  108,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OrganiseDialog[] = {
    "OrganiseDialog\0\0accept()\0Reset()\0tag\0"
    "InsertTag(QString)\0filename\0"
    "LoadPreviewSongs(QString)\0UpdatePreviews()\0"
    "files_with_errors\0OrganiseFinished(QStringList)\0"
};

void OrganiseDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OrganiseDialog *_t = static_cast<OrganiseDialog *>(_o);
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->Reset(); break;
        case 2: _t->InsertTag((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->LoadPreviewSongs((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->UpdatePreviews(); break;
        case 5: _t->OrganiseFinished((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OrganiseDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OrganiseDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_OrganiseDialog,
      qt_meta_data_OrganiseDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OrganiseDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OrganiseDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OrganiseDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OrganiseDialog))
        return static_cast<void*>(const_cast< OrganiseDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int OrganiseDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
