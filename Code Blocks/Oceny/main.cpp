#include <iostream>

using namespace std;

float ocena[5];
int suma=0, srednia;
int main()
{


    for(int i=0;i<5; i++)
    {
    cout << "Podaj "<< i+1 <<" ocene: ";
    cin >> ocena[i];
    suma+=ocena[i];
}
    srednia = suma/5;
    cout<<endl<<"srednia to: "<<srednia;

    return 0;
}
