#include <iostream>

using namespace std;

int wiek;
int main(){
    cout << "ile masz lat:";
    cin >> wiek;
    if (wiek>=18){
        cout<<"Jestes pelnoletni";
    }
    else{
        cout<<"Jestes Niepelnoletni";
    }

    if (wiek>=35){
        cout<<"Mozesz kandydowac";
    }
    else{
        cout<<"Niemozesz kandydowac";
    }

    return 0;
}
