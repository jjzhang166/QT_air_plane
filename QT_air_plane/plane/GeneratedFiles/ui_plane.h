/********************************************************************************
** Form generated from reading UI file 'plane.ui'
**
** Created: Mon Sep 16 08:48:20 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLANE_H
#define UI_PLANE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_planeClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *planeClass)
    {
        if (planeClass->objectName().isEmpty())
            planeClass->setObjectName(QString::fromUtf8("planeClass"));
        planeClass->resize(600, 400);
        menuBar = new QMenuBar(planeClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        planeClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(planeClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        planeClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(planeClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        planeClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(planeClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        planeClass->setStatusBar(statusBar);

        retranslateUi(planeClass);

        QMetaObject::connectSlotsByName(planeClass);
    } // setupUi

    void retranslateUi(QMainWindow *planeClass)
    {
        planeClass->setWindowTitle(QApplication::translate("planeClass", "plane", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class planeClass: public Ui_planeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANE_H
