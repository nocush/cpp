#include "TeamLeader.h"

TeamLeader::TeamLeader() {
	cout << "Konstruktor klasy TeamLeader" << endl;
}
TeamLeader::TeamLeader(string surname1, int age1, int experience1, float salary1, int bonus1) : Employee(surname1, age1, experience1, salary1, bonus1){
	cout << "Konstruktor klasy Teamleader" << endl;
}

TeamLeader::~TeamLeader() {
	cout << "Destruktor klasy TeamLeader" << endl;
}
float TeamLeader::calculateBonus(int value) {
	float temp = value * (1 + getSalary() + getExperience());
	return temp;
}

float TeamLeader::calculateSalary(float value) {
	return getSalary() + value;
}
