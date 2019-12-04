#include <iostream>
#include <Windows.h>

using namespace std;

string imie; int liczba;
int main()

{
    cout << "Podaj imie:"<<endl;
    cin>>imie;
    cout<<"podaj liczbe:";
    cin>>liczba;
    for (int i=1;i<=liczba ;i++)
    {
        cout<<i<<"_._"<<imie<<endl;
    Sleep(1000);
    }

    return 0;
}
