﻿#include <iostream>
#include <memory>
#include <vector>
using namespace std;
void funcUniqueModify(unique_ptr<int> &uptr)
{
*uptr=112;
}
void funUniqueDeleter(int* p)
{
	delete[] p;
	cout << "funUniqueDeleter: usunieta tablica" << endl;
}
unique_ptr<int[]> funUniqueArray(int n)
{
unique_ptr<int[]> arr(new int[n]);
for(int i=0; i<n; i++)
 arr[i]=i+7;
 return arr;
 }


class Person{
private:
string name;
int age;
public:
Person(string name1, int age1){
name=name1;
age=age1;
}
void info(){
cout<<name<<" "<<age<<endl;
}
};

void funDeleter(Person* p)
{
cout<<"usunieta osoba: ";
p->info();
delete p;
}

class Elem {
public:
shared_ptr<Elem> next;
weak_ptr<Elem> prev;
~Elem() {
cout << "Destruktor Elem" <<endl;
}
};



int main()
{
/*unique_ptr <int> uptr1(new int);
*uptr1=12;
cout<<"Wartosc uptr1: "<<*uptr1<<endl;
cout<<"Adres uptr1: "<<uptr1.get()<<endl;
unique_ptr <int> uptr2;
cout<<"Przed move"<<endl;
cout<<"Adres uptr1: "<<uptr1.get()<<endl;
cout<<"Adres uptr2: "<<uptr2.get()<<endl;
uptr2=move(uptr1);
cout<<"Po move: "<<endl;
cout<<"Adres uptr1: "<<uptr1.get()<<endl;
cout<<"Adres uptr2: "<<uptr2.get()<<endl;
funcUniqueModify(uptr2);
cout<<"Wartosc uptr2: "<<*uptr2<<endl;
cout<<"Przed reset: Adres uptr2: "<<uptr2.get()<<endl;
uptr2.reset();
cout<<"Po reset: Adres uptr2: "<<uptr2.get()<<endl;
return 0;*/

/*
unique_ptr < int[]> tab1(new int[4]);
cout<<"Elementy tablicy tab1:"<<endl;
for(int i=0; i<4; i++)
{
tab1[i]=i+7;
cout<<tab1[i]<<endl;
}
unique_ptr<int[]> tab3=funUniqueArray(5);
cout<<"Elementy tablicy tab3:"<<endl;
for(int i=0; i<5; i++)
cout<<tab3[i]<<endl;
unique_ptr<int[],void(*)(int*)>
tab2(new int[10],funUniqueDeleter);
vector<unique_ptr<int>> vec;
unique_ptr<int> i1(new int);
*i1=3;
vec.push_back(move(i1));
cout<<"Element w wektorze: "<<*vec[0]<<endl;*/

//shared_ptr
/*shared_ptr < Person > sptr1(new Person("Ola", 32));
shared_ptr < Person > sptr2( new Person("Ula",52) );
sptr1->info();
cout<<"Licznik sptr1: "<<sptr1.use_count()<<endl;
cout<<"Licznik sptr2: "<<sptr2.use_count()<<endl;
vector<shared_ptr<Person>> firstInOffice;
firstInOffice.push_back(sptr1);
firstInOffice.push_back(sptr2);
firstInOffice.push_back(sptr2);
firstInOffice.push_back(sptr1);
firstInOffice.push_back(sptr2);
cout<<"Po dodaniu do kontenera"<<endl;
cout<<"Licznik sptr1: "<<sptr1.use_count()<<endl;
cout<<"Licznik sptr2: "<<sptr2.use_count()<<endl;
for (shared_ptr<Person> ptr : firstInOffice)
ptr->info();
cout << endl;
firstInOffice.resize(3);
cout<<"Po resize"<<endl;
cout<<"Licznik sptr1: "<<sptr1.use_count()<<endl;
cout<<"Licznik sptr2: "<<sptr2.use_count()<<endl;
shared_ptr <Person> sptr3(new
Person("Magda",22),funDeleter);
sptr3->info();*/

//weak_ptr
shared_ptr <Elem> el1 (new Elem);
shared_ptr <Elem> el2 (new Elem);
el1->next = el2;
el2->prev = el1;
shared_ptr<Elem> tempEl(el2->prev);
cout <<"Adres: " <<tempEl<< endl;
}