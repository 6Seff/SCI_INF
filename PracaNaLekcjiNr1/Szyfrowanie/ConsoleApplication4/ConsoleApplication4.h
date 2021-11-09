#include <iostream>
using namespace std;
#pragma once
class szyfry
{
private:
	int podstawieniowy(string ciag1);
};

string szyfry::podstawieniowy(string ciag1)
{
	string kul;
	unsigned char licz;
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
		if (ciag1[i] > 96)
		{
			licz = ciag1[i] + ile;

			if (licz > 122)
			{
				licz = licz % 123 + 97;
			}
			kul += licz;
		}
		else
		{
			kul += ciag1[i];
		}

	}
	return kul;
}

string przestawieniowy(string ciag2)
{
	for (int i = 0; i < ciag2.length() - 1; i += 2)
	{
		swap(ciag2[i], ciag2[i + 1]);
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

