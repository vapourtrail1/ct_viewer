/********************************************************************************
** Form generated from reading UI file 'viewer01.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWER01_H
#define UI_VIEWER01_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_viewer01Class
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *viewer01Class)
    {
        if (viewer01Class->objectName().isEmpty())
            viewer01Class->setObjectName(QString::fromUtf8("viewer01Class"));
        viewer01Class->resize(912, 545);
        centralWidget = new QWidget(viewer01Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 120, 80, 20));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 150, 80, 20));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(350, 190, 80, 20));
        viewer01Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(viewer01Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 912, 22));
        viewer01Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(viewer01Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        viewer01Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(viewer01Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        viewer01Class->setStatusBar(statusBar);

        retranslateUi(viewer01Class);

        QMetaObject::connectSlotsByName(viewer01Class);
    } // setupUi

    void retranslateUi(QMainWindow *viewer01Class)
    {
        viewer01Class->setWindowTitle(QCoreApplication::translate("viewer01Class", "viewer01", nullptr));
        pushButton->setText(QCoreApplication::translate("viewer01Class", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("viewer01Class", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("viewer01Class", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewer01Class: public Ui_viewer01Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWER01_H
