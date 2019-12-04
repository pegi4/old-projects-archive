/*

Avtor: Vito Seniè
Datum: 06.11.2019
Vsebina: Uporabnik vnese število in nam program vrne seštevek do tega stevila

*/


#include "pch.h"
#include <iostream>
#include <Windows.ha>
using namespace std;

//funkvija za preverjanje gesla

bool JePravilnoGeslo(string vpisanoGeslo)
{
	if (vpisanoGeslo == "admin")
		return true;
	else
		return false;
}

int main()
{

	//Definicija spremenljivk

	string geslo;
	int stevec = 0;

	//vnos uporabnika
	do
	{

		cout << "Vnesi Geslo\n";
		getline(cin, geslo);

		if (JePRaviloGeslo(geslo))
			cout << " Geslo JE pravilno!";
		else
		{
			cout << " Geslo NI pravilno!\n";
			system("cls");
		}

	} while (JePravilnoGeslo(geslo) != true);

	return 0;
    

}


