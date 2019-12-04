/*

Avtor: Vito Seniè
Datum: 06.11.2019
Vsebina: Uporabnik vnese število in nam program vrne seštevek do tega stevila

*/


#include "pch.h"
#include <iostream>
#include <string>
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
	int stevec = 1;

	//vnos uporabnika
	do
	{
		cout << stevec << ". poskus\n";
		cout << "Vnesi Geslo\n";
		getline(cin, geslo);

		if (JePravilnoGeslo(geslo))
		{
			system("cls");
			cout << "Geslo JE pravilno!" << endl;
			cout << "Stevilo preiskusov je: " << stevec << " poskusov" << endl;

		}
			
		else
		{
			
			system("cls");
			cout << " Geslo NI pravilno!\n";

		}
		stevec++;

	} while (JePravilnoGeslo(geslo) != true);

	return 0;


}
