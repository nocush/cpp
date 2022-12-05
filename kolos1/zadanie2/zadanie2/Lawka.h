#pragma once
#include "Mebel.h"
class Lawka:public Mebel
{
public:
	Lawka(float weight, int legs = 6);
	~Lawka();
	virtual float oblicz_koszt() override;
	virtual void show() override;
};

