#pragma once
#include "Employee.h"
class TeamLeader: public Employee
{
private:
public:
	TeamLeader();
	TeamLeader(string surname1, int age1, int experience1, float salary1, float bonus1);
	~TeamLeader();
	virtual float getBonus() override;
	virtual void setBonus(float value) override;
	float calculateBonus(int value);
	virtual void show() override;
	virtual int calculateSalary(float value) override;

};

