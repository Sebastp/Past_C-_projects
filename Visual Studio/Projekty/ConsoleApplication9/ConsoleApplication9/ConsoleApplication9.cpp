#include <iostream>
#include <math.h>
#include <cstdlib>

int parzystosc(int k);

using namespace std;
int t, n;
int liczb[100];
int liczb2[100];
int main()
{
	cout << "Liczba testow: ";
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cout << "Ilosc liczb: ";
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> liczb[i];
		}
		for (int i = 0; i < n; i++) {
			parzystosc(liczb[i]);
			cout << liczb[i] << " ";
		}
	}
	system("pause");
	return 0;
}

int parzystosc(int k) {
	if (k % 2 == 0)
		return true;
	else return k;
	if (true) {
		while (liczb[0] != true) {

			
		}
	}
}


