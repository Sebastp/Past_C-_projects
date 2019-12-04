#include <iostream>
#include <string>
#include <cstdlib>
#include "Walka.h"

using namespace std;



int is, il; //ile szkieletow, ludzi
int main(){
	while ((is!=0)||(il!=0)) {
		cout << "Ilosc szkieletow: ";
		cin >> is;
		cout << "Ilosc ludzi: ";
		cin >> il;
		Walka w1;
		w1.a();
		w1.b();


	}
	system("pause");
    return 0;
}


