/********************************************************************************
** Form generated from reading UI file 'dbasePlannerDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DBASEPLANNERDLG_H
#define UI_DBASEPLANNERDLG_H

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
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DBasePlannerDlgUI
{
public:
    QGroupBox *neighborGeneratorGroup;
    QPushButton *getNeighborButton;
    QComboBox *distanceFunctionComboBox;
    QGraphicsView *objectGraph;
    QComboBox *neighborComboBox;
    QSpinBox *numOfNeighborsSpinBox;
    QLabel *numOfNbrLabel;
    QLabel *distanceFunctionLabel;
    QLabel *NeighborsLabel;
    QGroupBox *graspsGroup;
    QPushButton *previousGraspButton;
    QPushButton *nextGraspButton;
    QLabel *graspIndexLabel;
    QLabel *originalEpsilonQualityLabel;
    QLabel *originalVolumeQualityLabel;
    QCheckBox *seeNeighborCheckBox;
    QRadioButton *originalGraspRadioButton;
    QRadioButton *testedGraspRadioButton;
    QPushButton *exitButton;
    QGroupBox *graspRankingGroup;
    QComboBox *rankingMethodComboBox;
    QLabel *rankingMethodLabel;
    QPushButton *rankGraspsButton;
    QPushButton *retrieveGraspsButton;
    QLabel *rankingMethodLabel_2;
    QGroupBox *executionGroup;
    QComboBox *executionTypeComboBox;
    QPushButton *executeButton;
    QComboBox *graspRangeComboBox;
    QLabel *testedVolumeQualityLabel;
    QLabel *testedEpsilonQualityLabel;
    QPushButton *createGWSButton;
    QGroupBox *alignmentMethodGroup;
    QComboBox *alignmentMethodComboBox;
    QLabel *alignmentMethodLabel;

    void setupUi(QWidget *DBasePlannerDlgUI)
    {
        if (DBasePlannerDlgUI->objectName().isEmpty())
            DBasePlannerDlgUI->setObjectName(QString::fromUtf8("DBasePlannerDlgUI"));
        DBasePlannerDlgUI->resize(451, 611);
        neighborGeneratorGroup = new QGroupBox(DBasePlannerDlgUI);
        neighborGeneratorGroup->setObjectName(QString::fromUtf8("neighborGeneratorGroup"));
        neighborGeneratorGroup->setGeometry(QRect(20, 10, 411, 161));
        getNeighborButton = new QPushButton(neighborGeneratorGroup);
        getNeighborButton->setObjectName(QString::fromUtf8("getNeighborButton"));
        getNeighborButton->setGeometry(QRect(140, 69, 81, 31));
        distanceFunctionComboBox = new QComboBox(neighborGeneratorGroup);
        distanceFunctionComboBox->setObjectName(QString::fromUtf8("distanceFunctionComboBox"));
        distanceFunctionComboBox->setGeometry(QRect(90, 40, 131, 22));
        objectGraph = new QGraphicsView(neighborGeneratorGroup);
        objectGraph->setObjectName(QString::fromUtf8("objectGraph"));
        objectGraph->setGeometry(QRect(228, 16, 176, 132));
        neighborComboBox = new QComboBox(neighborGeneratorGroup);
        neighborComboBox->setObjectName(QString::fromUtf8("neighborComboBox"));
        neighborComboBox->setGeometry(QRect(90, 110, 131, 22));
        numOfNeighborsSpinBox = new QSpinBox(neighborGeneratorGroup);
        numOfNeighborsSpinBox->setObjectName(QString::fromUtf8("numOfNeighborsSpinBox"));
        numOfNeighborsSpinBox->setGeometry(QRect(89, 73, 41, 22));
        numOfNeighborsSpinBox->setMinimum(1);
        numOfNeighborsSpinBox->setMaximum(10);
        numOfNbrLabel = new QLabel(neighborGeneratorGroup);
        numOfNbrLabel->setObjectName(QString::fromUtf8("numOfNbrLabel"));
        numOfNbrLabel->setGeometry(QRect(20, 78, 70, 14));
        distanceFunctionLabel = new QLabel(neighborGeneratorGroup);
        distanceFunctionLabel->setObjectName(QString::fromUtf8("distanceFunctionLabel"));
        distanceFunctionLabel->setGeometry(QRect(20, 42, 70, 14));
        NeighborsLabel = new QLabel(neighborGeneratorGroup);
        NeighborsLabel->setObjectName(QString::fromUtf8("NeighborsLabel"));
        NeighborsLabel->setGeometry(QRect(20, 113, 70, 14));
        graspsGroup = new QGroupBox(DBasePlannerDlgUI);
        graspsGroup->setObjectName(QString::fromUtf8("graspsGroup"));
        graspsGroup->setGeometry(QRect(20, 333, 411, 111));
        previousGraspButton = new QPushButton(graspsGroup);
        previousGraspButton->setObjectName(QString::fromUtf8("previousGraspButton"));
        previousGraspButton->setGeometry(QRect(20, 60, 41, 24));
        nextGraspButton = new QPushButton(graspsGroup);
        nextGraspButton->setObjectName(QString::fromUtf8("nextGraspButton"));
        nextGraspButton->setGeometry(QRect(130, 60, 41, 24));
        graspIndexLabel = new QLabel(graspsGroup);
        graspIndexLabel->setObjectName(QString::fromUtf8("graspIndexLabel"));
        graspIndexLabel->setGeometry(QRect(70, 60, 51, 20));
        graspIndexLabel->setAlignment(Qt::AlignCenter);
        originalEpsilonQualityLabel = new QLabel(graspsGroup);
        originalEpsilonQualityLabel->setObjectName(QString::fromUtf8("originalEpsilonQualityLabel"));
        originalEpsilonQualityLabel->setGeometry(QRect(240, 50, 151, 20));
        originalEpsilonQualityLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        originalVolumeQualityLabel = new QLabel(graspsGroup);
        originalVolumeQualityLabel->setObjectName(QString::fromUtf8("originalVolumeQualityLabel"));
        originalVolumeQualityLabel->setGeometry(QRect(240, 80, 151, 20));
        originalVolumeQualityLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        seeNeighborCheckBox = new QCheckBox(graspsGroup);
        seeNeighborCheckBox->setObjectName(QString::fromUtf8("seeNeighborCheckBox"));
        seeNeighborCheckBox->setGeometry(QRect(20, 19, 140, 19));
        originalGraspRadioButton = new QRadioButton(graspsGroup);
        originalGraspRadioButton->setObjectName(QString::fromUtf8("originalGraspRadioButton"));
        originalGraspRadioButton->setGeometry(QRect(170, 20, 130, 19));
        originalGraspRadioButton->setChecked(true);
        testedGraspRadioButton = new QRadioButton(graspsGroup);
        testedGraspRadioButton->setObjectName(QString::fromUtf8("testedGraspRadioButton"));
        testedGraspRadioButton->setGeometry(QRect(300, 20, 82, 19));
        exitButton = new QPushButton(DBasePlannerDlgUI);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(340, 575, 75, 24));
        graspRankingGroup = new QGroupBox(DBasePlannerDlgUI);
        graspRankingGroup->setObjectName(QString::fromUtf8("graspRankingGroup"));
        graspRankingGroup->setGeometry(QRect(20, 242, 411, 81));
        rankingMethodComboBox = new QComboBox(graspRankingGroup);
        rankingMethodComboBox->setObjectName(QString::fromUtf8("rankingMethodComboBox"));
        rankingMethodComboBox->setGeometry(QRect(95, 50, 131, 22));
        rankingMethodLabel = new QLabel(graspRankingGroup);
        rankingMethodLabel->setObjectName(QString::fromUtf8("rankingMethodLabel"));
        rankingMethodLabel->setGeometry(QRect(10, 55, 90, 14));
        rankGraspsButton = new QPushButton(graspRankingGroup);
        rankGraspsButton->setObjectName(QString::fromUtf8("rankGraspsButton"));
        rankGraspsButton->setGeometry(QRect(235, 50, 90, 21));
        retrieveGraspsButton = new QPushButton(graspRankingGroup);
        retrieveGraspsButton->setObjectName(QString::fromUtf8("retrieveGraspsButton"));
        retrieveGraspsButton->setGeometry(QRect(95, 20, 90, 21));
        rankingMethodLabel_2 = new QLabel(graspRankingGroup);
        rankingMethodLabel_2->setObjectName(QString::fromUtf8("rankingMethodLabel_2"));
        rankingMethodLabel_2->setGeometry(QRect(10, 24, 90, 14));
        executionGroup = new QGroupBox(DBasePlannerDlgUI);
        executionGroup->setObjectName(QString::fromUtf8("executionGroup"));
        executionGroup->setGeometry(QRect(20, 456, 411, 101));
        executionTypeComboBox = new QComboBox(executionGroup);
        executionTypeComboBox->setObjectName(QString::fromUtf8("executionTypeComboBox"));
        executionTypeComboBox->setGeometry(QRect(20, 30, 91, 22));
        executeButton = new QPushButton(executionGroup);
        executeButton->setObjectName(QString::fromUtf8("executeButton"));
        executeButton->setGeometry(QRect(123, 30, 81, 51));
        graspRangeComboBox = new QComboBox(executionGroup);
        graspRangeComboBox->setObjectName(QString::fromUtf8("graspRangeComboBox"));
        graspRangeComboBox->setGeometry(QRect(20, 60, 91, 22));
        testedVolumeQualityLabel = new QLabel(executionGroup);
        testedVolumeQualityLabel->setObjectName(QString::fromUtf8("testedVolumeQualityLabel"));
        testedVolumeQualityLabel->setGeometry(QRect(240, 66, 151, 20));
        testedVolumeQualityLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        testedEpsilonQualityLabel = new QLabel(executionGroup);
        testedEpsilonQualityLabel->setObjectName(QString::fromUtf8("testedEpsilonQualityLabel"));
        testedEpsilonQualityLabel->setGeometry(QRect(240, 30, 151, 20));
        testedEpsilonQualityLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        createGWSButton = new QPushButton(DBasePlannerDlgUI);
        createGWSButton->setObjectName(QString::fromUtf8("createGWSButton"));
        createGWSButton->setGeometry(QRect(250, 575, 75, 24));
        alignmentMethodGroup = new QGroupBox(DBasePlannerDlgUI);
        alignmentMethodGroup->setObjectName(QString::fromUtf8("alignmentMethodGroup"));
        alignmentMethodGroup->setGeometry(QRect(20, 183, 411, 51));
        alignmentMethodComboBox = new QComboBox(alignmentMethodGroup);
        alignmentMethodComboBox->setObjectName(QString::fromUtf8("alignmentMethodComboBox"));
        alignmentMethodComboBox->setGeometry(QRect(120, 20, 131, 22));
        alignmentMethodLabel = new QLabel(alignmentMethodGroup);
        alignmentMethodLabel->setObjectName(QString::fromUtf8("alignmentMethodLabel"));
        alignmentMethodLabel->setGeometry(QRect(10, 23, 90, 14));

        retranslateUi(DBasePlannerDlgUI);

        QMetaObject::connectSlotsByName(DBasePlannerDlgUI);
    } // setupUi

    void retranslateUi(QWidget *DBasePlannerDlgUI)
    {
        DBasePlannerDlgUI->setWindowTitle(QApplication::translate("DBasePlannerDlgUI", "CGDB - Planner", 0, QApplication::UnicodeUTF8));
        neighborGeneratorGroup->setTitle(QApplication::translate("DBasePlannerDlgUI", "Neighbor Generator", 0, QApplication::UnicodeUTF8));
        getNeighborButton->setText(QApplication::translate("DBasePlannerDlgUI", "Get Neighbors", 0, QApplication::UnicodeUTF8));
        numOfNbrLabel->setText(QApplication::translate("DBasePlannerDlgUI", "Num. of Nbrs.", 0, QApplication::UnicodeUTF8));
        distanceFunctionLabel->setText(QApplication::translate("DBasePlannerDlgUI", "Dis. Func.", 0, QApplication::UnicodeUTF8));
        NeighborsLabel->setText(QApplication::translate("DBasePlannerDlgUI", "Neighbors", 0, QApplication::UnicodeUTF8));
        graspsGroup->setTitle(QApplication::translate("DBasePlannerDlgUI", "Selected Grasps", 0, QApplication::UnicodeUTF8));
        previousGraspButton->setText(QApplication::translate("DBasePlannerDlgUI", "<", 0, QApplication::UnicodeUTF8));
        nextGraspButton->setText(QApplication::translate("DBasePlannerDlgUI", ">", 0, QApplication::UnicodeUTF8));
        graspIndexLabel->setText(QApplication::translate("DBasePlannerDlgUI", "0/0", 0, QApplication::UnicodeUTF8));
        originalEpsilonQualityLabel->setText(QApplication::translate("DBasePlannerDlgUI", "Epsilon Quality: -1.0", 0, QApplication::UnicodeUTF8));
        originalVolumeQualityLabel->setText(QApplication::translate("DBasePlannerDlgUI", "Volume Quality: -1.0", 0, QApplication::UnicodeUTF8));
        seeNeighborCheckBox->setText(QApplication::translate("DBasePlannerDlgUI", "see neighbor in GraspIt", 0, QApplication::UnicodeUTF8));
        originalGraspRadioButton->setText(QApplication::translate("DBasePlannerDlgUI", "aligned original grasp", 0, QApplication::UnicodeUTF8));
        testedGraspRadioButton->setText(QApplication::translate("DBasePlannerDlgUI", "tested grasp", 0, QApplication::UnicodeUTF8));
        exitButton->setText(QApplication::translate("DBasePlannerDlgUI", "Exit", 0, QApplication::UnicodeUTF8));
        graspRankingGroup->setTitle(QApplication::translate("DBasePlannerDlgUI", "Grasp Ranking", 0, QApplication::UnicodeUTF8));
        rankingMethodComboBox->clear();
        rankingMethodComboBox->insertItems(0, QStringList()
         << QApplication::translate("DBasePlannerDlgUI", "No ranking", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DBasePlannerDlgUI", "Across neighbors", 0, QApplication::UnicodeUTF8)
        );
        rankingMethodLabel->setText(QApplication::translate("DBasePlannerDlgUI", "Ranking Method", 0, QApplication::UnicodeUTF8));
        rankGraspsButton->setText(QApplication::translate("DBasePlannerDlgUI", "Rank Grasps", 0, QApplication::UnicodeUTF8));
        retrieveGraspsButton->setText(QApplication::translate("DBasePlannerDlgUI", "Retrieve Grasps", 0, QApplication::UnicodeUTF8));
        rankingMethodLabel_2->setText(QApplication::translate("DBasePlannerDlgUI", "Retrival", 0, QApplication::UnicodeUTF8));
        executionGroup->setTitle(QApplication::translate("DBasePlannerDlgUI", "Grasp Execution", 0, QApplication::UnicodeUTF8));
        executionTypeComboBox->clear();
        executionTypeComboBox->insertItems(0, QStringList()
         << QApplication::translate("DBasePlannerDlgUI", "Static", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DBasePlannerDlgUI", "Dynamic", 0, QApplication::UnicodeUTF8)
        );
        executeButton->setText(QApplication::translate("DBasePlannerDlgUI", "Execute", 0, QApplication::UnicodeUTF8));
        graspRangeComboBox->clear();
        graspRangeComboBox->insertItems(0, QStringList()
         << QApplication::translate("DBasePlannerDlgUI", "Test current", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DBasePlannerDlgUI", "Test all", 0, QApplication::UnicodeUTF8)
        );
        testedVolumeQualityLabel->setText(QApplication::translate("DBasePlannerDlgUI", "Volume Quality: -1.0", 0, QApplication::UnicodeUTF8));
        testedEpsilonQualityLabel->setText(QApplication::translate("DBasePlannerDlgUI", "Epsilon Quality: -1.0", 0, QApplication::UnicodeUTF8));
        createGWSButton->setText(QApplication::translate("DBasePlannerDlgUI", "GWS", 0, QApplication::UnicodeUTF8));
        alignmentMethodGroup->setTitle(QApplication::translate("DBasePlannerDlgUI", "Alignments", 0, QApplication::UnicodeUTF8));
        alignmentMethodComboBox->clear();
        alignmentMethodComboBox->insertItems(0, QStringList()
         << QApplication::translate("DBasePlannerDlgUI", "TRIMESH_LIB_PCA", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DBasePlannerDlgUI", "SIFT_PI_ICP_FULL", 0, QApplication::UnicodeUTF8)
        );
        alignmentMethodLabel->setText(QApplication::translate("DBasePlannerDlgUI", "Alignment method", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DBasePlannerDlgUI: public Ui_DBasePlannerDlgUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBASEPLANNERDLG_H
