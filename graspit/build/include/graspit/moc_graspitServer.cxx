/****************************************************************************
** Meta object code from reading C++ file 'graspitServer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/graspit/graspitServer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graspitServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ClientSocket[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      27,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ClientSocket[] = {
    "ClientSocket\0\0readClient()\0"
    "connectionClosed()\0"
};

void ClientSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ClientSocket *_t = static_cast<ClientSocket *>(_o);
        switch (_id) {
        case 0: _t->readClient(); break;
        case 1: _t->connectionClosed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ClientSocket::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ClientSocket::staticMetaObject = {
    { &Q3Socket::staticMetaObject, qt_meta_stringdata_ClientSocket,
      qt_meta_data_ClientSocket, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ClientSocket::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ClientSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ClientSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ClientSocket))
        return static_cast<void*>(const_cast< ClientSocket*>(this));
    return Q3Socket::qt_metacast(_clname);
}

int ClientSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Q3Socket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_GraspItServer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_GraspItServer[] = {
    "GraspItServer\0"
};

void GraspItServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData GraspItServer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GraspItServer::staticMetaObject = {
    { &Q3ServerSocket::staticMetaObject, qt_meta_stringdata_GraspItServer,
      qt_meta_data_GraspItServer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GraspItServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GraspItServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GraspItServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GraspItServer))
        return static_cast<void*>(const_cast< GraspItServer*>(this));
    return Q3ServerSocket::qt_metacast(_clname);
}

int GraspItServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Q3ServerSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
