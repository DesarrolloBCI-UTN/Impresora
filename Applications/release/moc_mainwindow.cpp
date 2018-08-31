/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Motriz/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[22];
    char stringdata0[419];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 6), // "tiempo"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 21), // "on_btnConnect_clicked"
QT_MOC_LITERAL(4, 41, 20), // "on_btnListen_clicked"
QT_MOC_LITERAL(5, 62, 18), // "on_btnSend_clicked"
QT_MOC_LITERAL(6, 81, 19), // "on_btnClear_clicked"
QT_MOC_LITERAL(7, 101, 19), // "socket_aboutToClose"
QT_MOC_LITERAL(8, 121, 19), // "socket_bytesWritten"
QT_MOC_LITERAL(9, 141, 5), // "bytes"
QT_MOC_LITERAL(10, 147, 16), // "socket_connected"
QT_MOC_LITERAL(11, 164, 19), // "socket_disconnected"
QT_MOC_LITERAL(12, 184, 12), // "socket_error"
QT_MOC_LITERAL(13, 197, 16), // "socket_readyRead"
QT_MOC_LITERAL(14, 214, 19), // "socket_stateChanged"
QT_MOC_LITERAL(15, 234, 20), // "server_newConnection"
QT_MOC_LITERAL(16, 255, 24), // "on_push_imprimir_clicked"
QT_MOC_LITERAL(17, 280, 31), // "on_button_refresh_ports_clicked"
QT_MOC_LITERAL(18, 312, 39), // "on_comboBox_puertos_currentIn..."
QT_MOC_LITERAL(19, 352, 5), // "index"
QT_MOC_LITERAL(20, 358, 25), // "on_button_connect_clicked"
QT_MOC_LITERAL(21, 384, 34) // "on_pushButton_pedido_linea_cl..."

    },
    "MainWindow\0tiempo\0\0on_btnConnect_clicked\0"
    "on_btnListen_clicked\0on_btnSend_clicked\0"
    "on_btnClear_clicked\0socket_aboutToClose\0"
    "socket_bytesWritten\0bytes\0socket_connected\0"
    "socket_disconnected\0socket_error\0"
    "socket_readyRead\0socket_stateChanged\0"
    "server_newConnection\0on_push_imprimir_clicked\0"
    "on_button_refresh_ports_clicked\0"
    "on_comboBox_puertos_currentIndexChanged\0"
    "index\0on_button_connect_clicked\0"
    "on_pushButton_pedido_linea_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x0a /* Public */,
       3,    0,  105,    2, 0x08 /* Private */,
       4,    0,  106,    2, 0x08 /* Private */,
       5,    0,  107,    2, 0x08 /* Private */,
       6,    0,  108,    2, 0x08 /* Private */,
       7,    0,  109,    2, 0x08 /* Private */,
       8,    1,  110,    2, 0x08 /* Private */,
      10,    0,  113,    2, 0x08 /* Private */,
      11,    0,  114,    2, 0x08 /* Private */,
      12,    0,  115,    2, 0x08 /* Private */,
      13,    0,  116,    2, 0x08 /* Private */,
      14,    0,  117,    2, 0x08 /* Private */,
      15,    0,  118,    2, 0x08 /* Private */,
      16,    0,  119,    2, 0x08 /* Private */,
      17,    0,  120,    2, 0x08 /* Private */,
      18,    1,  121,    2, 0x08 /* Private */,
      20,    0,  124,    2, 0x08 /* Private */,
      21,    0,  125,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tiempo(); break;
        case 1: _t->on_btnConnect_clicked(); break;
        case 2: _t->on_btnListen_clicked(); break;
        case 3: _t->on_btnSend_clicked(); break;
        case 4: _t->on_btnClear_clicked(); break;
        case 5: _t->socket_aboutToClose(); break;
        case 6: _t->socket_bytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 7: _t->socket_connected(); break;
        case 8: _t->socket_disconnected(); break;
        case 9: _t->socket_error(); break;
        case 10: _t->socket_readyRead(); break;
        case 11: _t->socket_stateChanged(); break;
        case 12: _t->server_newConnection(); break;
        case 13: _t->on_push_imprimir_clicked(); break;
        case 14: _t->on_button_refresh_ports_clicked(); break;
        case 15: _t->on_comboBox_puertos_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->on_button_connect_clicked(); break;
        case 17: _t->on_pushButton_pedido_linea_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
