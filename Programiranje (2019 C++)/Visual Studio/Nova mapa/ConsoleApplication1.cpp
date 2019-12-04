/*
Avtor: Vito Seniè
Datum: 23.10.2019
Predmet: Programiranje
*/

/*

DELO:

Vnos dveh števil 
Prenos 2 števil v funkcijo
FUNKCIJA:
  Zaèete pri 1. številu
  Dodaj število k neki vsoti
  Seštevanje do zadnjega števila
  Funkcija vrne vsoto števil
Izpišemo na zaslon

*/



#include "pch.h"
#include <iostream>
using namespace std;

//funkcija ki sešteje števila med podanimi paramenti
int sestej(int a, int b)
{
	int vsota = 0;
       for (int i=a;i<=b;i++)
	   {
	    	vsota += i;
	   }
	return vsota;
}

//fukcija ki sešteva parna števila

int parna(int a, int b)
{
	int vsota = 0;
	for (int i = a; i <= b; i++)
	{
		//tu nekaj majnka
		if ((i % 2) == 0)
		vsota += i;
	}
	return vsota;
}

//fukcija ki sešteva neparna števila

int neparna(int a, int b)
{
	int vsota = 0;
	for (int i = a; i <= b; i++)
	{
		//tu nekaj majnka
		if ((i % 1) == 1)
			vsota += i;
	}
	return vsota;
}

void izpis(int a, int b)
{

	for (int i = a; i <= b; i++)
	{
		cout << i << " ";
	}
	 
}




int main()
{

	int stevilo1, stevilo2;
    cout << "Vnesi 1.stevilo"; 
	cin >> stevilo1;
	cout << "Vnesi 2.stevilo";
	cin >> stevilo2;
	     cout << "Sestevek stevil med " << stevilo1 << " in stevilom " << stevilo2 << " je " << sestej(stevilo1, stevilo2) << endl;

	     cout << "Sestevek parnih stevil med " << stevilo1 << " in stevilom " << stevilo2 << " je " << parna(stevilo1, stevilo2) << endl;

		 cout << "Sestevek neparnih stevil med " << stevilo1 << " in stevilom "<< stevilo2 << " je " << neparna(stevilo1, stevilo2) << endl;

		 cout << "Sestevek vseh stevil med " << stevilo1 << " in stevilom " << stevilo2 << " je " << izpis(stevilo1, stevilo2  << endl;

		 izpis 


}