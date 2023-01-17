#include "mainwindow.h"
#include "Catalog.h"
#include <QApplication>
#include <QCoreApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    createConnection();
    MainWindow w;
    w.show();
    return a.exec();
}
