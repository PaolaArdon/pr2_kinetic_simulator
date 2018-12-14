/****************************************************************************
** Meta object code from reading C++ file 'ivmgr.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/graspit/ivmgr.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ivmgr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IVmgr[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x0a,
      27,    6,    6,    6, 0x0a,
      51,    6,    6,    6, 0x0a,
      74,    6,    6,    6, 0x0a,
      90,    6,    6,    6, 0x0a,
     106,    6,    6,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_IVmgr[] = {
    "IVmgr\0\0drawDynamicForces()\0"
    "drawWorstCaseWrenches()\0drawUnbalancedForces()\0"
    "saveNextImage()\0saveCameraPos()\0"
    "restoreCameraPos()\0"
};

void IVmgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IVmgr *_t = static_cast<IVmgr *>(_o);
        switch (_id) {
        case 0: _t->drawDynamicForces(); break;
        case 1: _t->drawWorstCaseWrenches(); break;
        case 2: _t->drawUnbalancedForces(); break;
        case 3: _t->saveNextImage(); break;
        case 4: _t->saveCameraPos(); break;
        case 5: _t->restoreCameraPos(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData IVmgr::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IVmgr::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_IVmgr,
      qt_meta_data_IVmgr, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IVmgr::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IVmgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IVmgr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IVmgr))
        return static_cast<void*>(const_cast< IVmgr*>(this));
    return QWidget::qt_metacast(_clname);
}

int IVmgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
