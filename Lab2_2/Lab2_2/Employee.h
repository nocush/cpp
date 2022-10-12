#pragma once
#include <iostream>
using namespace std;
class Employee
{
private:
	string surname;
	int age;
	int experience;
	int salary;
public:
	Employee();
	Employee(string surname1, int age1, int experience1, float salary1);
	virtual ~Employee();
	virtual void show();
	virtual int calculateSalary(int value);
	int ageEmployment();
	void setSurname(string surname1);
	string getSurname();
	void setAge(int age1);
	int getAge();
	void setExperience(int experience1);
	int getExperience();
	void setSalary(int salary1);
	int getSalary();

};

