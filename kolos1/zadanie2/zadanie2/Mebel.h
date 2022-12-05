#pragma once
class Mebel {
private:
	float weight;
	int legs;
public:
	virtual float oblicz_koszt() = 0;
	virtual void show();
	virtual ~Mebel();
	Mebel();
	Mebel(float w1) {
		weight = w1;
	}
	void setLegs(int l1) {
		legs = l1;
	}
	int getLegs() {
		return legs;
	}
	void setWeight(float w1) {
		weight = w1;
	}
	float getWeight() {
		return weight;
	}
};