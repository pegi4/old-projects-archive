
/*
Avtor: Vito Senič 1.cr
Krožek: Programiranje
Datum: 09.10.2019
Vsebina: Program za štetje črk v besedi ali povedi.
*/
#include <iostream>

using namespace std;

int main()
{
    //Izpis znakov v besedi ali povedi
    string niz = "";
    cout << "Napisi katerokoli besedo ali poved:";
    getline(cin,niz);

    cout << "Dolzina besede ali povedi,ki si jo vnesel je : "<<niz.size()<<" znakov!"<<endl;

    //Izpis prve in zadnje črke
    cout<<"Prva crka v besedi je: "<<niz[0]<<endl;

    cout<<"Zadnja crka v besedi je: "<<niz[niz.size () - 1]<<endl;

    return 0;
}
