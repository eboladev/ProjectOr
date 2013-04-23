/****************************************************************************
** Meta object code from reading C++ file 'nowplayingwidget.h'
**
** Created: Tue Apr 23 15:28:17 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "nowplayingwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nowplayingwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NowPlayingWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   18,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      56,   17,   17,   17, 0x0a,
      76,   66,   17,   17, 0x0a,
      94,   90,   17,   17, 0x0a,
     119,  114,   17,   17, 0x08,
     132,   18,   17,   17, 0x08,
     176,  157,   17,   17, 0x08,
     221,  212,   17,   17, 0x08,
     258,  250,   17,   17, 0x08,
     282,  275,   17,   17, 0x08,
     303,  297,   17,   17, 0x08,
     328,   17,   17,   17, 0x08,
     348,   17,   17,   17, 0x08,
     366,   17,   17,   17, 0x08,
     385,   17,   17,   17, 0x08,
     402,   17,   17,   17, 0x08,
     415,   17,   17,   17, 0x08,
     427,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_NowPlayingWidget[] = {
    "NowPlayingWidget\0\0above\0"
    "ShowAboveStatusBarChanged(bool)\0"
    "Stopped()\0hypnotoad\0AllHail(bool)\0aww\0"
    "EnableKittens(bool)\0mode\0SetMode(int)\0"
    "ShowAboveStatusBar(bool)\0metadata,uri,image\0"
    "AlbumArtLoaded(Song,QString,QImage)\0"
    "id,image\0KittenLoaded(quint64,QImage)\0"
    "visible\0SetVisible(bool)\0height\0"
    "SetHeight(int)\0value\0FadePreviousTrack(qreal)\0"
    "LoadCoverFromFile()\0SaveCoverToFile()\0"
    "LoadCoverFromURL()\0SearchForCover()\0"
    "UnsetCover()\0ShowCover()\0Bask()\0"
};

void NowPlayingWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NowPlayingWidget *_t = static_cast<NowPlayingWidget *>(_o);
        switch (_id) {
        case 0: _t->ShowAboveStatusBarChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->Stopped(); break;
        case 2: _t->AllHail((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->EnableKittens((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->SetMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->ShowAboveStatusBar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->AlbumArtLoaded((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QImage(*)>(_a[3]))); break;
        case 7: _t->KittenLoaded((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 8: _t->SetVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->SetHeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->FadePreviousTrack((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 11: _t->LoadCoverFromFile(); break;
        case 12: _t->SaveCoverToFile(); break;
        case 13: _t->LoadCoverFromURL(); break;
        case 14: _t->SearchForCover(); break;
        case 15: _t->UnsetCover(); break;
        case 16: _t->ShowCover(); break;
        case 17: _t->Bask(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData NowPlayingWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NowPlayingWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NowPlayingWidget,
      qt_meta_data_NowPlayingWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NowPlayingWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NowPlayingWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NowPlayingWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NowPlayingWidget))
        return static_cast<void*>(const_cast< NowPlayingWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int NowPlayingWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void NowPlayingWidget::ShowAboveStatusBarChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
