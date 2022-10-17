#include <iostream>
#include "Employee.h"
#include "Developer.h"
#include "TeamLeader.h"
void whoWorkMoreThan5Years(Employee* tab[], int n);
void howManyEarnLessThanMeanBonus(Employee* tab[], int n);
int main()
{
	Employee* e[4];
	e[0] = new Developer("Nowak", 30, 7, 4000, 3);
	e[1] = new TeamLeader("Kowalski", 40, 15, 6000, 2);
	e[2] = new Developer("Bartczak", 25, 4, 3500, 2);
	e[3] = new Developer("Marchewka", 23, 3, 3500, 3);
	e[3]->show();
	e[2]->show();
	e[1]->show();
	e[0]->show();
	cout << "=========================================================================" << endl;
	whoWorkMoreThan5Years(e, 4);
	cout << "=========================================================================" << endl;
	howManyEarnLessThanMeanBonus(e, 4);

	for (int i = 0; i < 4; i++) {
		delete e[i];
	}
	return 0;
}

void whoWorkMoreThan5Years(Employee* tab[], int n) {
	cout << "Osoby z ponad 5 letnim doswiadczeniem: " << endl;
	for (int i = 0; i < n; i++) {
		if (tab[i]->getExperience() > 5) {
			tab[i]->show();
		}
	}
}

void howManyEarnLessThanMeanBonus(Employee* tab[], int n) {
	double temp = 0;
	for (int i = 0; i < n; i++) {
		temp += tab[i]->calculateBonus(2);
	}
	temp /= n;
	cout << "Srednia: "<< temp << endl;

	for (int i = 0; i < n; i++) {
		if (tab[i]->getSalary() < temp) {
			tab[i]->show();
		}
	}
}