#include "Employee.h"

Employee::Employee() {
	cout << "Konstruktor klasy bazowej Employee" << endl;
}

Employee::Employee(string surname1, int age1, int experience1, float salary1) {
	surname = surname1;
	age = age1;
	salary = salary1;
	experience = experience1;
}

Employee::~Employee() {
	cout << "Destruktor klasy Employee" << endl;
}
void Employee::setSurname(string surname1) {
	surname = surname1;
}

string Employee::getSurname() {
	return surname;
}

void Employee::setAge(int age1) {
	age = age1;
}

int Employee::getAge() {
	return age;
}

void Employee::setExperience(int experience1) {
	experience = experience1;
}

int Employee::getExperience() {
	return experience;
}

void Employee::setSalary(float salary1) {
	salary = salary1;
}

float Employee::getSalary() {
	return salary;
}

int Employee::ageEmployment() {
	return age + experience;
}