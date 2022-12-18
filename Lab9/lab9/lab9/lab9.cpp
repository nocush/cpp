#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

int main()
{

	//SKRYPT CZ1
/*int a = 223;
float b = 21.365;
cout << "dec: " << dec << a << endl;
cout << "hex bez showbase: " << hex << a << endl;
cout << "hex z showbase: " << showbase << a << endl;
cout << "oct z showbase: " << oct << a << endl;
cout << "oct bez showbase: " << noshowbase << a << endl;
cout << "dec z showpos: " << dec << showpos << a << endl;
cout << "scientific: " << scientific << b << endl;
cout << "setw z right: " << setw(20) << a << endl;
cout << "setw z left i setfill: "
<< setw(20) << left << setfill('*') << a << endl;
cout<<"setprecision 3: "<<resetiosflags(ios::scientific)
<<setprecision(3)<<b<<endl;*/

	string l1, l2, l3 = "Ala Nowak";
	int num;
	cout << "Konwersja: " << endl;
	istringstream isstream("123");
	isstream >> num;
	cout << num << endl;
	ostringstream osstream;
	osstream << 123;
	l1 = osstream.str();
	cout << l1 << endl;
	ostringstream osstream1;
	osstream1 << "Laboratorium " << 9 <<
		", zostalo jeszcze " << 6 << endl;
	cout << "Formatowanie: " << osstream1.str();
	string stringEx;
	int numberIntEx;
	float numberFloatEx;
	istringstream isstream1("Ala 10 3.45");
	isstream1 >> stringEx >> numberIntEx >> numberFloatEx;
	if (isstream1.fail())
	{
	cout << "Parsowanie nie udalo sie" << endl;
	}
	else
	{
	cout<< "Parsowanie udalo sie:" << endl;
	cout<<"Napis: "<< stringEx << endl;
	cout<<"Liczba int: "<<numberIntEx<< endl;
	cout<<"Liczba float: "<<numberFloatEx <<endl;
	}
	istringstream ss(l3);
	getline(ss, l1, ' ');
	getline(ss, l2, ' ');
	cout<<l1<<" "<<l2<<endl;

}
