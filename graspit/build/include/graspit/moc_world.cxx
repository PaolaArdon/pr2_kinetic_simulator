/****************************************************************************
** Meta object code from reading C++ file 'world.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/graspit/world.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'world.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_World[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x05,
      33,   26,    6,    6, 0x05,
      60,    6,    6,    6, 0x05,
      80,    6,    6,    6, 0x05,
     101,    6,    6,    6, 0x05,
     115,    6,    6,    6, 0x05,
     131,    6,    6,    6, 0x05,
     154,    6,    6,    6, 0x05,
     179,    6,    6,    6, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_World[] = {
    "World\0\0dynamicStepTaken()\0errMsg\0"
    "dynamicsError(const char*)\0"
    "selectionsChanged()\0numElementsChanged()\0"
    "handRemoved()\0graspsUpdated()\0"
    "handSelectionChanged()\0tendonSelectionChanged()\0"
    "tendonDetailsChanged()\0"
};

void World::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        World *_t = static_cast<World *>(_o);
        switch (_id) {
        case 0: _t->dynamicStepTaken(); break;
        case 1: _t->dynamicsError((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 2: _t->selectionsChanged(); break;
        case 3: _t->numElementsChanged(); break;
        case 4: _t->handRemoved(); break;
        case 5: _t->graspsUpdated(); break;
        case 6: _t->handSelectionChanged(); break;
        case 7: _t->tendonSelectionChanged(); break;
        case 8: _t->tendonDetailsChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData World::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject World::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_World,
      qt_meta_data_World, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &World::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *World::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *World::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_World))
        return static_cast<void*>(const_cast< World*>(this));
    return QObject::qt_metacast(_clname);
}

int World::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void World::dynamicStepTaken()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void World::dynamicsError(const char * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void World::selectionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void World::numElementsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void World::handRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void World::graspsUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void World::handSelectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void World::tendonSelectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void World::tendonDetailsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}
QT_END_MOC_NAMESPACE
