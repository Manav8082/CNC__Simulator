/********************************************************************************
** Form generated from reading UI file 'CNC_Simulator.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CNC_SIMULATOR_H
#define UI_CNC_SIMULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CNC_SimulatorClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CNC_SimulatorClass)
    {
        if (CNC_SimulatorClass->objectName().isEmpty())
            CNC_SimulatorClass->setObjectName(QString::fromUtf8("CNC_SimulatorClass"));
        CNC_SimulatorClass->resize(600, 400);
        menuBar = new QMenuBar(CNC_SimulatorClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        CNC_SimulatorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CNC_SimulatorClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        CNC_SimulatorClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(CNC_SimulatorClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        CNC_SimulatorClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(CNC_SimulatorClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        CNC_SimulatorClass->setStatusBar(statusBar);

        retranslateUi(CNC_SimulatorClass);

        QMetaObject::connectSlotsByName(CNC_SimulatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *CNC_SimulatorClass)
    {
        CNC_SimulatorClass->setWindowTitle(QApplication::translate("CNC_SimulatorClass", "CNC_Simulator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CNC_SimulatorClass: public Ui_CNC_SimulatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CNC_SIMULATOR_H
