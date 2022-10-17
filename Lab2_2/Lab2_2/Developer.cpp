#include "Developer.h"

Developer::Developer() {
	cout << "Konsstruktor klasy Developer" << endl;
}

Developer::Developer(string surname1, int age1, int experience1, float salary1, float bonus1) : Employee(surname1, age1, experience1, salary1, bonus1){
	cout << "Konstruktor klasy Developer" << endl;
}

Developer::~Developer() {
	cout << "Destruktor klasy Developer" << endl;
}

float Developer::calculateBonus(int value) {
	float temp = value + (0.2 * value * (getSalary() + getExperience()));
	return temp;
}

float Developer::calculateSalary(float value) {
	return getSalary() + value;
}


