/****************************************************************************
** Meta object code from reading C++ file 'projectmvisualisation.h'
**
** Created: Tue Apr 23 15:28:18 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "projectmvisualisation.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'projectmvisualisation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ProjectMVisualisation[] = {

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
      28,   23,   22,   22, 0x0a,
      56,   48,   22,   22, 0x0a,
      88,   73,   22,   22, 0x0a,
     118,   22,   22,   22, 0x0a,
     139,  134,   22,   22, 0x0a,
     172,  167,   22,   22, 0x0a,
     191,  186,   22,   22, 0x0a,
     207,  202,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ProjectMVisualisation[] = {
    "ProjectMVisualisation\0\0size\0"
    "SetTextureSize(int)\0seconds\0"
    "SetDuration(int)\0paths,selected\0"
    "SetSelected(QStringList,bool)\0"
    "ClearSelected()\0path\0SetImmediatePreset(QString)\0"
    "mode\0SetMode(Mode)\0lock\0Lock(bool)\0"
    "rect\0SceneRectChanged(QRectF)\0"
};

void ProjectMVisualisation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ProjectMVisualisation *_t = static_cast<ProjectMVisualisation *>(_o);
        switch (_id) {
        case 0: _t->SetTextureSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->SetDuration((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->SetSelected((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->ClearSelected(); break;
        case 4: _t->SetImmediatePreset((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->SetMode((*reinterpret_cast< Mode(*)>(_a[1]))); break;
        case 6: _t->Lock((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->SceneRectChanged((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ProjectMVisualisation::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ProjectMVisualisation::staticMetaObject = {
    { &QGraphicsScene::staticMetaObject, qt_meta_stringdata_ProjectMVisualisation,
      qt_meta_data_ProjectMVisualisation, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ProjectMVisualisation::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ProjectMVisualisation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ProjectMVisualisation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ProjectMVisualisation))
        return static_cast<void*>(const_cast< ProjectMVisualisation*>(this));
    if (!strcmp(_clname, "BufferConsumer"))
        return static_cast< BufferConsumer*>(const_cast< ProjectMVisualisation*>(this));
    return QGraphicsScene::qt_metacast(_clname);
}

int ProjectMVisualisation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
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
