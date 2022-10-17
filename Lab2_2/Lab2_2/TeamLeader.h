#pragma once
#include "Employee.h"
class TeamLeader: public Employee
{
private:
public:
	TeamLeader();
	TeamLeader(string surname1, int age1, int experience1, float salary1, int bonus1);
	~TeamLeader();
	float calculateBonus(int value) ;
	virtual float calculateSalary(float value) override;

};

