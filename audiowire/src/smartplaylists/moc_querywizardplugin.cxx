/****************************************************************************
** Meta object code from reading C++ file 'querywizardplugin.h'
**
** Created: Tue Apr 23 15:28:12 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "querywizardplugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'querywizardplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_smart_playlists__QueryWizardPlugin[] = {

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
      36,   35,   35,   35, 0x08,
      52,   35,   35,   35, 0x08,
      71,   35,   35,   35, 0x08,
      91,   35,   35,   35, 0x08,
     111,   35,   35,   35, 0x08,
     131,   35,   35,   35, 0x08,
     157,  149,   35,   35, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_smart_playlists__QueryWizardPlugin[] = {
    "smart_playlists::QueryWizardPlugin\0\0"
    "AddSearchTerm()\0RemoveSearchTerm()\0"
    "SearchTypeChanged()\0UpdateTermPreview()\0"
    "UpdateSortPreview()\0UpdateSortOrder()\0"
    "min,max\0MoveTermListToBottom(int,int)\0"
};

void smart_playlists::QueryWizardPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QueryWizardPlugin *_t = static_cast<QueryWizardPlugin *>(_o);
        switch (_id) {
        case 0: _t->AddSearchTerm(); break;
        case 1: _t->RemoveSearchTerm(); break;
        case 2: _t->SearchTypeChanged(); break;
        case 3: _t->UpdateTermPreview(); break;
        case 4: _t->UpdateSortPreview(); break;
        case 5: _t->UpdateSortOrder(); break;
        case 6: _t->MoveTermListToBottom((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData smart_playlists::QueryWizardPlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject smart_playlists::QueryWizardPlugin::staticMetaObject = {
    { &WizardPlugin::staticMetaObject, qt_meta_stringdata_smart_playlists__QueryWizardPlugin,
      qt_meta_data_smart_playlists__QueryWizardPlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &smart_playlists::QueryWizardPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *smart_playlists::QueryWizardPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *smart_playlists::QueryWizardPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_smart_playlists__QueryWizardPlugin))
        return static_cast<void*>(const_cast< QueryWizardPlugin*>(this));
    return WizardPlugin::qt_metacast(_clname);
}

int smart_playlists::QueryWizardPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WizardPlugin::qt_metacall(_c, _id, _a);
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
