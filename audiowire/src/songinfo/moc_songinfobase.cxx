/****************************************************************************
** Meta object code from reading C++ file 'songinfobase.h'
**
** Created: Tue Apr 23 15:28:13 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "songinfobase.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'songinfobase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SongInfoBase[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      41,   35,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      74,   65,   13,   13, 0x0a,
      92,   13,   13,   13, 0x0a,
     107,   13,   13,   13, 0x0a,
     134,  124,   13,   13, 0x09,
     181,  175,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SongInfoBase[] = {
    "SongInfoBase\0\0ShowSettingsDialog()\0"
    "query\0DoGlobalSearch(QString)\0metadata\0"
    "SongChanged(Song)\0SongFinished()\0"
    "ReloadSettings()\0id,result\0"
    "ResultReady(int,SongInfoFetcher::Result)\0"
    "value\0SectionToggled(bool)\0"
};

void SongInfoBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SongInfoBase *_t = static_cast<SongInfoBase *>(_o);
        switch (_id) {
        case 0: _t->ShowSettingsDialog(); break;
        case 1: _t->DoGlobalSearch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->SongChanged((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 3: _t->SongFinished(); break;
        case 4: _t->ReloadSettings(); break;
        case 5: _t->ResultReady((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const SongInfoFetcher::Result(*)>(_a[2]))); break;
        case 6: _t->SectionToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SongInfoBase::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SongInfoBase::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SongInfoBase,
      qt_meta_data_SongInfoBase, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SongInfoBase::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SongInfoBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SongInfoBase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SongInfoBase))
        return static_cast<void*>(const_cast< SongInfoBase*>(this));
    return QWidget::qt_metacast(_clname);
}

int SongInfoBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void SongInfoBase::ShowSettingsDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SongInfoBase::DoGlobalSearch(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
