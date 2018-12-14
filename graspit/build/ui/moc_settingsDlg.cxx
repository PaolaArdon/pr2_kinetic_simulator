/****************************************************************************
** Meta object code from reading C++ file 'settingsDlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ui/settingsDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingsDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SettingsDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   13,   12,   12, 0x08,
      44,   13,   12,   12, 0x08,
      68,   13,   12,   12, 0x08,
      93,   13,   12,   12, 0x08,
     117,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SettingsDlg[] = {
    "SettingsDlg\0\0row,col\0checkCOFEntry(int,int)\0"
    "saveCurrentCOF(int,int)\0"
    "saveCurrentKCOF(int,int)\0"
    "checkKCOFEntry(int,int)\0validateDlg()\0"
};

void SettingsDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SettingsDlg *_t = static_cast<SettingsDlg *>(_o);
        switch (_id) {
        case 0: _t->checkCOFEntry((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->saveCurrentCOF((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->saveCurrentKCOF((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->checkKCOFEntry((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->validateDlg(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SettingsDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SettingsDlg::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SettingsDlg,
      qt_meta_data_SettingsDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SettingsDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SettingsDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SettingsDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsDlg))
        return static_cast<void*>(const_cast< SettingsDlg*>(this));
    return QObject::qt_metacast(_clname);
}

int SettingsDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
