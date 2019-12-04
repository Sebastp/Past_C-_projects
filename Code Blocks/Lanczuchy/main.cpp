#include <iostream>
#include <string>
#include <stddef.h>
#include <cstddef>
using namespace std;
int main()
{
    string imie;

    cout<<"Wpisz twoje imie: ";
    cin>>imie;
    int dlugosc=imie.length();

    if (imie[dlugosc-1]=='a')
        cout<<"Jestes Kobieta";
    else
        cout<<"Jestes Merzczyzna";


    return 0;
}
