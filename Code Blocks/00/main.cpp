#include <iostream>
#include <string>
using namespace std;

string wartosc1;

class Kalkulator{
    public:
        void setX (double pierwsza){
            x=y;
        }

        string getX(){
            return x;
        }

    private:
        string x;
};
int main(){

    Kalkulator cos;
    cin >> chuj;

    cos.setX( chuj );
    cout<<cos.getX();

    return 0;
}

