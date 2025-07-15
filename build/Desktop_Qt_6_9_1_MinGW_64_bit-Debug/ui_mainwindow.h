/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *input1;
    QLineEdit *input2;
    QLineEdit *return_2;
    QRadioButton *radioAdd;
    QRadioButton *radioSub;
    QRadioButton *radioMult;
    QRadioButton *radioDiv;
    QPushButton *pushEquals;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QButtonGroup *operatorSelect;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(413, 306);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 50, 81, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(270, 50, 101, 16));
        input1 = new QLineEdit(centralwidget);
        input1->setObjectName("input1");
        input1->setGeometry(QRect(50, 90, 113, 24));
        input2 = new QLineEdit(centralwidget);
        input2->setObjectName("input2");
        input2->setGeometry(QRect(260, 90, 113, 24));
        return_2 = new QLineEdit(centralwidget);
        return_2->setObjectName("return_2");
        return_2->setGeometry(QRect(100, 210, 231, 24));
        return_2->setReadOnly(true);
        radioAdd = new QRadioButton(centralwidget);
        operatorSelect = new QButtonGroup(MainWindow);
        operatorSelect->setObjectName("operatorSelect");
        operatorSelect->addButton(radioAdd);
        radioAdd->setObjectName("radioAdd");
        radioAdd->setGeometry(QRect(200, 60, 41, 21));
        radioSub = new QRadioButton(centralwidget);
        operatorSelect->addButton(radioSub);
        radioSub->setObjectName("radioSub");
        radioSub->setGeometry(QRect(200, 80, 41, 21));
        radioMult = new QRadioButton(centralwidget);
        operatorSelect->addButton(radioMult);
        radioMult->setObjectName("radioMult");
        radioMult->setGeometry(QRect(200, 100, 41, 21));
        radioDiv = new QRadioButton(centralwidget);
        operatorSelect->addButton(radioDiv);
        radioDiv->setObjectName("radioDiv");
        radioDiv->setGeometry(QRect(200, 120, 41, 21));
        pushEquals = new QPushButton(centralwidget);
        pushEquals->setObjectName("pushEquals");
        pushEquals->setGeometry(QRect(170, 160, 71, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 413, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "First Number", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Second Number", nullptr));
        radioAdd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        radioSub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        radioMult->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        radioDiv->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushEquals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
