#include <iostream>

using namespace std;

string Login,Haslo;

int main()

{
    cout << "Podaj Login:";
    cin >>Login;
    cout << "Podaj Haslo:";
    cin >>Haslo;
if ((Login=="Admin")&&(Haslo=="Cwel"))
{
    cout <<"Udalo sie zalogowac";
}
else
{
    cout<<"Nieudalo sie zalogowac";
}

    return 0;
}
