/****************************************************************************
** Meta object code from reading C++ file 'queuemanager.h'
**
** Created: Tue Apr 23 15:28:09 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "queuemanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'queuemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QueueManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   14,   13,   13, 0x08,
      57,   13,   13,   13, 0x08,
      77,   13,   13,   13, 0x08,
      97,   13,   13,   13, 0x08,
     106,   13,   13,   13, 0x08,
     117,   13,   13,   13, 0x08,
     126,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QueueManager[] = {
    "QueueManager\0\0playlist\0"
    "CurrentPlaylistChanged(Playlist*)\0"
    "PlaylistDestroyed()\0UpdateButtonState()\0"
    "MoveUp()\0MoveDown()\0Remove()\0Clear()\0"
};

void QueueManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QueueManager *_t = static_cast<QueueManager *>(_o);
        switch (_id) {
        case 0: _t->CurrentPlaylistChanged((*reinterpret_cast< Playlist*(*)>(_a[1]))); break;
        case 1: _t->PlaylistDestroyed(); break;
        case 2: _t->UpdateButtonState(); break;
        case 3: _t->MoveUp(); break;
        case 4: _t->MoveDown(); break;
        case 5: _t->Remove(); break;
        case 6: _t->Clear(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QueueManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QueueManager::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QueueManager,
      qt_meta_data_QueueManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QueueManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QueueManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QueueManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QueueManager))
        return static_cast<void*>(const_cast< QueueManager*>(this));
    return QDialog::qt_metacast(_clname);
}

int QueueManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
