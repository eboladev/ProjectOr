/****************************************************************************
** Meta object code from reading C++ file 'transcodedialog.h'
**
** Created: Tue Apr 23 15:28:13 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "transcodedialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transcodedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TranscodeDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      23,   16,   16,   16, 0x08,
      32,   16,   16,   16, 0x08,
      40,   16,   16,   16, 0x08,
      66,   49,   16,   16, 0x08,
     100,   92,   16,   16, 0x08,
     117,   16,   16,   16, 0x08,
     135,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TranscodeDialog[] = {
    "TranscodeDialog\0\0Add()\0Remove()\0Start()\0"
    "Cancel()\0filename,success\0"
    "JobComplete(QString,bool)\0message\0"
    "LogLine(QString)\0AllJobsComplete()\0"
    "Options()\0"
};

void TranscodeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TranscodeDialog *_t = static_cast<TranscodeDialog *>(_o);
        switch (_id) {
        case 0: _t->Add(); break;
        case 1: _t->Remove(); break;
        case 2: _t->Start(); break;
        case 3: _t->Cancel(); break;
        case 4: _t->JobComplete((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->LogLine((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->AllJobsComplete(); break;
        case 7: _t->Options(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TranscodeDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TranscodeDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TranscodeDialog,
      qt_meta_data_TranscodeDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TranscodeDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TranscodeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TranscodeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TranscodeDialog))
        return static_cast<void*>(const_cast< TranscodeDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int TranscodeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
