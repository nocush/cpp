#include <vector>
#include <string>
#include <random>
#include <memory>
#include <iostream>
#include "Shop.h"
#include "Warehouse.h"

using namespace std;
int main()
{
    shared_ptr<Warehouse> warehouse1 = make_shared<Warehouse>("Cars", 30);
    shared_ptr<Warehouse> warehouse2 = make_shared<Warehouse>("Books", 800);
    shared_ptr<Warehouse> warehouse3 = make_shared<Warehouse>("Computers", 650);
    shared_ptr<Warehouse> warehouse4 = make_shared<Warehouse>("Animals", 400);
    shared_ptr<Warehouse> warehouse5 = make_shared<Warehouse>("Pianos", 65);

    vector<unique_ptr<Shop>> shops;
    shops.push_back(make_unique<Shop>("Shop 1"));
    shops.push_back(make_unique<Shop>("Shop 2"));

    shops[0]->addWarehouse(warehouse1);
    shops[1]->addWarehouse(warehouse1);
    shops[0]->addWarehouse(warehouse2);
    shops[1]->addWarehouse(warehouse3);
    shops[0]->addWarehouse(warehouse4);
    shops[1]->addWarehouse(warehouse4);
    shops[0]->addWarehouse(warehouse5);

    cout << endl;
    cout << "Shop 1 warehouses" << endl;
    shops[0]->printWarehouses();
    cout << "Shop 2 warehouses" << endl;
    shops[1]->printWarehouses();

    shops[0]->sellStock("Cars", 3);
    shops[1]->sellStock("Cars", 2);
    shops[0]->sellStock("Books", 250);
    shops[1]->sellStock("Computers", 55);
    shops[0]->sellStock("Animals", 75);
    shops[1]->sellStock("Animals", 25);
    shops[0]->sellStock("Pianos", 65);

    cout << endl;
    cout << "Shop 1 warehouses after sellout" << endl;
    shops[0]->printWarehouses();
    cout << "Shop 2 warehouses after sellout" << endl;
    shops[1]->printWarehouses();
}
