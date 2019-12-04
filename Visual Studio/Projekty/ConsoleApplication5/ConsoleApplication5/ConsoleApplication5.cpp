#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int suma=0, i=0;
int n[100];
int main()
{
	for (;;){
		cin >> n[i];
		suma += n[i];
			cout << suma;
			i++;
	}
	system("pause");
	return 0;
}

