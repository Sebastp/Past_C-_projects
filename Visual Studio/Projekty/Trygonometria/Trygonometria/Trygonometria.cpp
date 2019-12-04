#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <sstream>

using namespace std;
void voidy();

string kat;
float sin1, cos2, tang3;
float PI = 3.14159265;

int main(){

	while (true) {
		cout << "Twoj kat: ";
		cin >> kat;
		if (kat == "koniec") {
			cout << "BAJO!";
			Sleep(3000);
			return 0;
		}
		else {
			voidy();
			cout << endl;
			cout << "By zakonczyc wpisz 'koniec' lub kontynuuj" << endl;
		}
	}
}

void voidy(){	
	int kat_int = atoi(kat.c_str());

	void sinus(); {
		cout << "------------------------" << endl;
		sin1 = sin(kat_int*PI / 180);
		cout << " Sinus  :	" << sin1 << endl;
	}
	void cosinus(); {
		cos2 = cos(kat_int*PI / 180);
		cout << " Cosinus:	" << cos2 <<endl;
	}
	void tanges(); {
		tang3 = tan(kat_int*PI / 180);
		cout << " Tanges :	" << tang3 << endl;
		cout << "------------------------" << endl;
	}
}