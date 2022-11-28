#pragma once
#include <iostream>
#include <string>
using namespace std;
class Contact {
public:
	string name;
	string surname;
	int age;
	int phoneNumber;
	int uniq;
	string street;
	void show() const;
};
void Contact::show() const {
	cout << "name: " << name << " surname: " << surname << " age: " << age
		<< " phone number: " << phoneNumber << " ulica: " << street << " unikalny numer: " << uniq << endl;
}
