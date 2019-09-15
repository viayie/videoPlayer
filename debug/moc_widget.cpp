/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[22];
    char stringdata0[347];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 19), // "on_btn_play_clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 31), // "on_horizontalSlider_sliderMoved"
QT_MOC_LITERAL(4, 60, 8), // "position"
QT_MOC_LITERAL(5, 69, 19), // "on_btn_open_clicked"
QT_MOC_LITERAL(6, 89, 25), // "on_filelist_doubleClicked"
QT_MOC_LITERAL(7, 115, 11), // "QModelIndex"
QT_MOC_LITERAL(8, 127, 5), // "index"
QT_MOC_LITERAL(9, 133, 19), // "on_btn_last_clicked"
QT_MOC_LITERAL(10, 153, 19), // "on_btn_next_clicked"
QT_MOC_LITERAL(11, 173, 21), // "on_btn_volume_clicked"
QT_MOC_LITERAL(12, 195, 17), // "mediaStateChanged"
QT_MOC_LITERAL(13, 213, 19), // "QMediaPlayer::State"
QT_MOC_LITERAL(14, 233, 5), // "state"
QT_MOC_LITERAL(15, 239, 15), // "positionChanged"
QT_MOC_LITERAL(16, 255, 11), // "setPosition"
QT_MOC_LITERAL(17, 267, 15), // "durationChanged"
QT_MOC_LITERAL(18, 283, 8), // "duration"
QT_MOC_LITERAL(19, 292, 9), // "handleERR"
QT_MOC_LITERAL(20, 302, 21), // "slider_volume_changed"
QT_MOC_LITERAL(21, 324, 22) // "set_btn_volume_tooltip"

    },
    "Widget\0on_btn_play_clicked\0\0"
    "on_horizontalSlider_sliderMoved\0"
    "position\0on_btn_open_clicked\0"
    "on_filelist_doubleClicked\0QModelIndex\0"
    "index\0on_btn_last_clicked\0on_btn_next_clicked\0"
    "on_btn_volume_clicked\0mediaStateChanged\0"
    "QMediaPlayer::State\0state\0positionChanged\0"
    "setPosition\0durationChanged\0duration\0"
    "handleERR\0slider_volume_changed\0"
    "set_btn_volume_tooltip"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    1,   85,    2, 0x08 /* Private */,
       5,    0,   88,    2, 0x08 /* Private */,
       6,    1,   89,    2, 0x08 /* Private */,
       9,    0,   92,    2, 0x08 /* Private */,
      10,    0,   93,    2, 0x08 /* Private */,
      11,    0,   94,    2, 0x08 /* Private */,
      12,    1,   95,    2, 0x0a /* Public */,
      15,    1,   98,    2, 0x0a /* Public */,
      16,    1,  101,    2, 0x0a /* Public */,
      17,    1,  104,    2, 0x0a /* Public */,
      19,    0,  107,    2, 0x0a /* Public */,
      20,    0,  108,    2, 0x0a /* Public */,
      21,    0,  109,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::LongLong,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::LongLong,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btn_play_clicked(); break;
        case 1: _t->on_horizontalSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_btn_open_clicked(); break;
        case 3: _t->on_filelist_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_btn_last_clicked(); break;
        case 5: _t->on_btn_next_clicked(); break;
        case 6: _t->on_btn_volume_clicked(); break;
        case 7: _t->mediaStateChanged((*reinterpret_cast< QMediaPlayer::State(*)>(_a[1]))); break;
        case 8: _t->positionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 9: _t->setPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->durationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 11: _t->handleERR(); break;
        case 12: _t->slider_volume_changed(); break;
        case 13: _t->set_btn_volume_tooltip(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::State >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Widget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Widget.data,
    qt_meta_data_Widget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
