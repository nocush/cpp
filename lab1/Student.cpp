#include <iostream>
#include "Student.h"
using namespace std;

Student::Student(string name1, string surname1, int age1): Person(name1,surname1,age1){
cout<<"Konstruktor klasy pochodnej Student"<<endl;
}

Student::Student(){
    cout<<"Konstruktor bez klasy bazowej – Student"<<endl;
}

void Student::setIndex(string newIndex){
index = newIndex;
}

string Student::getIndex(){
    return index;
}

void Student::showInfoStudent(){
showInfoPerson();
cout<<"index: "<<getIndex()<<endl;
}
