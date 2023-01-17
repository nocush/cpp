#ifndef CATALOG_H
#define CATALOG_H

#include <iostream>
#include <QVector>
#include <QtAlgorithms>
#include <algorithm>
#include <QtSql>
#include <QDebug>
#include "Car.h"

using namespace std;

static bool createConnection(){
QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
db.setHostName("localhost");
db.setUserName("root");
db.setPassword("");
db.setDatabaseName("cpp");
if(db.open()){
    qDebug()<<"Polaczono z "<<db.hostName();
    return true;
}else{
    qDebug()<<"Connection FAILED";
    return false;
}
}


class Catalog {
private:
    QVector<Car> cars;
public:
    void addCar(Car c)
    {
        QSqlQuery qry;
        qry.prepare("INSERT INTO cars ("
                    "Mark,"
                    "Model,"
                    "Year,"
                    "Vin)"
                    "VALUES (?,?,?,?);");
        qry.addBindValue(QString::fromStdString(c.getMark()));
        qry.addBindValue(QString::fromStdString(c.getModel()));
        qry.addBindValue(c.getYearOfProduction());
        qry.addBindValue(QString::fromStdString(c.getNrVIN()));

        if(!qry.exec()){
            qDebug()<<"Error adding values to database";
        }

    }
    string showCars()
    {
        string output = "";
        for(auto c : cars)
        {
            output += c.show();
        }
        return output;
    }
    int countOlder(int year)
    {
        return count_if(cars.begin(), cars.end(), [year](Car c){return c.getYearOfProduction() > year;});
    }
    void removeCar(string nrVIN)
    {
        cars.removeIf([nrVIN](Car c){return c.getNrVIN() == nrVIN;});
    }
    string showSortedByYearOfProduction()
    {
        string output = "";
        auto ccars = cars;
        sort(ccars.begin(), ccars.end(), [](Car c1, Car c2){return c1.getYearOfProduction() > c2.getYearOfProduction();});
        for(auto c : ccars)
        {
            output += c.show();
        }
        return output;
    }
    string showSortedByMark()
    {
        string output = "";
        auto ccars = cars;
        sort(ccars.begin(), ccars.end(), [](Car c1, Car c2){return c1.getMark().compare(c2.getMark());});
        for(auto c : ccars)
        {
            output += c.show();
        }
        return output;
    }
};

#endif // CATALOG_H
