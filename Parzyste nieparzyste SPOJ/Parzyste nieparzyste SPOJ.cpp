#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int ile;
	cin >> ile;

	int n;
	int liczba;

	for (int i = 0; i < ile; i++)
	{
		cin >> n;
		vector<int>all;
		vector<int>parzyste;
		vector<int>nieparzyste;
	
		for (int j = 0; j < n; j++)
		{
			cin >> liczba;
			all.push_back(liczba);
		}

		int wskaznik;
		
		for (int k = 1; k <= all.size(); k++)
		{
			if (k % 2 == 0)
			{
				wskaznik = all[k-1];
				parzyste.push_back(wskaznik);
			}
			else
			{
				wskaznik = all[k-1];
				nieparzyste.push_back(wskaznik);
			}
		}

		for (int l = 0; l < parzyste.size(); l++)
			cout << parzyste[l] << " ";
		for (int p = 0; p < nieparzyste.size(); p++)
			cout << nieparzyste[p] << " ";

		cout << endl;

	}

	return 0;

}
