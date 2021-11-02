#include <iostream>
#include <string>
using namespace std;


string podstawieniowy(string ciag1)
{
	int ile;
	cout << endl << "O ile chcesz przesunac?" << endl;

	cin >> ile;

	if (ile < 1)
	{
		cout << endl << "Minimalna wartosc to 1" << endl;
		cout << endl << "Wartosc pozostaje niezmieniona." << endl;
		return ciag1;
	}

	if (ile > 26)
	{
		cout << endl << "Maksymalna wartosc to 26" << endl;
		cout << endl << "Wartosc pozostaje niezmieniona." << endl;
		return ciag1;
	}

	for (int i = 0; i < ciag1.length(); i++)
	{
		if (ciag1[i] > 96 && ciag1[i] < 123)
		{

			ciag1[i] += ile;

			if (ciag1[i] > 122)
			{
				ciag1[i] = ciag1[i] % 123 + 97;
			}

		}
	}
	return ciag1;
}

string przestawieniowy(string ciag2)
{
	for (int i = 0; i < ciag2.length() - 1; i += 2)
	{
		swap(ciag2[i], ciag2[i+1]);
	}
	return ciag2;
}


string odszyfrowanie(string ciag3)
{
	string pocz = ciag3;

	for (int a = 1; a < 26; a++)
	{


		for (int i = 0; i < ciag3.length(); i++)
		{
			if (ciag3[i] > 96 && ciag3[i] < 123)
			{


				ciag3[i] -= a;
				if (ciag3[i] < 97)
				{
					ciag3[i] = ciag3[i] % 123 + 26;
					
				}

			}
			
			
		}
		cout << " " << ciag3 << " ";
		ciag3 = pocz;
	}
	return ciag3;
}

int main()
{
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
		cezar = podstawieniowy(ciag);
		cout << endl << cezar << endl;
	}
	else if (odp == 2)
	{
		przestawie = przestawieniowy(ciag);
		cout << endl << przestawie << endl;

	}
	else if (odp == 3)
	{
		trzecie = podstawieniowy(ciag);
		trzecie = przestawieniowy(trzecie);
		cout << trzecie;

	}
	else if (odp == 4)
	{
		cout << endl << "Ktorys z tych ciagow jest poprawny" << endl;
		cout << odszyfrowanie(ciag);
	}
}