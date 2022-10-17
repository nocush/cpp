#include <iostream>
#include "Employee.h"
#include "Developer.h"
#include "TeamLeader.h"
void whoWorkMoreThan5Years(Employee* tab[], int n);
void howManyEarnLessThanMeanBonus(Employee* tab[], int n);
int main()
{
	/*Employee** tab;
	tab = new Employee* [3];
	for (int i = 0; i < 3; i++) {
		tab[i] = new Developer("Kowalski", 20, 7, 4000, 0);
		tab[i]->setBonus(i+1);
		tab[i]->show();
	}*/
	int a = 3;
	Employee* e[4];
	e[3] = new Developer("Nowak", 30, 7, 4000, 3);
	e[2] = new TeamLeader("Kowalski", 40, 15, 6000, 2);
	e[1] = new Developer("Bartczak", 25, 4, 3500, 2);
	e[0] = new Developer("Marchewka", 23, 3, 3500, 3);
	e[3]->show();
	e[2]->show();
	e[1]->show();
	e[0]->show();
	whoWorkMoreThan5Years(e, a);
	howManyEarnLessThanMeanBonus(e, a);

	return 0;
}

void whoWorkMoreThan5Years(Employee* tab[], int n) {
	for (int i = 0; i < n; i++) {
		if (tab[i]->getExperience() > 5) {
			tab[i]->show();
		}
	}
}

void howManyEarnLessThanMeanBonus(Employee* tab[], int n) {
	float temp = 0;
	for (int i = 0; i < n; i++) {
		temp += tab[i]->getSalary(); //calculateSalary(tab[i]->getBonus())
	}
	temp /= n;

	for (int i = 0; i < n; i++) {
		if (tab[i]->getBonus() < temp) {
			tab[i]->show();
		}
	}
}