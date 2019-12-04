#include "stdafx.h"
#include "iostream"
#include <conio.h>

using namespace std;
float metry;

double ile_cali(double m){
	return m*39.37;
};
double ile_stop(double m) {
	return m* 3.28;
};
double ile_jard(double m) {
	return m * 1.09;
};



int main(){
		cout << "Podaj Metry: ";
		cin >> metry;
		cout << "Ilosc cali: "	 << ile_cali(metry)	<< endl;
		cout << "Ilosc stop: "	 <<	ile_stop(metry) << endl;
		cout << "Ilosc jardow: " << ile_jard(metry) << endl;
		cout << "---------------------------------";
		_getch();

		return 0;
	}