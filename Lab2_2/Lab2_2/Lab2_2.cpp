#include <iostream>
#include "Employee.h"
#include "Developer.h"
#include "TeamLeader.h"
int main()
{

}

void whoWorkMoreThan5Years(Employee** tab, int n) {
	for (int i = 0; i < n; i++) {
		if (tab[i]->getExperience() > 5) {
			tab[i]->show();
		}
	}
}

void howManyEarnLessThanMeanBonus(Employee** tab, int n) {
	float temp = 0;
	for (int i = 0; i < n; i++) {
		temp += tab[i]->calculateSalary(tab[i]->getBonus());
	}
	temp /= n;

	for (int i = 0; i < n; i++) {
		if (tab[i]->getBonus() < temp) {
			tab[i]->show();
		}
	}
}