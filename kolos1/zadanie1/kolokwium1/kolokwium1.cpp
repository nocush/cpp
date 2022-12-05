#include <iostream>
#include <set>
#include <algorithm>
#include <string>
using namespace std;
template<typename T>
void show(set <T> s)
{
    set<int>::iterator itr;
    for (itr = s.begin(); itr != s.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
}
void show(set <string> s)
{
    set<string>::iterator itr;
    for (itr = s.begin(); itr != s.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
}

template <typename T>
void zad1(T s1, T s2) {
    T sDiffer;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),  insert_iterator<T>(sDiffer, sDiffer.begin()));
    show(sDiffer);
}

int main()
{
    set <int> s1 = { 1,2,4,6 };
    set <int> s2 = { 1,2,3,6,7 };
    set <string> str1 = { "jeden","dwa","szesc","siedem" };
    set <string> str2 = { "jeden","siedem","osiem","dwanascie" };
    zad1(s1, s2);
    zad1(str1,str2);
    

    return 0;
}