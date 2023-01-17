/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTableView *table;
    QLineEdit *mark;
    QLabel *label;
    QLabel *Marka;
    QLabel *label_2;
    QLineEdit *model;
    QLabel *label_3;
    QLineEdit *year;
    QLabel *label_4;
    QLineEdit *nrVin;
    QPushButton *button_addCar;
    QLabel *label_5;
    QLineEdit *remove;
    QPushButton *button_remove;
    QPushButton *button_younger;
    QLabel *label_6;
    QLineEdit *younger;
    QPushButton *button_show_all;
    QPushButton *button_sortRok;
    QPushButton *button_sortMark;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 455);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        table = new QTableView(centralwidget);
        table->setObjectName("table");
        table->setGeometry(QRect(360, 40, 421, 351));
        mark = new QLineEdit(centralwidget);
        mark->setObjectName("mark");
        mark->setGeometry(QRect(10, 60, 113, 24));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 121, 16));
        Marka = new QLabel(centralwidget);
        Marka->setObjectName("Marka");
        Marka->setGeometry(QRect(10, 40, 49, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 90, 49, 16));
        model = new QLineEdit(centralwidget);
        model->setObjectName("model");
        model->setGeometry(QRect(10, 110, 113, 24));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 140, 81, 16));
        year = new QLineEdit(centralwidget);
        year->setObjectName("year");
        year->setGeometry(QRect(10, 160, 113, 24));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 190, 61, 16));
        nrVin = new QLineEdit(centralwidget);
        nrVin->setObjectName("nrVin");
        nrVin->setGeometry(QRect(10, 210, 113, 24));
        button_addCar = new QPushButton(centralwidget);
        button_addCar->setObjectName("button_addCar");
        button_addCar->setGeometry(QRect(20, 250, 80, 24));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(150, 40, 171, 16));
        remove = new QLineEdit(centralwidget);
        remove->setObjectName("remove");
        remove->setGeometry(QRect(150, 60, 111, 24));
        button_remove = new QPushButton(centralwidget);
        button_remove->setObjectName("button_remove");
        button_remove->setGeometry(QRect(270, 60, 61, 24));
        button_younger = new QPushButton(centralwidget);
        button_younger->setObjectName("button_younger");
        button_younger->setGeometry(QRect(270, 110, 61, 24));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(150, 90, 171, 16));
        younger = new QLineEdit(centralwidget);
        younger->setObjectName("younger");
        younger->setGeometry(QRect(150, 110, 111, 24));
        button_show_all = new QPushButton(centralwidget);
        button_show_all->setObjectName("button_show_all");
        button_show_all->setGeometry(QRect(180, 160, 101, 24));
        button_sortRok = new QPushButton(centralwidget);
        button_sortRok->setObjectName("button_sortRok");
        button_sortRok->setGeometry(QRect(180, 190, 101, 24));
        button_sortMark = new QPushButton(centralwidget);
        button_sortMark->setObjectName("button_sortMark");
        button_sortMark->setGeometry(QRect(180, 220, 101, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
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
        label->setText(QCoreApplication::translate("MainWindow", "Dodanie nowego auta", nullptr));
        Marka->setText(QCoreApplication::translate("MainWindow", "Marka", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Model", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Rok produkcji", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Numer VIN", nullptr));
        button_addCar->setText(QCoreApplication::translate("MainWindow", "Dodaj auto", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Usuniecie auta po numerze VIN", nullptr));
        button_remove->setText(QCoreApplication::translate("MainWindow", "Usun", nullptr));
        button_younger->setText(QCoreApplication::translate("MainWindow", "Policz", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Ile samochod\303\263w mlodszych od:", nullptr));
        button_show_all->setText(QCoreApplication::translate("MainWindow", "Pokaz wszystkie", nullptr));
        button_sortRok->setText(QCoreApplication::translate("MainWindow", "SortRok", nullptr));
        button_sortMark->setText(QCoreApplication::translate("MainWindow", "SortMark", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
