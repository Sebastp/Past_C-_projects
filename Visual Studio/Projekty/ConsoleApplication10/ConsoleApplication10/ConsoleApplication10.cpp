#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int suma(int liczba);
short ostatnia(int arg);


int t;
int a;
int main()
{
	cin >> t;
	for (int i = 1;i<=t ; i++) {
		cin >> a;
		if (ostatnia(suma(a)) != 0) {
			cout << "N" << endl;
		}
		else {
			cout << "D" << endl;
		}				
	}
	system("pause");
    return 0;
}




short ostatnia(int arg)
{
	do {
		//mno¿ysz przez 10 dopóki liczba nie bêdzie naturalna
		arg *= 10;
		//dzielenie u³amków modulo przez 1 daje wynik ró¿ny od zera
	} while (arg % 1 != 0);

	//z liczby naturalnej zwracasz ostatni¹ cyfrê (arg modulo przez 10 )
	return arg % 10;
	//nie dzia³a dla liczb z rozwiniêciem okresowym/nieskoñczonym
}

int suma(int liczba)
{
	int wynik = 0;
	do
	{
		wynik = wynik + liczba % 10;
		liczba = liczba / 10;
	} while (liczba != 0);
	return wynik;
}