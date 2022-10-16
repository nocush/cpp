#include "TeamLeader.h"

TeamLeader::TeamLeader() {
	cout << "Konstruktor klasy TeamLeader" << endl;
}
TeamLeader::TeamLeader(string surname1, int age1, int experience1, float salary1, float bonus1) : Employee(surname1, age1, experience1, salary1){}

TeamLeader::~TeamLeader() {
	cout << "Destruktor klasy TeamLeader" << endl;
}
float TeamLeader::calculateBonus(int value) {
	float temp = value * (1 + getSalary() + getExperience());
	setBonus(temp);
}

int TeamLeader::calculateSalary(float value) {
	return getSalary() + value;
}

void TeamLeader::show() {
	cout << "Jestem Team Leader z " << getExperience() << " letnim doœwiadczeniem" << endl;
}