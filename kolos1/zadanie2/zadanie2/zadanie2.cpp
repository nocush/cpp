#include <iostream>
#include "Mebel.h"
#include "Lawka.h"
#include "Stol.h"
using namespace std;

void zamowienie(Mebel** meble, int n) {
    int sumanog = 0;
    float sumakoszt = 0;
    for (int i = 0; i < n; i++) {
        sumanog += meble[i]->getLegs();
        sumakoszt += meble[i]->oblicz_koszt();

    }
    cout << "Suma nog: " << sumanog << "\nKoszt zamowienia: " << sumakoszt << endl;
}
int main()
{
    Mebel** meble = new Mebel * [15];
    float temp = 200;
    for (int i = 0; i < 5; i++) {
        meble[i] = new Stol(temp,4);
        temp += 40;
    }
    for (int i = 5; i < 15; i++) {
        meble[i] = new Lawka(temp,6);
        temp += 60;
    }

    zamowienie(meble, 15);
}
