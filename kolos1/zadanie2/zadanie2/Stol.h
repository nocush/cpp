#pragma once
#include "Mebel.h"
class Stol: public Mebel
{
public:
	Stol(float weight, int legs = 4);
	~Stol();
	virtual float oblicz_koszt() override;
	virtual void show() override;
};

