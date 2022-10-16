#include "Developer.h"

Developer::Developer() {
	cout << "Konsstruktor klasy Developer" << endl;
}

Developer::Developer(string surname1, int age1, int experience1, float salary, float bonus1) : Employee(surname1, age1, experience1, salary){}

Developer::~Developer() {
	cout << "Destruktor klasy Developer" << endl;
}

float Developer::calculateBonus(int value) {
	float temp = value + (0.2 * value * (getSalary() + getExperience()));
	setBonus(temp);
}

int Developer::calculateSalary(float value) {
	return getSalary() + value;
}

void Developer::show() {
	cout << "Nazwisko: " << getSurname() << " Wiek: " << getAge() << " Doœwiadczenie: " << getExperience() << " Zarobki: " << calculateSalary(getBonus()) << endl;
}
