/****************************************************************************
** Meta object code from reading C++ file 'robot.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/graspit/robot.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'robot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Robot[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x05,
      30,    6,    6,    6, 0x05,
      53,    6,    6,    6, 0x05,
      94,   74,    6,    6, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Robot[] = {
    "Robot\0\0configurationChanged()\0"
    "userInteractionStart()\0userInteractionEnd()\0"
    "numCols,stopRequest\0moveDOFStepTaken(int,bool&)\0"
};

void Robot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Robot *_t = static_cast<Robot *>(_o);
        switch (_id) {
        case 0: _t->configurationChanged(); break;
        case 1: _t->userInteractionStart(); break;
        case 2: _t->userInteractionEnd(); break;
        case 3: _t->moveDOFStepTaken((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Robot::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Robot::staticMetaObject = {
    { &WorldElement::staticMetaObject, qt_meta_stringdata_Robot,
      qt_meta_data_Robot, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Robot::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Robot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Robot::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Robot))
        return static_cast<void*>(const_cast< Robot*>(this));
    return WorldElement::qt_metacast(_clname);
}

int Robot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WorldElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Robot::configurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Robot::userInteractionStart()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Robot::userInteractionEnd()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Robot::moveDOFStepTaken(int _t1, bool & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
static const uint qt_meta_data_Hand[] = {

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

static const char qt_meta_stringdata_Hand[] = {
    "Hand\0"
};

void Hand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Hand::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Hand::staticMetaObject = {
    { &Robot::staticMetaObject, qt_meta_stringdata_Hand,
      qt_meta_data_Hand, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Hand::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Hand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Hand::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Hand))
        return static_cast<void*>(const_cast< Hand*>(this));
    return Robot::qt_metacast(_clname);
}

int Hand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Robot::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
