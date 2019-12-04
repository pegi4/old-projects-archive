/*
Avtor:Vito Senič
Datum: 9.10.2019
Vsebina: Program za preverjanje gesla admin
*/
#include <iostream>
using namespace std;

int main()
{
  //nastavitev spremenljivk

   string geslo="admin";
   string vnosUporabnika="";

   cout<<"Vnesi geslo!"<<endl;
   getline(cin,vnosUporabnika);

   //geslo

   if(geslo == vnosUporabnika)
    cout<<"Geslo je pravilno!"<<endl;
   else
    cout<<"Geslo je napačno"<<endl;

    return 0;
}
