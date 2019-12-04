#include <iostream>

using namespace std;
int uczniowie,cukierki,x,y;
int main()
{
    cout << "Ilu uczniow jest w klasie";
    cin >> uczniowie;

    cout << "Ile cukierkow kupila";
    cin >> cukierki;

    x = cukierki/(uczniowie-1);
    cout<< "Ile dostanie kazdy"<<x;

    y = cukierki-x*(uczniowie-1);
    cout <<endl<<"ile zostanie dla Jasia"<<y;
    return 0;
}
