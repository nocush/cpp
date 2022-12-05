#include "Lawka.h"
#include <iostream>
using namespace std;

Lawka::Lawka(float weight, int legs)  {
	setWeight(weight);
	setLegs(legs);

}

float Lawka::oblicz_koszt() {
	float koszt = 0;
	koszt = 20 + getWeight() * 4;
	return koszt;
}

void Lawka::show() {
	cout << "Ilosc nog w lawce: " << getLegs() << endl;
}