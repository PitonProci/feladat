#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <stdlib.h>
#include <limits>
#include <windows.h>

using namespace std;

static void wait() {

	for (int j = 0; j < 3; j++) {

		for (int i = 0; i < 10; i++)
		{
			cout << ".";
			Sleep(60);
		}
		cout << endl;
	}

}

static void compare(int valasz, char helyes, int i) {

	if (helyes[i][valasz] == 'I') {
		cout << "az elso valaszod helyes!";
		
	}else{}

}

//quiz jatek
int main() {

	char keszen;
	
	//a kerdeseid es a kerdesek szama
	string kerdesek[] = { "Mennyi 2020?", "Mikor van karácsony?", "Mikor van nagypéntek?", "Mikor van szilveszter?", };
	const int meret = sizeof(kerdesek) / sizeof(kerdesek[0]);
	
	//valasz lehetosegek
	string valaszok[meret][4] = {
		{"1. 2020", "2. 2019", "3. feketek", " 4.negerek"},
		{"1.november", "2, 3044", "zsido unnep", "december"},
		{"1.szombaton.","2. csütrötkön","pénteken","októberben"},
		{"1. pénteken","2. december 31","mindig karácsonykor","bomba"}
	};

	char helyes[meret][4] = { 
		{ 'I', 'H', 'H', 'H'},
		{ 'H', 'H', 'H', 'I'},
		{ 'H', 'H', 'I', 'H'},
		{ 'H', 'I', 'H', 'H'}
	};

	//program indul
	cout << "Tippszmix game" << endl << "--------------------------" << endl << "Készen állsz ?" << endl << "--------------------------" << endl;
	cout << "Igen(I) Nem(N) : ";
	cin >> keszen; // ready statusz
	
	while (keszen != 'I' && keszen != 'N')
	{
		cout << "Ez nem szerepelt a valasztasi lehetosegeid kozott!";
		cin >> keszen;
	}


	switch (keszen)
	{
	case 'I':
		
		int valasz[meret] = {};

		cout << "Akkor kezdjuk el!" << endl;

		wait;//... kiirasa

		for (int i = 0; i < meret; i++)//adott kerdes es a hozza tartozo valaszok kiirasa
		{
			
			cout << i + 1 << ". Kérdés: " << kerdesek[i] << endl;//kerdes
			for (string out : valaszok[i]) { //valaszok(egesz sor)
				cout << out << " ";
			}
			cout << endl << "A Valaszod: ";
			cin >> valasz[i]; 
			
			compare(valasz[i], helyes, i); //helyes a valasz?

		}

		break;
	case 'N':
		cout << "Akkor nem jatszunk. Jo felkeszulest!";
		break;
	}

	cout << "Az eredményed: " << endl;
	


	return 0;
}