/****************************************************************************
** Meta object code from reading C++ file 'body.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/graspit/body.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'body.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Body[] = {

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

static const char qt_meta_stringdata_Body[] = {
    "Body\0"
};

void Body::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Body::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Body::staticMetaObject = {
    { &WorldElement::staticMetaObject, qt_meta_stringdata_Body,
      qt_meta_data_Body, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Body::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Body::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Body::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Body))
        return static_cast<void*>(const_cast< Body*>(this));
    return WorldElement::qt_metacast(_clname);
}

int Body::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WorldElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_DynamicBody[] = {

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

static const char qt_meta_stringdata_DynamicBody[] = {
    "DynamicBody\0"
};

void DynamicBody::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DynamicBody::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DynamicBody::staticMetaObject = {
    { &Body::staticMetaObject, qt_meta_stringdata_DynamicBody,
      qt_meta_data_DynamicBody, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DynamicBody::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DynamicBody::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DynamicBody::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DynamicBody))
        return static_cast<void*>(const_cast< DynamicBody*>(this));
    return Body::qt_metacast(_clname);
}

int DynamicBody::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Body::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Link[] = {

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

static const char qt_meta_stringdata_Link[] = {
    "Link\0"
};

void Link::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Link::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Link::staticMetaObject = {
    { &DynamicBody::staticMetaObject, qt_meta_stringdata_Link,
      qt_meta_data_Link, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Link::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Link::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Link::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Link))
        return static_cast<void*>(const_cast< Link*>(this));
    return DynamicBody::qt_metacast(_clname);
}

int Link::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DynamicBody::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_GraspableBody[] = {

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

static const char qt_meta_stringdata_GraspableBody[] = {
    "GraspableBody\0"
};

void GraspableBody::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData GraspableBody::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GraspableBody::staticMetaObject = {
    { &DynamicBody::staticMetaObject, qt_meta_stringdata_GraspableBody,
      qt_meta_data_GraspableBody, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GraspableBody::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GraspableBody::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GraspableBody::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GraspableBody))
        return static_cast<void*>(const_cast< GraspableBody*>(this));
    return DynamicBody::qt_metacast(_clname);
}

int GraspableBody::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DynamicBody::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
