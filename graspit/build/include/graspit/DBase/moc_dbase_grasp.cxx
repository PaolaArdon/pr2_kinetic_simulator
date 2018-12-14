/****************************************************************************
** Meta object code from reading C++ file 'dbase_grasp.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/graspit/DBase/dbase_grasp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbase_grasp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DBaseBatchPlanner[] = {

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
      19,   18,   18,   18, 0x0a,
      35,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DBaseBatchPlanner[] = {
    "DBaseBatchPlanner\0\0plannerUpdate()\0"
    "plannerComplete()\0"
};

void DBaseBatchPlanner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DBaseBatchPlanner *_t = static_cast<DBaseBatchPlanner *>(_o);
        switch (_id) {
        case 0: _t->plannerUpdate(); break;
        case 1: _t->plannerComplete(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DBaseBatchPlanner::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DBaseBatchPlanner::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DBaseBatchPlanner,
      qt_meta_data_DBaseBatchPlanner, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DBaseBatchPlanner::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DBaseBatchPlanner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DBaseBatchPlanner::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DBaseBatchPlanner))
        return static_cast<void*>(const_cast< DBaseBatchPlanner*>(this));
    return QObject::qt_metacast(_clname);
}

int DBaseBatchPlanner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
