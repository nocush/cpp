#include "Stol.h"
#include <iostream>
using namespace std;

Stol::Stol(float weight, int legs) {
	setWeight(weight);
	setLegs(legs);

}

float Stol::oblicz_koszt() {
	float koszt = 0;
	koszt = 50 + getWeight() * 2;
	return koszt;
}

void Stol::show() {
	cout << "Ilosc nog w stole: " << getLegs() << endl;
}