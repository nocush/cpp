#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED
#include <iostream>
using namespace std;
template <typename T>
class Array
{
private:
	T* tab;
	int tabSize=1;
	int freeIndex = 0;
public:
	Array(int tabSize1) {
		this->tabSize = tabSize1;
		tab = new T  [tabSize];
	}
	Array() {
		this->tabSize = 10;
		tab = new T  [tabSize];
	};
	~Array() {
		delete[]tab;
	}
	void swap(T* one, T* two) {
		T temp = *one;
		*one = *two;
		*two = temp;
	}
	void sort() {
		for (int i = 0; i < tabSize - 1; i++) {
			for (int j = 0; j < tabSize - i - 1;j++) {
				if (tab[j] > tab[j + 1]) swap(&tab[j], &tab[j + 1]);
			}
		}
	}
	T maximum() {
		T temp = tab[0];
		for (int i = 1; i < tabSize; i++) {
			if (tab[i] > temp) temp = tab[i];
		}
		return temp;
	}
	void showArray() {
		for (int i = 0; i < tabSize; i++) {
			cout << "Element: " << tab[i] << endl;
		}
	}
	void showAtIndex(int index) {
		cout << "Element at index " << index << ": " << tab[index] << endl;
	}
	void addElement(T element) {
		if (freeIndex < tabSize) {
			tab[freeIndex] = element;
			freeIndex++;
		}
	}
};
template <>
class Array<string>
{
private:
	string* tab;
	int tabSize;
	int freeIndex = 0;
public:
	Array(int tabSize1) {
		this->tabSize = tabSize1;
		tab = new string [tabSize];
	}
	Array() {
		this->tabSize = 10;
		tab = new string [tabSize];
	};
	~Array() {
		delete[] tab;
	}
	void showArray() {
		for (int i = 0; i < tabSize; i++) {
			cout << "Element: " << tab[i] << endl;
		}
	}
	void addElement(string element) {
		if (freeIndex < tabSize) {
			tab[freeIndex] = element;
			freeIndex++;
		}
	}
	void sort() {
		for (int i = 0; i < tabSize - 1; i++) {
			for (int j = 0; j < tabSize - i - 1; j++) {
				if (tab[j].length() > tab[j + 1].length())swap(tab[j], tab[j + 1]);
			}
		}
	}
	string maximum() {
		string temp = tab[0];
		for (int i = 1; i < tabSize; i++) {
			if (tab[i] > temp) temp = tab[i];
		}
		return temp;
	}
};


#endif //ARRAY_H_INCLUDED