// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

//funkcija, ki nam vrne število znakov iskanega niza

int kolikokrat(string niz, char znak)
{
	int stevec = 0; //stevec znakov postavimo na 0
	for (int i = 0; i < niz.size(); i++) //for zanka z parametri izvajanja
	{
		if (niz[i] == znak)//pogoj èe je èrka v nizu enaka iskanemu
			stevec++; // ob ispolnjenem pogoju poveèamo
	}
	return stevec;

}

/*int main()
{
	string stavek;
	char crka;
    cout << "Vnesi poljuben stavek; "<<endl; 
	getline(cin, stavek);
	cout << "Vnesi iskano crko: ";
	cin >> crka;
		cout << "Znak " << crka << " se pojavi v nizu " << kolikokrat(stavek, crka) << " x." << endl;
}*/

//funkcija, ki bere od zadaj naprej
void  kontra(string niz)
{
	
	for (int i = niz.size() - 1; i < 0; i--) //zanka, ki zaène kontra
	{
		
		cout << niz[i];
				

	}
	

}

int main()
{
	string stavek;
	char crka;
	cout << "Vnesi poljuben stavek; " << endl;
	getline(cin, stavek);
	cout << "Vnesi iskano crko: ";
	cin >> crka;
	cout << "Znak " << crka << " se pojavi v nizu " << kolikokrat(stavek, crka) << " x." << endl;
	cout << "izpis stavka narobe " << endl;

	for (int i = stavek.size() - 1; i >= 0; i--) //zanka, ki zaène kontra
	{
		cout << stavek[i] << endl;//izpis posameznega znaka
	}

	return 0;
}