#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>

using namespace std;
float x,y;
char wybor;
int main(){
for (;;)
{
    cout << "Podaj pierwsza liczbe: ";
    cin>>x;
    cout << "Podaj druga liczbe: ";
    cin>>y;
    cout <<endl;

    cout << "-----MENU WYBORU-----"<<endl;
    cout << "1. Dodawanie"<<endl;
    cout << "2. Odejmowanie"<<endl;
    cout << "3. Mnozenie"<<endl;
    cout << "4. Dzielenie"<<endl;
    cout << "5. Wyjscie"<<endl;
    cout <<endl;
    wybor=getch();
    switch(wybor)
    {
    case '1':
        cout<<"Wynik :"<<x+y;
        break;
    case '2':
        cout<<"Wynik :"<<x-y;
        break;
    case '3':
        cout<<"Wynik :"<<x*y;
        break;
    case '4':
        cout<<"Wynik :"<<x/y;
        break;
    case '5':
        exit(0);
        break;
    default: cout<<"Nie ma takiej opcji";

    }
getchar();getchar();


}
return 0;
}
