#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Samochod {
public:
	string marka;
	string model;
	int przebieg;
	int rocznik;
	
	void wczytaj() {
		cout << "Marka: ";
		cin >> marka;
		cout << "Model: ";
		cin >> model;
		cout << "przebieg: ";
		cin >> przebieg;
		cout << "rocznik: ";
		cin >> rocznik;
	}
	void wypisz() {
		cout << "------------------------" << endl;
		cout << endl;
		cout << "Marka to: "	<< marka << endl;
		cout << "Model to: "	<< model << endl;
		cout << "Przebieg to: "	<< przebieg << endl;
		cout << "Rocznik to: "	<< rocznik << endl;
		cout << endl;
	}

};
int t;
int main()
{
	cout << "Ilosc testow: ";
	cin >> t;
	for (int i = 1; i <= t; i++) {

		Samochod s[i]();
		s[i].wczytaj();
		s[i].wypisz();
	}
	system("pause");
    return 0;
}

