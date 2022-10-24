#include <iostream>
#include "Adding.h"
#include "Student.h"
#include "Array.h"

/*template <typename T>
void showAll(T* tab[], int n)
{
    for (int i = 0; i < n; i++)
        tab[i]->show();
}*/
template < typename T>
void showAll(T * tab[], int n)
{
    for (int i = 0; i < n; i++)
    tab[i]->show();
}
template < typename T>
T minimum(T tab[], int n) {
    T temp = tab[0];
    for (int i = 1; i < n; i++) {
        if (tab[i] < temp) temp = tab[i];
    }
    return temp;
}



using namespace std;
int main()
{
    Array<int> arr = Array<int>(5);
    arr.addElement(3);
    arr.addElement(7);
    arr.addElement(1);
    arr.addElement(9);
    arr.addElement(0);
    arr.showArray();
    cout << "=============================================" << endl;
    cout << "Maksymalna wartosc: " << arr.maximum() << endl;
    cout << "=============================================" << endl;
    arr.sort();
    arr.showArray();
    cout << "=============================================" << endl;
    cout << "String" << endl;
    cout << "=============================================" << endl;
    Array<string> arr2 = Array<string>(5);
    arr2.addElement("aaaaa");
    arr2.addElement("aaaa");
    arr2.addElement("aadasdsadsa");
    arr2.addElement("aa");
    arr2.addElement("z");
    arr2.showArray();
    cout << "=============================================" << endl;
    cout << "Maksymalna wartosc: " << arr2.maximum() << endl;
    cout << "=============================================" << endl;
    arr2.sort();
    arr2.showArray();
    


    
    /*Adding<int>* arrAdd[3];
    for (int i = 0; i < 3; i++){
        arrAdd[i] = new Adding<int>(i);
    }
    cout << "Wartosc minimalna: " << endl;
    Adding<int>* min = minimum(arrAdd, 3);
    for (int i = 0; i < 3; i++) {
        if (arrAdd[i] == min) arrAdd[i]->show();
    }
    cout << "==========================================" << endl;
    showAll(arrAdd, 3);
    Student<string>*arrStu[2];
    for (int i = 0; i < 2; i++) {
       arrStu[i] = new Student<string>(i + 2, "Ala");
    }
    //showAll(arrStu, 3);
    for (int i = 0; i < 3; i++) delete arrAdd[i];
    for (int i = 0; i < 2; i++) delete arrStu[i];*/


    /*Adding<int> a1(5);
    a1.add(6);
    a1.show();
    Adding<string> a2("Pro");
    a2.add("gramowanie");
    a2.show();

    cout << endl << endl;
    Student<float> s(5, "Ala");
    s.showMark();
    Student<int> s1(5, "Ala");
    s1.showMark();
    Student<string> s2(5, "Ala");
    s2.showMark();*/

    /*cout<<endl<<endl;
       Adding<int>* arrAdd[3];
       for(int i=0;i<3;i++)
       {
       arrAdd[i]=new Adding<int>(i);
       }
       showAll(arrAdd,3);
       Student<string>* arrStu[2];
       for(int i=0;i<3;i++){
       arrStu[i]=new Student<string>(i+2,"Ala");
       }
       showAll(arrStu,3);
       for(int i=0; i<3; i++)
       delete arrAdd[i];
       for(int i=0; i<2; i++)
       delete arrStu[i];

        cout<<endl<<endl;*/

    return 0;
}

