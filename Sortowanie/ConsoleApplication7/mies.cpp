#include <iostream>
#include <vector>
#include <cstdlib>
#include "mies.h"

int mies::bobelki(vector <int> losowe1)
{
	for (int i = 0; i < losowe1.size(); i++)
	{
		for (int k = 0; k < losowe1.size() - 1; k++)
		{
			if (losowe1[k] > losowe1[k + 1])
			{
				swap(losowe1[k], losowe1[k + 1]);

			}
		}

	}

	for (int i = 0; i < losowe1.size(); i++)
	{

		cout << losowe1[i] << endl;
	}
	return 0;
}

int mies::karty(vector <int> losowe2)
{
	int a;
	int j;

	    for (int i = 1; i < losowe2.size(); i++)
	    {
		     a = losowe2[i];
		     j = i - 1;

		    while (j >= 0 && losowe2[j] > a)
		    {
			     losowe2[j + 1] = losowe2[j];
			     --j;
		    }

		    losowe2[j + 1] = a;
	    }
	    for (int i = 0; i < losowe2.size(); i++)
	    {
	
		    cout << losowe2[i] <<endl;
	    }
	
		return 0;
}

void mies::szybkie(vector <int>& sorto, int left, int right)
{
	int i = (left + right) / 2;
	int piwot = sorto[i];
	sorto[i] = sorto[right];
	int j = left;

	for (i = left; i < right; i++)
	{

		if (sorto[i] < piwot)

		{

			int temp = sorto[i];
			sorto[i] = sorto[j];
			sorto[j] = temp;
			j++;

		}

	}

	sorto[right] = sorto[j];

	sorto[j] = piwot;

	if (left < j - 1)
	{

		szybkie(sorto, left, j - 1);

	}

	if (j + 1 < right)
	{

		szybkie(sorto, j + 1, right);

	}


}

int mies::wybieranie(vector <int> sortowanie)
{
	int size = sortowanie.size();

	int k;
	for (int i = 0; i < size; i++)
	{
		k = i;
		for (int j = i + 1; j < size; j++)
			if (sortowanie[j] < sortowanie[k])
				k = j;

		swap(sortowanie[k], sortowanie[i]);
	}
	for (int i = 0; i < sortowanie.size(); i++)
	{
		cout << sortowanie[i] << endl;
	}
	return 0;
}

