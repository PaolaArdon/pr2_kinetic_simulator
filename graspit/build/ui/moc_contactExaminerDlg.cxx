/****************************************************************************
** Meta object code from reading C++ file 'contactExaminerDlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ui/contactExaminerDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contactExaminerDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ContactExaminerDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x0a,
      41,   19,   19,   19, 0x0a,
      62,   19,   19,   19, 0x0a,
      83,   19,   19,   19, 0x0a,
     104,   19,   19,   19, 0x0a,
     134,   19,   19,   19, 0x0a,
     156,   19,   19,   19, 0x0a,
     180,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ContactExaminerDlg[] = {
    "ContactExaminerDlg\0\0markButton_clicked()\0"
    "loadButton_clicked()\0saveButton_clicked()\0"
    "exitButton_clicked()\0updateQualityButton_clicked()\0"
    "clearButton_clicked()\0showGWSButton_clicked()\0"
    "modeSelected()\0"
};

void ContactExaminerDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ContactExaminerDlg *_t = static_cast<ContactExaminerDlg *>(_o);
        switch (_id) {
        case 0: _t->markButton_clicked(); break;
        case 1: _t->loadButton_clicked(); break;
        case 2: _t->saveButton_clicked(); break;
        case 3: _t->exitButton_clicked(); break;
        case 4: _t->updateQualityButton_clicked(); break;
        case 5: _t->clearButton_clicked(); break;
        case 6: _t->showGWSButton_clicked(); break;
        case 7: _t->modeSelected(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ContactExaminerDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ContactExaminerDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ContactExaminerDlg,
      qt_meta_data_ContactExaminerDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ContactExaminerDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ContactExaminerDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ContactExaminerDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ContactExaminerDlg))
        return static_cast<void*>(const_cast< ContactExaminerDlg*>(this));
    if (!strcmp(_clname, "Ui::ContactExaminerDlgUI"))
        return static_cast< Ui::ContactExaminerDlgUI*>(const_cast< ContactExaminerDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int ContactExaminerDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
