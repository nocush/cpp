/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1009, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_add = new QLabel(centralwidget);
        label_add->setObjectName(QStringLiteral("label_add"));
        label_add->setGeometry(QRect(0, 0, 121, 16));
        mark = new QLineEdit(centralwidget);
        mark->setObjectName(QStringLiteral("mark"));
        mark->setGeometry(QRect(0, 40, 113, 24));
        label_mark = new QLabel(centralwidget);
        label_mark->setObjectName(QStringLiteral("label_mark"));
        label_mark->setGeometry(QRect(0, 20, 49, 16));
        model = new QLineEdit(centralwidget);
        model->setObjectName(QStringLiteral("model"));
        model->setGeometry(QRect(0, 90, 113, 24));
        label_model = new QLabel(centralwidget);
        label_model->setObjectName(QStringLiteral("label_model"));
        label_model->setGeometry(QRect(0, 70, 49, 16));
        year = new QLineEdit(centralwidget);
        year->setObjectName(QStringLiteral("year"));
        year->setGeometry(QRect(0, 140, 113, 24));
        label_nrVIN = new QLabel(centralwidget);
        label_nrVIN->setObjectName(QStringLiteral("label_nrVIN"));
        label_nrVIN->setGeometry(QRect(0, 170, 71, 16));
        nrVIN = new QLineEdit(centralwidget);
        nrVIN->setObjectName(QStringLiteral("nrVIN"));
        nrVIN->setGeometry(QRect(0, 190, 113, 24));
        label_year = new QLabel(centralwidget);
        label_year->setObjectName(QStringLiteral("label_year"));
        label_year->setGeometry(QRect(0, 120, 81, 16));
        button_addCar = new QPushButton(centralwidget);
        button_addCar->setObjectName(QStringLiteral("button_addCar"));
        button_addCar->setGeometry(QRect(10, 230, 80, 24));
        button_show_all = new QPushButton(centralwidget);
        button_show_all->setObjectName(QStringLiteral("button_show_all"));
        button_show_all->setGeometry(QRect(170, 130, 91, 24));
        output = new QTextEdit(centralwidget);
        output->setObjectName(QStringLiteral("output"));
        output->setEnabled(false);
        output->setGeometry(QRect(350, 0, 261, 171));
        label_older = new QLabel(centralwidget);
        label_older->setObjectName(QStringLiteral("label_older"));
        label_older->setGeometry(QRect(130, 50, 91, 20));
        older = new QLineEdit(centralwidget);
        older->setObjectName(QStringLiteral("older"));
        older->setGeometry(QRect(130, 70, 113, 24));
        button_older = new QPushButton(centralwidget);
        button_older->setObjectName(QStringLiteral("button_older"));
        button_older->setGeometry(QRect(250, 70, 80, 24));
        label_remove = new QLabel(centralwidget);
        label_remove->setObjectName(QStringLiteral("label_remove"));
        label_remove->setGeometry(QRect(130, 0, 181, 16));
        remove = new QLineEdit(centralwidget);
        remove->setObjectName(QStringLiteral("remove"));
        remove->setGeometry(QRect(130, 20, 113, 24));
        button_remove = new QPushButton(centralwidget);
        button_remove->setObjectName(QStringLiteral("button_remove"));
        button_remove->setGeometry(QRect(250, 20, 80, 24));
        button_sortRok = new QPushButton(centralwidget);
        button_sortRok->setObjectName(QStringLiteral("button_sortRok"));
        button_sortRok->setGeometry(QRect(170, 160, 91, 24));
        button_sortMark = new QPushButton(centralwidget);
        button_sortMark->setObjectName(QStringLiteral("button_sortMark"));
        button_sortMark->setGeometry(QRect(170, 190, 91, 24));
        nazwa = new QLineEdit(centralwidget);
        nazwa->setObjectName(QStringLiteral("nazwa"));
        nazwa->setGeometry(QRect(630, 50, 113, 24));
        label_liczba = new QLabel(centralwidget);
        label_liczba->setObjectName(QStringLiteral("label_liczba"));
        label_liczba->setGeometry(QRect(630, 80, 101, 16));
        liczba = new QLineEdit(centralwidget);
        liczba->setObjectName(QStringLiteral("liczba"));
        liczba->setGeometry(QRect(630, 100, 113, 24));
        label_add_kraj = new QLabel(centralwidget);
        label_add_kraj->setObjectName(QStringLiteral("label_add_kraj"));
        label_add_kraj->setGeometry(QRect(630, 10, 121, 16));
        label_nazwa = new QLabel(centralwidget);
        label_nazwa->setObjectName(QStringLiteral("label_nazwa"));
        label_nazwa->setGeometry(QRect(630, 30, 49, 16));
        button_add_kraj = new QPushButton(centralwidget);
        button_add_kraj->setObjectName(QStringLiteral("button_add_kraj"));
        button_add_kraj->setGeometry(QRect(650, 130, 80, 24));
        button_show_all_kraje = new QPushButton(centralwidget);
        button_show_all_kraje->setObjectName(QStringLiteral("button_show_all_kraje"));
        button_show_all_kraje->setGeometry(QRect(640, 160, 91, 24));
        button_show_kraje = new QPushButton(centralwidget);
        button_show_kraje->setObjectName(QStringLiteral("button_show_kraje"));
        button_show_kraje->setGeometry(QRect(630, 190, 101, 24));
        label_do = new QLabel(centralwidget);
        label_do->setObjectName(QStringLiteral("label_do"));
        label_do->setGeometry(QRect(790, 80, 49, 16));
        label_od = new QLabel(centralwidget);
        label_od->setObjectName(QStringLiteral("label_od"));
        label_od->setGeometry(QRect(790, 30, 49, 16));
        zakres_od = new QLineEdit(centralwidget);
        zakres_od->setObjectName(QStringLiteral("zakres_od"));
        zakres_od->setGeometry(QRect(790, 50, 113, 24));
        zakres_do = new QLineEdit(centralwidget);
        zakres_do->setObjectName(QStringLiteral("zakres_do"));
        zakres_do->setGeometry(QRect(790, 100, 113, 24));
        label_find = new QLabel(centralwidget);
        label_find->setObjectName(QStringLiteral("label_find"));
        label_find->setGeometry(QRect(790, 10, 121, 16));
        button_find = new QPushButton(centralwidget);
        button_find->setObjectName(QStringLiteral("button_find"));
        button_find->setGeometry(QRect(790, 130, 101, 24));
        button_remove_kraj = new QPushButton(centralwidget);
        button_remove_kraj->setObjectName(QStringLiteral("button_remove_kraj"));
        button_remove_kraj->setGeometry(QRect(870, 180, 80, 24));
        remove_kraj = new QLineEdit(centralwidget);
        remove_kraj->setObjectName(QStringLiteral("remove_kraj"));
        remove_kraj->setGeometry(QRect(750, 180, 113, 24));
        label_remove_kraj = new QLabel(centralwidget);
        label_remove_kraj->setObjectName(QStringLiteral("label_remove_kraj"));
        label_remove_kraj->setGeometry(QRect(750, 160, 181, 16));
        button_sort_rosn = new QPushButton(centralwidget);
        button_sort_rosn->setObjectName(QStringLiteral("button_sort_rosn"));
        button_sort_rosn->setGeometry(QRect(640, 220, 91, 24));
        button_sort_mal = new QPushButton(centralwidget);
        button_sort_mal->setObjectName(QStringLiteral("button_sort_mal"));
        button_sort_mal->setGeometry(QRect(640, 250, 91, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1009, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_add->setText(QApplication::translate("MainWindow", "Dodanie nowego auta", Q_NULLPTR));
        label_mark->setText(QApplication::translate("MainWindow", "Marka", Q_NULLPTR));
        model->setText(QString());
        label_model->setText(QApplication::translate("MainWindow", "Model", Q_NULLPTR));
        year->setText(QString());
        label_nrVIN->setText(QApplication::translate("MainWindow", "Numer VIN", Q_NULLPTR));
        nrVIN->setText(QString());
        label_year->setText(QApplication::translate("MainWindow", "Rok produkcji", Q_NULLPTR));
        button_addCar->setText(QApplication::translate("MainWindow", "Dodaj auto", Q_NULLPTR));
        button_show_all->setText(QApplication::translate("MainWindow", "Pokaz wszystkie", Q_NULLPTR));
        label_older->setText(QApplication::translate("MainWindow", "Starsze od:", Q_NULLPTR));
        button_older->setText(QApplication::translate("MainWindow", "Policz", Q_NULLPTR));
        label_remove->setText(QApplication::translate("MainWindow", "Usuniecie auta po numeru VIN", Q_NULLPTR));
        button_remove->setText(QApplication::translate("MainWindow", "Usun", Q_NULLPTR));
        button_sortRok->setText(QApplication::translate("MainWindow", "SortRok", Q_NULLPTR));
        button_sortMark->setText(QApplication::translate("MainWindow", "SortMark", Q_NULLPTR));
        label_liczba->setText(QApplication::translate("MainWindow", "Liczba ludnosci", Q_NULLPTR));
        liczba->setText(QString());
        label_add_kraj->setText(QApplication::translate("MainWindow", "Dodanie nowego kraju", Q_NULLPTR));
        label_nazwa->setText(QApplication::translate("MainWindow", "Nazwa", Q_NULLPTR));
        button_add_kraj->setText(QApplication::translate("MainWindow", "Dodaj kraj", Q_NULLPTR));
        button_show_all_kraje->setText(QApplication::translate("MainWindow", "Pokaz wszystkie", Q_NULLPTR));
        button_show_kraje->setText(QApplication::translate("MainWindow", "Pokaz tylko kraje", Q_NULLPTR));
        label_do->setText(QApplication::translate("MainWindow", "Do:", Q_NULLPTR));
        label_od->setText(QApplication::translate("MainWindow", "Od:", Q_NULLPTR));
        zakres_do->setText(QString());
        label_find->setText(QApplication::translate("MainWindow", "Wyszukanie z zakersu", Q_NULLPTR));
        button_find->setText(QApplication::translate("MainWindow", "Wyszukaj", Q_NULLPTR));
        button_remove_kraj->setText(QApplication::translate("MainWindow", "Usun", Q_NULLPTR));
        remove_kraj->setText(QString());
        label_remove_kraj->setText(QApplication::translate("MainWindow", "Usuniecie kraju po nazwie", Q_NULLPTR));
        button_sort_rosn->setText(QApplication::translate("MainWindow", "Rosnaco", Q_NULLPTR));
        button_sort_mal->setText(QApplication::translate("MainWindow", "Malejaco", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
