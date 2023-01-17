#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Car.h"
#include "Catalog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

Catalog c;

void MainWindow::on_button_addCar_clicked()
{
    c.addCar(Car(ui->mark->text().toStdString(), ui->model->text().toStdString(), ui->year->text().toInt(), ui->nrVin->text().toStdString()));
    on_button_show_all_clicked();
}


void MainWindow::on_button_show_all_clicked()
{
    QSqlQueryModel *modal = new QSqlQueryModel();
    QSqlQuery qry;
    qry.prepare("select * from cars");
    qry.exec();
    modal->setQuery(qry);
    ui->table->setModel(modal);
}


void MainWindow::on_button_sortRok_clicked()
{

}


void MainWindow::on_button_sortMark_clicked()
{

}


void MainWindow::on_button_younger_clicked()
{

}


void MainWindow::on_button_remove_clicked()
{

}

