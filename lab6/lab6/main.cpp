#include <boost/multi_index_container.hpp>
#include <boost/multi_index/hashed_index.hpp>
#include <boost/multi_index/member.hpp>
#include <boost/bind/bind.hpp>
#include <boost/multi_index/ordered_index.hpp>
#include <boost/multi_index/random_access_index.hpp>
#include <boost/fusion/container.hpp>
#include <boost/fusion/sequence.hpp>
#include <iostream>
#include <vector>
#include "Person.h"
#include "Print.h"
/*
using namespace boost::multi_index;
using namespace std::placeholders;
using namespace std;
typedef multi_index_container<Person, indexed_by<
hashed_non_unique<member<Person, string, &Person::name>>,
hashed_non_unique < member<Person, int, &Person::age>>
>> person_multi;
typedef person_multi::nth_index<0>::type name_type;
typedef person_multi::nth_index<1>::type age_type;

typedef multi_index_container<Person, indexed_by<
ordered_non_unique<member<Person, string, &Person::name>>,
ordered_non_unique<member<Person, int, &Person::age>>,
random_access<> >> person_multi_2;
typedef person_multi_2::nth_index<0>::type name_type2;
typedef person_multi_2::nth_index<1>::type age_type2;

void AlaToAlicja(Person& x)
{
	if (x.name == "Ala")
		x.name = "Alicja";
}


void UlaToUrszula(Person & x)
{
x.name = "Urszula";
}
int main()
{
person_multi persons;
persons.insert({ "Ala", 40 });
persons.insert({ "Piotr", 10 });
persons.insert({ "Ola", 18 });
persons.insert({ "Ala", 46 });
persons.insert({ "Ula", 46 });

cout << "Liczba osob o imieniu Ala: "
<< persons.count("Ala") << endl;
cout << "Liczba osob o imieniu Ala: "
<< persons.get<0>().count("Ala") << endl;
age_type & age_index = persons.get<1>();
cout << "Liczba osob z wiekiem 18 lat: "
<< age_index.count(18) << endl;
for (age_type::iterator it = persons.get<1>().begin();
it != persons.get<1>().end(); ++it)
it->show();
auto & age_indexx = persons.get<1>();
auto it = age_indexx.find(46);
cout << "Znaleziona osoba, ktora ma 46 lat "
<< it->name << endl;
auto& name_indexx = persons.get<0>();
auto itt = name_indexx.find("Ula");
name_indexx.modify(itt, boost::bind(UlaToUrszula, _1));
cout << "=============================================" << endl;
cout << "Przed modyfikacja: " << endl;
vector<name_type::iterator> elements;
for (name_type::iterator it = persons.get<0>().begin();
	it != persons.get<0>().end(); ++it)
	{
	it->show();
	elements.push_back(it);
	}
for (int i = 0; i < elements.size(); i++)
	name_indexx.modify(elements[i],
		boost::bind(AlaToAlicja, _1));
cout << "Po modyfikacji" << endl;
for (name_type::iterator it = persons.get<0>().begin();
	it != persons.get<0>().end(); ++it)
	{
	it->show();
	}
cout << "======================================" << endl;
person_multi_2 persons2;
persons2.get<2>().push_back({ "Ala", 40 });
persons2.get<2>().push_back({ "Ala", 45 });
persons2.get<2>().push_back({ "Piotr", 10 });
persons2.get<2>().push_back({ "Ola", 18 });
persons2.get<2>().push_back({ "Aga", 46 });
persons2.get<2>().push_back({ "Ula", 46 });
auto & name_indexx2 = persons2.get<0>();
auto iterStart = name_indexx2.equal_range("Ala");
auto iterStop = name_indexx2.equal_range("Piotr");
cout << "przedzial od Ala do Piotr - wersja 1" << endl;

for (name_type2::iterator it = iterStart.first;
	it != iterStop.second; ++it)
	it->show();
auto from = name_indexx2.lower_bound("Ala");
auto to = name_indexx2.upper_bound("Piotr");
cout << "przedzial od Ala do Piotr - wersja 2" << endl;
for (auto it = from; it != to; ++it)
it->show();
cout << "================================================" << endl;
boost::fusion::vector<int, string, bool, double> vec{ 10,
"C++", true, 3.14 };
cout << "Trzeci element w vec:"
<< boost::fusion::at<boost::mpl::int_<2>>(vec) << endl;
auto vec2 = push_back(vec, 'M');
cout << "Liczba elementow w wvec: " << size(vec) << endl;
cout << "Liczba elementow w vec2: " << size(vec2) << endl;
cout << "Pierwszy element w vec2: " << front(vec2) << endl;
cout << "Ostatni element w vec2: " << back(vec2) << endl;
cout << "Cala zawartosc vec2: " << endl;
boost::fusion::for_each(vec2, Print());

auto itvStart = begin(vec);
auto itvStop = end(vec);
cout << "Pierwszy element: " << *itvStart << endl;
cout << "Drugi element: " << *next(itvStart) << endl;
cout << "Trzeci element: "
<< *advance<boost::mpl::int_<2>>(itvStart) << endl;
return 0;
}*/

#include <boost/bind.hpp>

using namespace std;
void firstArgMod(int& x, int y)
{
x = x + y;
}
void printF(int x)
{
	cout << x << " ";
}
void contatination(int i1, int i2)
{
	cout << i1 << i2 << endl;;
}
class Operation
{
public:
	int operator()(int a, int b)
	{
		return a - b;
	}
	int operator()(char a)
	{
		return (int)a - 32;
	}
};
int addition(int a, int b)
{
	return a + b;
}
int main()
{
cout << "vec: " << endl;
vector<int> vec = { 1,2,3,4,5 };
vector<int>::iterator iter1 = vec.begin();
vector<int>::iterator iter2 = vec.end();
for_each(iter1, iter2, boost::bind(printF, _1));
cout << endl << "vec - kazdy element zwiekszony o 5: ";
for_each(iter1, iter2, boost::bind(firstArgMod, _1, 5));
for_each(iter1, iter2, boost::bind(printF, _1));
int count = std::count_if(vec.begin(), vec.end(),
	boost::bind(std::logical_and<bool>(),
	boost::bind(std::greater<int>(), _1, 8),
	boost::bind(std::less_equal<int>(), _1, 10)));
cout << endl << "vec - 8<Elementy<=10 " << count << endl;
cout << addition(1, 2) << endl;
int res = boost::bind(addition, _1, _2)(1, 2);
cout << res << endl;

int i1 = 1, i2 = 2;
boost::bind(contatination, _2, _1)(i1, i2);

Operation ff;
int x = 1024;
cout << "Funktor: " << bind<int>(ff, _1, _1)(x) << endl;
char y = 'a';
cout << "Funktor: " << bind<char>(ff, _1)(y) << endl;
return 0;
}