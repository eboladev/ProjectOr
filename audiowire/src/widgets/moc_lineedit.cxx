/****************************************************************************
** Meta object code from reading C++ file 'lineedit.h'
**
** Created: Tue Apr 23 15:28:17 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "lineedit.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lineedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LineEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       4,   19, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,

 // properties: name, type, flags
      26,   18, 0x0a095003,
      37,   31, ((uint)QMetaType::QReal << 24) | 0x00095003,
      58,   53, 0x01095003,
      75,   53, 0x01095003,

       0        // eod
};

static const char qt_meta_stringdata_LineEdit[] = {
    "LineEdit\0\0Reset()\0QString\0hint\0qreal\0"
    "font_point_size\0bool\0has_clear_button\0"
    "has_reset_button\0"
};

void LineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LineEdit *_t = static_cast<LineEdit *>(_o);
        switch (_id) {
        case 0: _t->Reset(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData LineEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LineEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_LineEdit,
      qt_meta_data_LineEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LineEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LineEdit))
        return static_cast<void*>(const_cast< LineEdit*>(this));
    if (!strcmp(_clname, "ExtendedEditor"))
        return static_cast< ExtendedEditor*>(const_cast< LineEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int LineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = hint(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = font_point_size(); break;
        case 2: *reinterpret_cast< bool*>(_v) = has_clear_button(); break;
        case 3: *reinterpret_cast< bool*>(_v) = has_reset_button(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: set_hint(*reinterpret_cast< QString*>(_v)); break;
        case 1: set_font_point_size(*reinterpret_cast< qreal*>(_v)); break;
        case 2: set_clear_button(*reinterpret_cast< bool*>(_v)); break;
        case 3: set_reset_button(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void LineEdit::Reset()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_TextEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       3,   19, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,

 // properties: name, type, flags
      26,   18, 0x0a095003,
      36,   31, 0x01095003,
      53,   31, 0x01095003,

       0        // eod
};

static const char qt_meta_stringdata_TextEdit[] = {
    "TextEdit\0\0Reset()\0QString\0hint\0bool\0"
    "has_clear_button\0has_reset_button\0"
};

void TextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TextEdit *_t = static_cast<TextEdit *>(_o);
        switch (_id) {
        case 0: _t->Reset(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TextEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TextEdit::staticMetaObject = {
    { &QPlainTextEdit::staticMetaObject, qt_meta_stringdata_TextEdit,
      qt_meta_data_TextEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TextEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TextEdit))
        return static_cast<void*>(const_cast< TextEdit*>(this));
    if (!strcmp(_clname, "ExtendedEditor"))
        return static_cast< ExtendedEditor*>(const_cast< TextEdit*>(this));
    return QPlainTextEdit::qt_metacast(_clname);
}

int TextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = hint(); break;
        case 1: *reinterpret_cast< bool*>(_v) = has_clear_button(); break;
        case 2: *reinterpret_cast< bool*>(_v) = has_reset_button(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: set_hint(*reinterpret_cast< QString*>(_v)); break;
        case 1: set_clear_button(*reinterpret_cast< bool*>(_v)); break;
        case 2: set_reset_button(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TextEdit::Reset()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_SpinBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       3,   19, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,

 // properties: name, type, flags
      25,   17, 0x0a095003,
      35,   30, 0x01095003,
      52,   30, 0x01095003,

       0        // eod
};

static const char qt_meta_stringdata_SpinBox[] = {
    "SpinBox\0\0Reset()\0QString\0hint\0bool\0"
    "has_clear_button\0has_reset_button\0"
};

void SpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SpinBox *_t = static_cast<SpinBox *>(_o);
        switch (_id) {
        case 0: _t->Reset(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SpinBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SpinBox::staticMetaObject = {
    { &QSpinBox::staticMetaObject, qt_meta_stringdata_SpinBox,
      qt_meta_data_SpinBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SpinBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SpinBox))
        return static_cast<void*>(const_cast< SpinBox*>(this));
    if (!strcmp(_clname, "ExtendedEditor"))
        return static_cast< ExtendedEditor*>(const_cast< SpinBox*>(this));
    return QSpinBox::qt_metacast(_clname);
}

int SpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = hint(); break;
        case 1: *reinterpret_cast< bool*>(_v) = has_clear_button(); break;
        case 2: *reinterpret_cast< bool*>(_v) = has_reset_button(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: set_hint(*reinterpret_cast< QString*>(_v)); break;
        case 1: set_clear_button(*reinterpret_cast< bool*>(_v)); break;
        case 2: set_reset_button(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SpinBox::Reset()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
