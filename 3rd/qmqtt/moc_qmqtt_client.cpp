/****************************************************************************
** Meta object code from reading C++ file 'qmqtt_client.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qmqtt_client.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmqtt_client.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QMQTT__Client_t {
    QByteArrayData data[47];
    char stringdata0[451];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMQTT__Client_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMQTT__Client_t qt_meta_stringdata_QMQTT__Client = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QMQTT::Client"
QT_MOC_LITERAL(1, 14, 9), // "connected"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "error"
QT_MOC_LITERAL(4, 31, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(5, 60, 9), // "connacked"
QT_MOC_LITERAL(6, 70, 3), // "ack"
QT_MOC_LITERAL(7, 74, 9), // "published"
QT_MOC_LITERAL(8, 84, 15), // "QMQTT::Message&"
QT_MOC_LITERAL(9, 100, 7), // "message"
QT_MOC_LITERAL(10, 108, 8), // "pubacked"
QT_MOC_LITERAL(11, 117, 4), // "type"
QT_MOC_LITERAL(12, 122, 5), // "msgid"
QT_MOC_LITERAL(13, 128, 8), // "received"
QT_MOC_LITERAL(14, 137, 14), // "QMQTT::Message"
QT_MOC_LITERAL(15, 152, 10), // "subscribed"
QT_MOC_LITERAL(16, 163, 5), // "topic"
QT_MOC_LITERAL(17, 169, 8), // "subacked"
QT_MOC_LITERAL(18, 178, 3), // "mid"
QT_MOC_LITERAL(19, 182, 3), // "qos"
QT_MOC_LITERAL(20, 186, 12), // "unsubscribed"
QT_MOC_LITERAL(21, 199, 10), // "unsubacked"
QT_MOC_LITERAL(22, 210, 4), // "pong"
QT_MOC_LITERAL(23, 215, 12), // "disconnected"
QT_MOC_LITERAL(24, 228, 7), // "connect"
QT_MOC_LITERAL(25, 236, 7), // "publish"
QT_MOC_LITERAL(26, 244, 8), // "Message&"
QT_MOC_LITERAL(27, 253, 6), // "puback"
QT_MOC_LITERAL(28, 260, 9), // "subscribe"
QT_MOC_LITERAL(29, 270, 11), // "unsubscribe"
QT_MOC_LITERAL(30, 282, 4), // "ping"
QT_MOC_LITERAL(31, 287, 10), // "disconnect"
QT_MOC_LITERAL(32, 298, 11), // "onConnected"
QT_MOC_LITERAL(33, 310, 14), // "onDisconnected"
QT_MOC_LITERAL(34, 325, 10), // "onReceived"
QT_MOC_LITERAL(35, 336, 6), // "Frame&"
QT_MOC_LITERAL(36, 343, 5), // "frame"
QT_MOC_LITERAL(37, 349, 13), // "handlePublish"
QT_MOC_LITERAL(38, 363, 13), // "handleConnack"
QT_MOC_LITERAL(39, 377, 12), // "handlePuback"
QT_MOC_LITERAL(40, 390, 4), // "port"
QT_MOC_LITERAL(41, 395, 4), // "host"
QT_MOC_LITERAL(42, 400, 8), // "clientId"
QT_MOC_LITERAL(43, 409, 8), // "username"
QT_MOC_LITERAL(44, 418, 8), // "password"
QT_MOC_LITERAL(45, 427, 9), // "keepalive"
QT_MOC_LITERAL(46, 437, 13) // "autoReconnect"

    },
    "QMQTT::Client\0connected\0\0error\0"
    "QAbstractSocket::SocketError\0connacked\0"
    "ack\0published\0QMQTT::Message&\0message\0"
    "pubacked\0type\0msgid\0received\0"
    "QMQTT::Message\0subscribed\0topic\0"
    "subacked\0mid\0qos\0unsubscribed\0unsubacked\0"
    "pong\0disconnected\0connect\0publish\0"
    "Message&\0puback\0subscribe\0unsubscribe\0"
    "ping\0disconnect\0onConnected\0onDisconnected\0"
    "onReceived\0Frame&\0frame\0handlePublish\0"
    "handleConnack\0handlePuback\0port\0host\0"
    "clientId\0username\0password\0keepalive\0"
    "autoReconnect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMQTT__Client[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       7,  208, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  139,    2, 0x06 /* Public */,
       3,    1,  140,    2, 0x06 /* Public */,
       5,    1,  143,    2, 0x06 /* Public */,
       7,    1,  146,    2, 0x06 /* Public */,
      10,    2,  149,    2, 0x06 /* Public */,
      13,    1,  154,    2, 0x06 /* Public */,
      15,    1,  157,    2, 0x06 /* Public */,
      17,    2,  160,    2, 0x06 /* Public */,
      20,    1,  165,    2, 0x06 /* Public */,
      21,    1,  168,    2, 0x06 /* Public */,
      22,    0,  171,    2, 0x06 /* Public */,
      23,    0,  172,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      24,    0,  173,    2, 0x0a /* Public */,
      25,    1,  174,    2, 0x0a /* Public */,
      27,    2,  177,    2, 0x0a /* Public */,
      28,    2,  182,    2, 0x0a /* Public */,
      29,    1,  187,    2, 0x0a /* Public */,
      30,    0,  190,    2, 0x0a /* Public */,
      31,    0,  191,    2, 0x0a /* Public */,
      32,    0,  192,    2, 0x08 /* Private */,
      33,    0,  193,    2, 0x08 /* Private */,
      34,    1,  194,    2, 0x08 /* Private */,
      37,    1,  197,    2, 0x08 /* Private */,
      38,    1,  200,    2, 0x08 /* Private */,
      39,    2,  203,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::UChar,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,   11,   12,
    QMetaType::Void, 0x80000000 | 14,    9,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,   18,   19,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::UShort,   18,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::UShort, 0x80000000 | 26,    9,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,   11,   12,
    QMetaType::UShort, QMetaType::QString, QMetaType::UChar,   16,   19,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 35,   36,
    QMetaType::Void, 0x80000000 | 26,    9,
    QMetaType::Void, QMetaType::UChar,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,   11,   12,

 // properties: name, type, flags
      40, QMetaType::UInt, 0x00095103,
      41, QMetaType::QString, 0x00095103,
      42, QMetaType::QString, 0x00095103,
      43, QMetaType::QString, 0x00095103,
      44, QMetaType::QString, 0x00095103,
      45, QMetaType::Int, 0x00095003,
      46, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QMQTT::Client::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Client *_t = static_cast<Client *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->error((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 2: _t->connacked((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 3: _t->published((*reinterpret_cast< QMQTT::Message(*)>(_a[1]))); break;
        case 4: _t->pubacked((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 5: _t->received((*reinterpret_cast< const QMQTT::Message(*)>(_a[1]))); break;
        case 6: _t->subscribed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->subacked((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 8: _t->unsubscribed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->unsubacked((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 10: _t->pong(); break;
        case 11: _t->disconnected(); break;
        case 12: _t->connect(); break;
        case 13: { quint16 _r = _t->publish((*reinterpret_cast< Message(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->puback((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 15: { quint16 _r = _t->subscribe((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->unsubscribe((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->ping(); break;
        case 18: _t->disconnect(); break;
        case 19: _t->onConnected(); break;
        case 20: _t->onDisconnected(); break;
        case 21: _t->onReceived((*reinterpret_cast< Frame(*)>(_a[1]))); break;
        case 22: _t->handlePublish((*reinterpret_cast< Message(*)>(_a[1]))); break;
        case 23: _t->handleConnack((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 24: _t->handlePuback((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Client::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::connected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Client::*_t)(QAbstractSocket::SocketError );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::error)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Client::*_t)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::connacked)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Client::*_t)(QMQTT::Message & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::published)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Client::*_t)(quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::pubacked)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Client::*_t)(const QMQTT::Message & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::received)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Client::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::subscribed)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Client::*_t)(quint16 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::subacked)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (Client::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::unsubscribed)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (Client::*_t)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::unsubacked)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (Client::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::pong)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (Client::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Client::disconnected)) {
                *result = 11;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Client *_t = static_cast<Client *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint32*>(_v) = _t->port(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->host(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->clientId(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->username(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->password(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->keepalive(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->autoReconnect(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Client *_t = static_cast<Client *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPort(*reinterpret_cast< quint32*>(_v)); break;
        case 1: _t->setHost(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setClientId(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setUsername(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setPassword(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setKeepAlive(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setAutoReconnect(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QMQTT::Client::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QMQTT__Client.data,
      qt_meta_data_QMQTT__Client,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QMQTT::Client::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMQTT::Client::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMQTT__Client.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QMQTT::Client::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QMQTT::Client::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QMQTT::Client::error(QAbstractSocket::SocketError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QMQTT::Client::connacked(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QMQTT::Client::published(QMQTT::Message & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QMQTT::Client::pubacked(quint8 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QMQTT::Client::received(const QMQTT::Message & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QMQTT::Client::subscribed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QMQTT::Client::subacked(quint16 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QMQTT::Client::unsubscribed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QMQTT::Client::unsubacked(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QMQTT::Client::pong()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void QMQTT::Client::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
