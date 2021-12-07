#include <ctime>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include "mies.h"
using namespace std;
mies kod;

int main()
{
	srand(time(NULL));
	int a=1;
	vector <int> losowe;
	cout << "Wylosowane liczby:" << endl;
	for (int i = 0; i < 100; i++)
	{
		a = rand()%1000;
		losowe.push_back(a);
		cout << losowe[i] << endl;
	}
	
	int wyb;
	cout << endl << "Wybierz sortowanie:" << endl;
	cout << "1.Bobelkowe" << endl;
	cout << "2.Karty" << endl << endl;
	cin >> wyb;
	cout << endl;

	if (wyb == 1)
	{
		cout << kod.bobelki(losowe);
	}

	if (wyb == 2)
	{
		cout << kod.karty(losowe);
	}

}

