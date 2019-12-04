/*

Avtor: Vito Seniè
Datum: 06.11.2019
Vsebina: Uporabnik vnese število in nam program vrne seštevek do tega stevila

*/

#include "pch.h"
#include <iostream>
using namespace std;

//funkcija, ki nam vraèa število seštevca
int sestevanjeStevil(int a)
{
	int
		vsota = 0;
	int st = 0;
	while (st <= a)
	{
		vsota = vsota + a;
		st++; 

	}


	return vsota;

}


int main()
{
	system("chcp 1250");//za šumnike
	system("cls");//brisanje zaslona
	int stevilo;
    cout << "Vnesi število od katerega bom sesteli"; 
	cin >> stevilo;
	
	cout <<"sestevek vseh stevil do stevila" << stevilo << " je " << sestevanjeStevil(stevilo) << endl;

	system("pause");


}