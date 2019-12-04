#include <iostream>
#include <cstdlib>
#include <Time.h>
#include <stdio.h>

using namespace std;

int liczba, strzal, ile_prob=0;

int main()
{
    cout << "Pomyslalem sobie liczbe od 1...100" << endl;
    srand(time(NULL));
    liczba=rand()%100+1;
    cout<<liczba<<endl;

    while(strzal!=liczba)
    {
        ile_prob++;
        cout<<"ZGADNIJ JAKA LICZBA :";
        cin>>strzal;

        if (strzal==liczba)
            cout<<"/a"<<"BRAWO ZGADLES W"<<ile_prob<<" PROBIE"<<endl;

       else if (strzal<liczba)
            cout<<ile_prob<<" proba "<<"Za malo!"<<endl;

           else if (strzal>liczba)
            cout<<ile_prob<<" proba "<<"Za duzo!"<<endl;
    }
   getchar();getchar();

    return 0;
}
