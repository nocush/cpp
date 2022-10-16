#pragma once
#include "Employee.h"
class Developer: public Employee
{
private:
public:
	Developer();
	Developer(string surname1, int age1, int experience1, float salary1, float bonus1);
	~Developer();
	virtual float getBonus() override;
	virtual void setBonus(float value) override;
	float calculateBonus(int value);
	virtual void show() override;
	virtual int calculateSalary(float value) override;
};

