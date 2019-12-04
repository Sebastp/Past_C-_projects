#include <iostream>

using namespace std;

int main()
{
    long a, b;

    cout << "Pierwsza Liczba:";
    cin >> a;
    cout << "Druga Liczba";
    cin >> b;

    cout <<"Wynik To: ";
    while(a != b){

        if(a > b){
            a -= b;
        } else {
            b -= a;
        }

        cout << a << endl;
    }

    return 0;
}
