5/*

Avtor: Vito Seniè
Datum: 06.11.2019
Vsebina: Uporabnik vnese število in nam program vrne razbije na števke
*/

#include "pch.h"
#include <iostream>
using namespace std;

//funkcija, ki nam vraèa število seštevca
void izpisiStevke(int a)
{

	int stevka;
	while (a > 0)
	{
		stevka = a % 10;
		cout << stevka << endl;
		a = a / 10;
	}

}


int main()
{
	system("chcp 1250");//za šumnike
	system("cls");//brisanje zaslona
	int stevilo;
	cout << "Vnesi število od katerega bom sesteli";
	cin >> stevilo;

	izpisiStevke(stevilo);

	system("pause");


}