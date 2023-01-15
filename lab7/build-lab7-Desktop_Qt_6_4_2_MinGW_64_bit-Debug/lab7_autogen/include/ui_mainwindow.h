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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_add;
    QLineEdit *mark;
    QLabel *label_mark;
    QLineEdit *model;
    QLabel *label_model;
    QLineEdit *year;
    QLabel *label_nrVIN;
    QLineEdit *nrVIN;
    QLabel *label_year;
    QPushButton *button_addCar;
    QPushButton *button_show_all;
    QTextEdit *output;
    QLabel *label_older;
    QLineEdit *older;
    QPushButton *button_older;
    QLabel *label_remove;
    QLineEdit *remove;
    QPushButton *button_remove;
    QPushButton *button_sortRok;
    QPushButton *button_sortMark;
    QLineEdit *nazwa;
    QLabel *label_liczba;
    QLineEdit *liczba;
    QLabel *label_add_kraj;
    QLabel *label_nazwa;
    QPushButton *button_add_kraj;
    QPushButton *button_show_all_kraje;
    QPushButton *button_show_kraje;
    QLabel *label_do;
    QLabel *label_od;
    QLineEdit *zakres_od;
    QLineEdit *zakres_do;
    QLabel *label_find;
    QPushButton *button_find;
    QPushButton *button_remove_kraj;
    QLineEdit *remove_kraj;
    QLabel *label_remove_kraj;
    QPushButton *button_sort_rosn;
    QPushButton *button_sort_mal;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1009, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_add = new QLabel(centralwidget);
        label_add->setObjectName("label_add");
        label_add->setGeometry(QRect(0, 0, 121, 16));
        mark = new QLineEdit(centralwidget);
        mark->setObjectName("mark");
        mark->setGeometry(QRect(0, 40, 113, 24));
        label_mark = new QLabel(centralwidget);
        label_mark->setObjectName("label_mark");
        label_mark->setGeometry(QRect(0, 20, 49, 16));
        model = new QLineEdit(centralwidget);
        model->setObjectName("model");
        model->setGeometry(QRect(0, 90, 113, 24));
        label_model = new QLabel(centralwidget);
        label_model->setObjectName("label_model");
        label_model->setGeometry(QRect(0, 70, 49, 16));
        year = new QLineEdit(centralwidget);
        year->setObjectName("year");
        year->setGeometry(QRect(0, 140, 113, 24));
        label_nrVIN = new QLabel(centralwidget);
        label_nrVIN->setObjectName("label_nrVIN");
        label_nrVIN->setGeometry(QRect(0, 170, 71, 16));
        nrVIN = new QLineEdit(centralwidget);
        nrVIN->setObjectName("nrVIN");
        nrVIN->setGeometry(QRect(0, 190, 113, 24));
        label_year = new QLabel(centralwidget);
        label_year->setObjectName("label_year");
        label_year->setGeometry(QRect(0, 120, 81, 16));
        button_addCar = new QPushButton(centralwidget);
        button_addCar->setObjectName("button_addCar");
        button_addCar->setGeometry(QRect(10, 230, 80, 24));
        button_show_all = new QPushButton(centralwidget);
        button_show_all->setObjectName("button_show_all");
        button_show_all->setGeometry(QRect(170, 130, 91, 24));
        output = new QTextEdit(centralwidget);
        output->setObjectName("output");
        output->setEnabled(false);
        output->setGeometry(QRect(350, 0, 261, 171));
        label_older = new QLabel(centralwidget);
        label_older->setObjectName("label_older");
        label_older->setGeometry(QRect(130, 50, 91, 20));
        older = new QLineEdit(centralwidget);
        older->setObjectName("older");
        older->setGeometry(QRect(130, 70, 113, 24));
        button_older = new QPushButton(centralwidget);
        button_older->setObjectName("button_older");
        button_older->setGeometry(QRect(250, 70, 80, 24));
        label_remove = new QLabel(centralwidget);
        label_remove->setObjectName("label_remove");
        label_remove->setGeometry(QRect(130, 0, 181, 16));
        remove = new QLineEdit(centralwidget);
        remove->setObjectName("remove");
        remove->setGeometry(QRect(130, 20, 113, 24));
        button_remove = new QPushButton(centralwidget);
        button_remove->setObjectName("button_remove");
        button_remove->setGeometry(QRect(250, 20, 80, 24));
        button_sortRok = new QPushButton(centralwidget);
        button_sortRok->setObjectName("button_sortRok");
        button_sortRok->setGeometry(QRect(170, 160, 91, 24));
        button_sortMark = new QPushButton(centralwidget);
        button_sortMark->setObjectName("button_sortMark");
        button_sortMark->setGeometry(QRect(170, 190, 91, 24));
        nazwa = new QLineEdit(centralwidget);
        nazwa->setObjectName("nazwa");
        nazwa->setGeometry(QRect(630, 50, 113, 24));
        label_liczba = new QLabel(centralwidget);
        label_liczba->setObjectName("label_liczba");
        label_liczba->setGeometry(QRect(630, 80, 101, 16));
        liczba = new QLineEdit(centralwidget);
        liczba->setObjectName("liczba");
        liczba->setGeometry(QRect(630, 100, 113, 24));
        label_add_kraj = new QLabel(centralwidget);
        label_add_kraj->setObjectName("label_add_kraj");
        label_add_kraj->setGeometry(QRect(630, 10, 121, 16));
        label_nazwa = new QLabel(centralwidget);
        label_nazwa->setObjectName("label_nazwa");
        label_nazwa->setGeometry(QRect(630, 30, 49, 16));
        button_add_kraj = new QPushButton(centralwidget);
        button_add_kraj->setObjectName("button_add_kraj");
        button_add_kraj->setGeometry(QRect(650, 130, 80, 24));
        button_show_all_kraje = new QPushButton(centralwidget);
        button_show_all_kraje->setObjectName("button_show_all_kraje");
        button_show_all_kraje->setGeometry(QRect(640, 160, 91, 24));
        button_show_kraje = new QPushButton(centralwidget);
        button_show_kraje->setObjectName("button_show_kraje");
        button_show_kraje->setGeometry(QRect(630, 190, 101, 24));
        label_do = new QLabel(centralwidget);
        label_do->setObjectName("label_do");
        label_do->setGeometry(QRect(790, 80, 49, 16));
        label_od = new QLabel(centralwidget);
        label_od->setObjectName("label_od");
        label_od->setGeometry(QRect(790, 30, 49, 16));
        zakres_od = new QLineEdit(centralwidget);
        zakres_od->setObjectName("zakres_od");
        zakres_od->setGeometry(QRect(790, 50, 113, 24));
        zakres_do = new QLineEdit(centralwidget);
        zakres_do->setObjectName("zakres_do");
        zakres_do->setGeometry(QRect(790, 100, 113, 24));
        label_find = new QLabel(centralwidget);
        label_find->setObjectName("label_find");
        label_find->setGeometry(QRect(790, 10, 121, 16));
        button_find = new QPushButton(centralwidget);
        button_find->setObjectName("button_find");
        button_find->setGeometry(QRect(790, 130, 101, 24));
        button_remove_kraj = new QPushButton(centralwidget);
        button_remove_kraj->setObjectName("button_remove_kraj");
        button_remove_kraj->setGeometry(QRect(870, 180, 80, 24));
        remove_kraj = new QLineEdit(centralwidget);
        remove_kraj->setObjectName("remove_kraj");
        remove_kraj->setGeometry(QRect(750, 180, 113, 24));
        label_remove_kraj = new QLabel(centralwidget);
        label_remove_kraj->setObjectName("label_remove_kraj");
        label_remove_kraj->setGeometry(QRect(750, 160, 181, 16));
        button_sort_rosn = new QPushButton(centralwidget);
        button_sort_rosn->setObjectName("button_sort_rosn");
        button_sort_rosn->setGeometry(QRect(640, 220, 91, 24));
        button_sort_mal = new QPushButton(centralwidget);
        button_sort_mal->setObjectName("button_sort_mal");
        button_sort_mal->setGeometry(QRect(640, 250, 91, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1009, 21));
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
        label_add->setText(QCoreApplication::translate("MainWindow", "Dodanie nowego auta", nullptr));
        label_mark->setText(QCoreApplication::translate("MainWindow", "Marka", nullptr));
        model->setText(QString());
        label_model->setText(QCoreApplication::translate("MainWindow", "Model", nullptr));
        year->setText(QString());
        label_nrVIN->setText(QCoreApplication::translate("MainWindow", "Numer VIN", nullptr));
        nrVIN->setText(QString());
        label_year->setText(QCoreApplication::translate("MainWindow", "Rok produkcji", nullptr));
        button_addCar->setText(QCoreApplication::translate("MainWindow", "Dodaj auto", nullptr));
        button_show_all->setText(QCoreApplication::translate("MainWindow", "Pokaz wszystkie", nullptr));
        label_older->setText(QCoreApplication::translate("MainWindow", "Starsze od:", nullptr));
        button_older->setText(QCoreApplication::translate("MainWindow", "Policz", nullptr));
        label_remove->setText(QCoreApplication::translate("MainWindow", "Usuniecie auta po numeru VIN", nullptr));
        button_remove->setText(QCoreApplication::translate("MainWindow", "Usun", nullptr));
        button_sortRok->setText(QCoreApplication::translate("MainWindow", "SortRok", nullptr));
        button_sortMark->setText(QCoreApplication::translate("MainWindow", "SortMark", nullptr));
        label_liczba->setText(QCoreApplication::translate("MainWindow", "Liczba ludnosci", nullptr));
        liczba->setText(QString());
        label_add_kraj->setText(QCoreApplication::translate("MainWindow", "Dodanie nowego kraju", nullptr));
        label_nazwa->setText(QCoreApplication::translate("MainWindow", "Nazwa", nullptr));
        button_add_kraj->setText(QCoreApplication::translate("MainWindow", "Dodaj kraj", nullptr));
        button_show_all_kraje->setText(QCoreApplication::translate("MainWindow", "Pokaz wszystkie", nullptr));
        button_show_kraje->setText(QCoreApplication::translate("MainWindow", "Pokaz tylko kraje", nullptr));
        label_do->setText(QCoreApplication::translate("MainWindow", "Do:", nullptr));
        label_od->setText(QCoreApplication::translate("MainWindow", "Od:", nullptr));
        zakres_do->setText(QString());
        label_find->setText(QCoreApplication::translate("MainWindow", "Wyszukanie z zakersu", nullptr));
        button_find->setText(QCoreApplication::translate("MainWindow", "Wyszukaj", nullptr));
        button_remove_kraj->setText(QCoreApplication::translate("MainWindow", "Usun", nullptr));
        remove_kraj->setText(QString());
        label_remove_kraj->setText(QCoreApplication::translate("MainWindow", "Usuniecie kraju po nazwie", nullptr));
        button_sort_rosn->setText(QCoreApplication::translate("MainWindow", "Rosnaco", nullptr));
        button_sort_mal->setText(QCoreApplication::translate("MainWindow", "Malejaco", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
