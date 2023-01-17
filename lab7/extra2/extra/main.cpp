#include "mainwindow.h"
#include <QDebug>
#include <QtSql>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    qDebug()<<QSqlDatabase::drivers();
    w.show();
    return a.exec();
}
