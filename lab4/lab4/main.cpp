#include <iostream>
#include <vector>
using namespace std;

template < typename T>
void show(T & con)
{
for (typename T::iterator it = con.begin(); it != con.end(); it++)
	cout << *it << " ";
cout << endl;
}

int main()
{
vector<int> vec;
vec.push_back(1);
vec.push_back(2);
vec.push_back(3);
 cout << "Operator[]" << endl;
 for (int i = 0; i < vec.size(); i++)
	cout << vec[i] << " ";
cout << endl;
cout << "At" << endl;
 for (int i = 0; i < vec.size(); i++)
	cout << vec.at(i) << " ";
cout << endl;
cout << "Iterator: " << endl;
vector <int>::iterator it;
for (it = vec.begin(); it != vec.end(); it++)
	cout << *it << " ";
cout << endl;
cout << "begin() " << *vec.begin() << " front() "
<< vec.front() << endl;
cout << "end() " << *(vec.end() - 1) << " back() "
<< vec.back() << endl;
show(vec);
vec.pop_back();
show(vec);
vec.erase(vec.begin() + 1, vec.begin() + 2);
show(vec);
vec.insert(vec.begin() + 1, 100);
show(vec);
vec.clear();
show(vec);

return 0;
}