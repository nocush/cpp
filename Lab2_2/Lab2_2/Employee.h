#pragma once
#include <iostream>
using namespace std;
class Employee
{
private:
	string surname;
	int age;
	int experience;
	float salary;
	int bonus;
public:
	Employee();
	Employee(string surname1, int age1, int experience1, float salary1, int bonus1);
	virtual ~Employee();
	float getBonus();
	void setBonus(float value);
	void show();
	virtual float calculateSalary(float value)=0;
	virtual float calculateBonus(int bonus1) = 0;
	int ageEmployment();

	void setSurname(string surname1);
	string getSurname();
	void setAge(int age1);
	int getAge();
	void setExperience(int experience1);
	int getExperience();
	void setSalary(float salary1);
	float getSalary();
};

