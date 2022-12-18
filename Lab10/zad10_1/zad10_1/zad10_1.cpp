#include <iostream>
#include <regex>

using namespace std;


int main()
{
	smatch res;
	string line = "Liczba zmiennoprzecinkowa: +12,734";
	regex regPattern("(\\+|\\-)[0-9]+,[0-9]+");
	regex_search(line, res, regPattern);
	cout << "Liczba dopasowan:" << res.size() << endl;
	cout << "res.str(): " << res.str() << endl;
	cout << "res.length(): " << res.length() << endl;
	cout << "res.position(): " << res.position() << endl;

}

