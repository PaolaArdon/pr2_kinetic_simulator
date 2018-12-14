/********************************************************************************
** Form generated from reading UI file 'dbaseDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DBASEDLG_H
#define UI_DBASEDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGraphicsView>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DBaseDlgUI
{
public:
    QGroupBox *connectionGroup;
    QLineEdit *hostLineEdit;
    QLabel *hostLabel;
    QLabel *portLabel;
    QLineEdit *portLineEdit;
    QLabel *databaseLabel;
    QLineEdit *databaseLineEdit;
    QLabel *usernameLabel;
    QLineEdit *usernameLineEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QPushButton *connectButton;
    QGroupBox *browserGroup;
    QComboBox *modelsComboBox;
    QLabel *modelsLabel;
    QPushButton *loadModelButton;
    QPushButton *loadGraspButton;
    QGraphicsView *objectGraph;
    QComboBox *classesComboBox;
    QLabel *classesLabel;
    QComboBox *typesComboBox;
    QGroupBox *graspsGroup;
    QPushButton *previousGraspButton;
    QPushButton *nextGraspButton;
    QLabel *graspIndexLabel;
    QLabel *epsilonQualityLabel;
    QRadioButton *showPreGraspRadioButton;
    QRadioButton *showFinalGraspRadioButton;
    QLabel *volumeQualityLabel;
    QLabel *energyLabel;
    QPushButton *sortButton;
    QComboBox *sortBox;
    QCheckBox *showMarkersBox;
    QLabel *clearanceLabel;
    QPushButton *exitButton;
    QPushButton *plannerButton;
    QPushButton *createGWSButton;

    void setupUi(QWidget *DBaseDlgUI)
    {
        if (DBaseDlgUI->objectName().isEmpty())
            DBaseDlgUI->setObjectName(QString::fromUtf8("DBaseDlgUI"));
        DBaseDlgUI->resize(465, 531);
        connectionGroup = new QGroupBox(DBaseDlgUI);
        connectionGroup->setObjectName(QString::fromUtf8("connectionGroup"));
        connectionGroup->setGeometry(QRect(20, 20, 431, 141));
        hostLineEdit = new QLineEdit(connectionGroup);
        hostLineEdit->setObjectName(QString::fromUtf8("hostLineEdit"));
        hostLineEdit->setGeometry(QRect(100, 25, 301, 20));
        hostLabel = new QLabel(connectionGroup);
        hostLabel->setObjectName(QString::fromUtf8("hostLabel"));
        hostLabel->setGeometry(QRect(47, 28, 30, 16));
        portLabel = new QLabel(connectionGroup);
        portLabel->setObjectName(QString::fromUtf8("portLabel"));
        portLabel->setGeometry(QRect(290, 57, 41, 16));
        portLineEdit = new QLineEdit(connectionGroup);
        portLineEdit->setObjectName(QString::fromUtf8("portLineEdit"));
        portLineEdit->setGeometry(QRect(330, 54, 71, 20));
        databaseLabel = new QLabel(connectionGroup);
        databaseLabel->setObjectName(QString::fromUtf8("databaseLabel"));
        databaseLabel->setGeometry(QRect(25, 54, 71, 16));
        databaseLineEdit = new QLineEdit(connectionGroup);
        databaseLineEdit->setObjectName(QString::fromUtf8("databaseLineEdit"));
        databaseLineEdit->setGeometry(QRect(100, 54, 121, 20));
        usernameLabel = new QLabel(connectionGroup);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));
        usernameLabel->setGeometry(QRect(20, 83, 71, 16));
        usernameLineEdit = new QLineEdit(connectionGroup);
        usernameLineEdit->setObjectName(QString::fromUtf8("usernameLineEdit"));
        usernameLineEdit->setGeometry(QRect(100, 82, 121, 20));
        passwordLabel = new QLabel(connectionGroup);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setGeometry(QRect(260, 80, 61, 16));
        passwordLineEdit = new QLineEdit(connectionGroup);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(330, 80, 71, 20));
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        connectButton = new QPushButton(connectionGroup);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));
        connectButton->setGeometry(QRect(330, 110, 75, 24));
        browserGroup = new QGroupBox(DBaseDlgUI);
        browserGroup->setObjectName(QString::fromUtf8("browserGroup"));
        browserGroup->setGeometry(QRect(20, 170, 431, 151));
        modelsComboBox = new QComboBox(browserGroup);
        modelsComboBox->setObjectName(QString::fromUtf8("modelsComboBox"));
        modelsComboBox->setGeometry(QRect(80, 50, 141, 22));
        modelsComboBox->setEditable(false);
        modelsLabel = new QLabel(browserGroup);
        modelsLabel->setObjectName(QString::fromUtf8("modelsLabel"));
        modelsLabel->setGeometry(QRect(20, 50, 51, 16));
        loadModelButton = new QPushButton(browserGroup);
        loadModelButton->setObjectName(QString::fromUtf8("loadModelButton"));
        loadModelButton->setGeometry(QRect(20, 80, 201, 24));
        loadGraspButton = new QPushButton(browserGroup);
        loadGraspButton->setObjectName(QString::fromUtf8("loadGraspButton"));
        loadGraspButton->setGeometry(QRect(140, 120, 81, 24));
        objectGraph = new QGraphicsView(browserGroup);
        objectGraph->setObjectName(QString::fromUtf8("objectGraph"));
        objectGraph->setGeometry(QRect(240, 12, 176, 132));
        classesComboBox = new QComboBox(browserGroup);
        classesComboBox->setObjectName(QString::fromUtf8("classesComboBox"));
        classesComboBox->setGeometry(QRect(80, 16, 141, 22));
        classesComboBox->setEditable(false);
        classesLabel = new QLabel(browserGroup);
        classesLabel->setObjectName(QString::fromUtf8("classesLabel"));
        classesLabel->setGeometry(QRect(20, 20, 51, 16));
        typesComboBox = new QComboBox(browserGroup);
        typesComboBox->setObjectName(QString::fromUtf8("typesComboBox"));
        typesComboBox->setGeometry(QRect(20, 121, 111, 22));
        typesComboBox->setEditable(false);
        graspsGroup = new QGroupBox(DBaseDlgUI);
        graspsGroup->setObjectName(QString::fromUtf8("graspsGroup"));
        graspsGroup->setGeometry(QRect(20, 340, 431, 141));
        previousGraspButton = new QPushButton(graspsGroup);
        previousGraspButton->setObjectName(QString::fromUtf8("previousGraspButton"));
        previousGraspButton->setGeometry(QRect(20, 40, 41, 24));
        nextGraspButton = new QPushButton(graspsGroup);
        nextGraspButton->setObjectName(QString::fromUtf8("nextGraspButton"));
        nextGraspButton->setGeometry(QRect(130, 40, 41, 24));
        graspIndexLabel = new QLabel(graspsGroup);
        graspIndexLabel->setObjectName(QString::fromUtf8("graspIndexLabel"));
        graspIndexLabel->setGeometry(QRect(70, 40, 51, 20));
        graspIndexLabel->setAlignment(Qt::AlignCenter);
        epsilonQualityLabel = new QLabel(graspsGroup);
        epsilonQualityLabel->setObjectName(QString::fromUtf8("epsilonQualityLabel"));
        epsilonQualityLabel->setGeometry(QRect(270, 20, 131, 20));
        epsilonQualityLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        showPreGraspRadioButton = new QRadioButton(graspsGroup);
        showPreGraspRadioButton->setObjectName(QString::fromUtf8("showPreGraspRadioButton"));
        showPreGraspRadioButton->setGeometry(QRect(23, 16, 111, 19));
        showFinalGraspRadioButton = new QRadioButton(graspsGroup);
        showFinalGraspRadioButton->setObjectName(QString::fromUtf8("showFinalGraspRadioButton"));
        showFinalGraspRadioButton->setGeometry(QRect(140, 15, 121, 19));
        showFinalGraspRadioButton->setChecked(true);
        volumeQualityLabel = new QLabel(graspsGroup);
        volumeQualityLabel->setObjectName(QString::fromUtf8("volumeQualityLabel"));
        volumeQualityLabel->setGeometry(QRect(270, 46, 131, 20));
        volumeQualityLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        energyLabel = new QLabel(graspsGroup);
        energyLabel->setObjectName(QString::fromUtf8("energyLabel"));
        energyLabel->setGeometry(QRect(314, 74, 111, 18));
        sortButton = new QPushButton(graspsGroup);
        sortButton->setObjectName(QString::fromUtf8("sortButton"));
        sortButton->setGeometry(QRect(20, 72, 61, 28));
        sortBox = new QComboBox(graspsGroup);
        sortBox->setObjectName(QString::fromUtf8("sortBox"));
        sortBox->setGeometry(QRect(90, 72, 121, 27));
        showMarkersBox = new QCheckBox(graspsGroup);
        showMarkersBox->setObjectName(QString::fromUtf8("showMarkersBox"));
        showMarkersBox->setGeometry(QRect(20, 110, 111, 24));
        clearanceLabel = new QLabel(graspsGroup);
        clearanceLabel->setObjectName(QString::fromUtf8("clearanceLabel"));
        clearanceLabel->setGeometry(QRect(246, 97, 171, 18));
        exitButton = new QPushButton(DBaseDlgUI);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(370, 490, 75, 24));
        plannerButton = new QPushButton(DBaseDlgUI);
        plannerButton->setObjectName(QString::fromUtf8("plannerButton"));
        plannerButton->setGeometry(QRect(270, 490, 75, 24));
        createGWSButton = new QPushButton(DBaseDlgUI);
        createGWSButton->setObjectName(QString::fromUtf8("createGWSButton"));
        createGWSButton->setGeometry(QRect(170, 490, 75, 24));

        retranslateUi(DBaseDlgUI);

        QMetaObject::connectSlotsByName(DBaseDlgUI);
    } // setupUi

    void retranslateUi(QWidget *DBaseDlgUI)
    {
        DBaseDlgUI->setWindowTitle(QApplication::translate("DBaseDlgUI", "CGDB - Broswer", 0, QApplication::UnicodeUTF8));
        connectionGroup->setTitle(QApplication::translate("DBaseDlgUI", "CGDB Connection", 0, QApplication::UnicodeUTF8));
        hostLineEdit->setText(QApplication::translate("DBaseDlgUI", "localhost", 0, QApplication::UnicodeUTF8));
        hostLabel->setText(QApplication::translate("DBaseDlgUI", "Host:", 0, QApplication::UnicodeUTF8));
        portLabel->setText(QApplication::translate("DBaseDlgUI", "Port:", 0, QApplication::UnicodeUTF8));
        portLineEdit->setText(QApplication::translate("DBaseDlgUI", "5432", 0, QApplication::UnicodeUTF8));
        databaseLabel->setText(QApplication::translate("DBaseDlgUI", "Database:", 0, QApplication::UnicodeUTF8));
        databaseLineEdit->setText(QApplication::translate("DBaseDlgUI", "grasps", 0, QApplication::UnicodeUTF8));
        usernameLabel->setText(QApplication::translate("DBaseDlgUI", "User Name:", 0, QApplication::UnicodeUTF8));
        usernameLineEdit->setText(QString());
        passwordLabel->setText(QApplication::translate("DBaseDlgUI", "Password:", 0, QApplication::UnicodeUTF8));
        passwordLineEdit->setText(QString());
        connectButton->setText(QApplication::translate("DBaseDlgUI", "Connect", 0, QApplication::UnicodeUTF8));
        browserGroup->setTitle(QApplication::translate("DBaseDlgUI", "Browser", 0, QApplication::UnicodeUTF8));
        modelsLabel->setText(QApplication::translate("DBaseDlgUI", "Models:", 0, QApplication::UnicodeUTF8));
        loadModelButton->setText(QApplication::translate("DBaseDlgUI", "Load Model", 0, QApplication::UnicodeUTF8));
        loadGraspButton->setText(QApplication::translate("DBaseDlgUI", "Load Grasps", 0, QApplication::UnicodeUTF8));
        classesLabel->setText(QApplication::translate("DBaseDlgUI", "Classes:", 0, QApplication::UnicodeUTF8));
        graspsGroup->setTitle(QApplication::translate("DBaseDlgUI", "Grasps", 0, QApplication::UnicodeUTF8));
        previousGraspButton->setText(QApplication::translate("DBaseDlgUI", "<", 0, QApplication::UnicodeUTF8));
        nextGraspButton->setText(QApplication::translate("DBaseDlgUI", ">", 0, QApplication::UnicodeUTF8));
        graspIndexLabel->setText(QApplication::translate("DBaseDlgUI", "0/0", 0, QApplication::UnicodeUTF8));
        epsilonQualityLabel->setText(QApplication::translate("DBaseDlgUI", "Epsilon Quality: -1.0", 0, QApplication::UnicodeUTF8));
        showPreGraspRadioButton->setText(QApplication::translate("DBaseDlgUI", "show pre-grasp", 0, QApplication::UnicodeUTF8));
        showFinalGraspRadioButton->setText(QApplication::translate("DBaseDlgUI", "show final-grasp", 0, QApplication::UnicodeUTF8));
        volumeQualityLabel->setText(QApplication::translate("DBaseDlgUI", "Volume Quality: -1.0", 0, QApplication::UnicodeUTF8));
        energyLabel->setText(QApplication::translate("DBaseDlgUI", "Energy: 0.0", 0, QApplication::UnicodeUTF8));
        sortButton->setText(QApplication::translate("DBaseDlgUI", "Sort by", 0, QApplication::UnicodeUTF8));
        showMarkersBox->setText(QApplication::translate("DBaseDlgUI", "Show Markers", 0, QApplication::UnicodeUTF8));
        clearanceLabel->setText(QApplication::translate("DBaseDlgUI", "Pregrasp clearance: -1.0", 0, QApplication::UnicodeUTF8));
        exitButton->setText(QApplication::translate("DBaseDlgUI", "Exit", 0, QApplication::UnicodeUTF8));
        plannerButton->setText(QApplication::translate("DBaseDlgUI", "Planner", 0, QApplication::UnicodeUTF8));
        createGWSButton->setText(QApplication::translate("DBaseDlgUI", "GWS", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DBaseDlgUI: public Ui_DBaseDlgUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBASEDLG_H
