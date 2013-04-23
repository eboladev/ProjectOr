/****************************************************************************
** Meta object code from reading C++ file 'libraryview.h'
**
** Created: Tue Apr 23 15:28:08 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "libraryview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'libraryview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LibraryItemDelegate[] = {

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
      50,   26,   21,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_LibraryItemDelegate[] = {
    "LibraryItemDelegate\0\0bool\0"
    "event,view,option,index\0"
    "helpEvent(QHelpEvent*,QAbstractItemView*,QStyleOptionViewItem,QModelIn"
    "dex)\0"
};

void LibraryItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LibraryItemDelegate *_t = static_cast<LibraryItemDelegate *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->helpEvent((*reinterpret_cast< QHelpEvent*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemView*(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionViewItem(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LibraryItemDelegate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LibraryItemDelegate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_LibraryItemDelegate,
      qt_meta_data_LibraryItemDelegate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LibraryItemDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LibraryItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LibraryItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LibraryItemDelegate))
        return static_cast<void*>(const_cast< LibraryItemDelegate*>(this));
    return QStyledItemDelegate::qt_metacast(_clname);
}

int LibraryItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_LibraryView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      38,   32,   12,   12, 0x0a,
      65,   12,   12,   12, 0x0a,
      82,   12,   12,   12, 0x0a,
     104,   12,   12,   12, 0x0a,
     116,   12,   12,   12, 0x0a,
     131,   12,   12,   12, 0x08,
     138,   12,   12,   12, 0x08,
     154,   12,   12,   12, 0x08,
     177,   12,   12,   12, 0x08,
     197,   12,   12,   12, 0x08,
     208,   12,   12,   12, 0x08,
     223,   12,   12,   12, 0x08,
     232,   12,   12,   12, 0x08,
     245,   12,   12,   12, 0x08,
     261,   12,   12,   12, 0x08,
     277,   12,   12,   12, 0x08,
     295,   12,   12,   12, 0x08,
     314,   12,   12,   12, 0x08,
     334,   12,   12,   12, 0x08,
     356,   12,   12,   12, 0x08,
     383,   12,   12,   12, 0x08,
     429,  411,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LibraryView[] = {
    "LibraryView\0\0ShowConfigDialog()\0count\0"
    "TotalSongCountUpdated(int)\0ReloadSettings()\0"
    "FilterReturnPressed()\0SaveFocus()\0"
    "RestoreFocus()\0Load()\0AddToPlaylist()\0"
    "AddToPlaylistEnqueue()\0OpenInNewPlaylist()\0"
    "Organise()\0CopyToDevice()\0Delete()\0"
    "EditTracks()\0ShowInBrowser()\0"
    "ShowInVarious()\0NoShowInVarious()\0"
    "NewSmartPlaylist()\0EditSmartPlaylist()\0"
    "DeleteSmartPlaylist()\0NewSmartPlaylistFinished()\0"
    "EditSmartPlaylistFinished()\0"
    "songs_with_errors\0DeleteFinished(SongList)\0"
};

void LibraryView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LibraryView *_t = static_cast<LibraryView *>(_o);
        switch (_id) {
        case 0: _t->ShowConfigDialog(); break;
        case 1: _t->TotalSongCountUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->ReloadSettings(); break;
        case 3: _t->FilterReturnPressed(); break;
        case 4: _t->SaveFocus(); break;
        case 5: _t->RestoreFocus(); break;
        case 6: _t->Load(); break;
        case 7: _t->AddToPlaylist(); break;
        case 8: _t->AddToPlaylistEnqueue(); break;
        case 9: _t->OpenInNewPlaylist(); break;
        case 10: _t->Organise(); break;
        case 11: _t->CopyToDevice(); break;
        case 12: _t->Delete(); break;
        case 13: _t->EditTracks(); break;
        case 14: _t->ShowInBrowser(); break;
        case 15: _t->ShowInVarious(); break;
        case 16: _t->NoShowInVarious(); break;
        case 17: _t->NewSmartPlaylist(); break;
        case 18: _t->EditSmartPlaylist(); break;
        case 19: _t->DeleteSmartPlaylist(); break;
        case 20: _t->NewSmartPlaylistFinished(); break;
        case 21: _t->EditSmartPlaylistFinished(); break;
        case 22: _t->DeleteFinished((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LibraryView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LibraryView::staticMetaObject = {
    { &AutoExpandingTreeView::staticMetaObject, qt_meta_stringdata_LibraryView,
      qt_meta_data_LibraryView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LibraryView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LibraryView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LibraryView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LibraryView))
        return static_cast<void*>(const_cast< LibraryView*>(this));
    return AutoExpandingTreeView::qt_metacast(_clname);
}

int LibraryView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AutoExpandingTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void LibraryView::ShowConfigDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
