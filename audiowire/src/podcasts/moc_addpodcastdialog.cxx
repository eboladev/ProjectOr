/****************************************************************************
** Meta object code from reading C++ file 'addpodcastdialog.h'
**
** Created: Tue Apr 23 15:28:10 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "addpodcastdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addpodcastdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddPodcastDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,
      37,   17,   17,   17, 0x08,
      56,   50,   17,   17, 0x08,
      90,   17,   17,   17, 0x08,
     106,   50,   17,   17, 0x08,
     130,  122,   17,   17, 0x08,
     162,  157,   17,   17, 0x08,
     184,  157,   17,   17, 0x08,
     213,   17,   17,   17, 0x08,
     234,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AddPodcastDialog[] = {
    "AddPodcastDialog\0\0OpenSettingsPage()\0"
    "AddPodcast()\0index\0PodcastDoubleClicked(QModelIndex)\0"
    "RemovePodcast()\0ChangePage(int)\0current\0"
    "ChangePodcast(QModelIndex)\0busy\0"
    "PageBusyChanged(bool)\0"
    "CurrentPageBusyChanged(bool)\0"
    "SelectFirstPodcast()\0OpenOPMLFile()\0"
};

void AddPodcastDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddPodcastDialog *_t = static_cast<AddPodcastDialog *>(_o);
        switch (_id) {
        case 0: _t->OpenSettingsPage(); break;
        case 1: _t->AddPodcast(); break;
        case 2: _t->PodcastDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->RemovePodcast(); break;
        case 4: _t->ChangePage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->ChangePodcast((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->PageBusyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->CurrentPageBusyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->SelectFirstPodcast(); break;
        case 9: _t->OpenOPMLFile(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AddPodcastDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AddPodcastDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddPodcastDialog,
      qt_meta_data_AddPodcastDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddPodcastDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddPodcastDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddPodcastDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddPodcastDialog))
        return static_cast<void*>(const_cast< AddPodcastDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddPodcastDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
