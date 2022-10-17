#pragma once
#include "Employee.h"
class Developer: public Employee
{
private:
public:
	Developer();
	Developer(string surname1, int age1, int experience1, float salary1, float bonus1);
	~Developer();
	float calculateBonus(int value);
	virtual float calculateSalary(float value) override;
};

