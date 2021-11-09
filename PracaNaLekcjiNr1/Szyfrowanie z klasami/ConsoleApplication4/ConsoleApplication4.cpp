#include <iostream>
#include <string>
#include "szyfry.h"
using namespace std;

int main()
{
	szyfry zmienna;
	string trzecie, trzecie1;
	string przestawie;
	string cezar;
	int odp;
	string ciag;
	cout << endl << "Podaj ciag znakow z malych liter: " << endl;
	getline(cin, ciag);
	cout << endl << "Co chcesz robic?" << endl;
	cout << endl << "1.Szyfr podstawieniowy" << endl;
	cout << endl << "2.Szyfr przestawieniowy" << endl;
	cout << endl << "3.Szyfr podstawieniowy i przestawieniowy" << endl;
	cout << endl << "4.Odszyfruj tekst" << endl;
	cin >> odp;
	if (odp == 1)
	{
		cezar = zmienna.podstawieniowy(ciag);
		cout << endl << cezar << endl;
	}
	else if (odp == 2)
	{
		przestawie = zmienna.przestawieniowy(ciag);
		cout << endl << przestawie << endl;

	}
	else if (odp == 3)
	{
		trzecie = zmienna.podstawieniowy(ciag);
		trzecie = zmienna.przestawieniowy(trzecie);
		cout << trzecie;

	}
	else if (odp == 4)
	{
		cout << endl << "Ktorys z tych ciagow jest poprawny" << endl;
		cout << zmienna.odszyfrowanie(ciag);
	}
}