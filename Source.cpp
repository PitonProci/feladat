#include <iostream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;


//terfogat/feluolet szamolo
/*


double felszam(double a, double b, double c) {
	double felulet = 0;

	felulet = (a * b + a * c + b * c) * 2;

	return felulet;
}


double terszam(double a, double b, double c) {
	double terfog = 0;

	terfog = a * b * c;

	return terfog;
}


int main() {

	double a;
	double b;
	double c;
	char dontes;
	char dontes2;

	cout << "ez egy gecis felület/terfogat szamolo teglatestekhez. vagy kockakhoz. te geci." << endl;
	for (int i = 0; i < 2; i++)
	{
		cout << "-----------------------------" << endl;
	}

	cout << "kockat(k) akarsz szamolni vagy teglatestet(t)? k/t ";
	cin >> dontes;
	dontes = tolower(dontes);
	switch (dontes)
	{
	case 't':
			cout << "terfogatot vagy feluletet akarsz?(t/f)";
			cin >> dontes2;
			dontes2 = tolower(dontes2);
		switch (dontes2)
		{
		case 't':
			cout << "add meg az A oldalt!" << endl << "a:";
			cin >> a;
			cout << "add meg a B oldalt!" << endl << "b:";
			cin >> b;
			cout << "add meg a C oldalt is lecci" << endl << "c:";
			cin >> c;

			cout << terszam(a, b, c);
			break;
		case 'f':
			cout << "add meg az A oldalt!" << endl << "a:";
			cin >> a;
			cout << "add meg a B oldalt!" << endl << "b:";
			cin >> b;
			cout << "add meg a C oldalt is lecci" << endl << "c:";
			cin >> c;

			cout << felszam(a, b, c);
			break;
		default:
			cout << "ezt elbasztad xd";
			break;
		}
		break;
	case 'k':
		cout << "terfogatot vagy feluletet akarsz?(t/f)";
		cin >> dontes2;
		dontes2 = tolower(dontes2);

		switch (dontes2)
		{

		case 'f':

			cout << "add meg az egyetlen A  oldalt!" << endl << "a:";
			cin >> a;
			cout << felszam(a, a, a);
			break;

			break;
		case 't':

			cout << "add meg az egyetlen A  oldalt!" << endl << "a:";
			cin >> a;
			cout << terszam(a, a, a);
			break;

			break;
		default:
			cout << "ezt elbasztad xd";
			break;
		}
		break;
	default:
		"ez nem jott osze, rossz karakert utottel be.nyomorek xd. problad ujra";
		break;
	}

	int t = rand();
	cout << "t";

	return 0;
}







*/

//szam kitalalos
/*
int main() {


	srand(time(0));
	const short int szam = rand() % 100 + 1;
	short int tipp{ 0 };
	int proba = 1;

	cout << "ez egy szam kitalalos jatek." << endl << endl << endl << "tippelj egy szamot!"<< endl << "tipp:";


	while (tipp != szam){

		cin >> tipp;
		if (szam < tipp)
		{
			cout << "A szam kissebb!" << endl;
			proba++;
		}else if(szam > tipp){

			cout << "A szam nagyobb!" << endl;
			proba++;
		}else {}
	}

	cout << "eltaláltad a számot ( " << szam << " ) " << proba << " próbálkozásból!";

	return 0;
}


*/

//bankolos v1(funckokba tobbet kene irni lol)
/*

void showbal(double bal, string penz) {

	cout << "Az egyenleged: " << bal << " " << penz << endl;
}


double add(double bal, double fel) {

	bal = bal + fel;
	return bal;
}

double sub(double bal, double le) {

	bal = bal - le;
	return bal;
}




int main() {
	short int choice = 0;

	double bal = 0;
	string penz = "HUF";
	double fel;
	double le;
	char dont;

	cout << "Ez egy bankolós program. Alap egyenleged forintban van." << endl;
	for (int i = 0; i < 3; i++){
		cout << "--------------------------\n";
	}

	while (choice != 5)
	{
		cout << "Mit szeretnél csinálni?\n" << "1.  Egyenleget feltölteni\n" << "2.  Pénzt kivenni\n" << "3.  Egyenleget lekérdezni\n"  << "4.  Pénznemet kiválasztani(1 EUR = 410 HUF) \n" << "5.  Kilépni\n";

		cin >> choice;

		switch (choice)
		{
		case 1:

			cout << "Mennyit szeretnel feltölteni ?" << endl;
			cin >> fel;
			bal = add(bal, fel);

			break;
		case 2:
			cout << "Mennyit szeretnel kivenni ?" << endl;
			cin >> le;
			if (bal < le || bal <= 0) {

				cout << "nincsen elég pénz a számládon.\n";
			}else {

			bal = sub(bal, le);
			}

			break;
		case 3:
			showbal(bal, penz);
			break;
		case 4:
			if (penz == "HUF"){
				cout << "Egyenlõre csak euróra tudsz váltani forintról. Ez egy 0.0001%-os átvlátási költséggel jár.  Át szeretnéd váltani? (I/N)" << endl;
				cin >> dont;
				switch (dont)
				{
				case 'I':
					penz = "EUR";
					bal = bal / 410 - (bal * 0.0001);

					break;
				case 'N':
					cout << "Átváltás sikeresen megszakítva! \n";
					break;
				default:
					cerr << "Az átváltás megszakadt.\n";
					break;
				}
			}else{
				cout << "Egyenlõre csak forintra tudsz váltani euróról. Ez egy 0.0001%-os átvlátási költséggel jár.  Át szeretnéd váltani? (I/N)" << endl;
				cin >> dont;
					switch (dont){
					case 'I':
						penz = "HUF";
						bal = bal * 410 - (bal * 0.0001);

						break;
					case 'N':
						cout << "Átváltás sikeresen megszakítva! \n";
						break;
					default:
						cerr << "Az átváltás megszakadt.\n";
						break;
				}
			}
			break;
		case 5:
			break;
		default:
			break;
		}
	}

	return 0;
}

*/

//csoves ko papir ollo(fejleszteni kene(nehezseg es ha max akkor a jatek csak lecsalja es automatikusan vesztesz)) 
/*
char getComputerChoice() {
	cout << "A gép gondolkodik...\n";
	//_sleep(1000);
	char ccc;
	srand(time(0));
	int cc = rand() % 3 + 1;
	switch (cc)
	{
	case 1:
		ccc = 'K';
		break;
	case 2:
		ccc = 'P';
		break;
	case 3:
		ccc = 'O';
		break;
	}

	return ccc;
}
char getUserChoince() {
	char uc;
	cout << "K/P/O?";

	cin >> uc;
	while (uc != 'K' && uc != 'P' && uc != 'O') {
		cout << "Ez nem szerepel a valasztasaid kozott. probald ujra\n";
		cin >> uc;
	}
	switch (uc)
	{
	case 'K':
		cout << "\nA Követ választottad!\n";
			break;
	case 'P':
		cout << "\nA Papírt választottad!\n";
		break;
	case 'O':
		cout << "\n Az Ollót választottad!\n";
		break;
	}
	return uc;
}
string dontes(char getUserChoince, char getComputerChoice) {

	if (getUserChoince == getComputerChoice) {
		return "Döntetlen! a gép is ugyan ezt válaszototta";

	}else if(getUserChoince == 'K' && getComputerChoice == 'O') {
		return "Nyertél.";

	}
	else if (getUserChoince == 'P' && getComputerChoice == 'K') {

		return "Nyertél!";
	}
	else if (getUserChoince == 'O' && getComputerChoice == 'P') {

		return "Nyertél!";
	}
	else {

		return "Vesztettél.";
	}

}


int main() {
	cout << "kö papir ollos jatek lol" << endl << "************************" << endl;

	char uc = getUserChoince();
	char cc = getComputerChoice();

	cout << dontes(uc, cc); ;

	return 0;

}

*/

//tombben adat kereses 
/*

int arrkeres(int szamok[], int keresett, int meret) {
	int meret1 = 0;

		while(szamok[meret1] != keresett) {

			meret1++;
			if (meret < meret1) {

				cout << "Nincsen ilyen szám a tömbben.";
				break;
			}
		}

	return meret1 += 1;
}


int main(){



	int szamok[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int keresett;
	int meret = sizeof(szamok) / sizeof(szamok[0]) - 1;
	cin >> keresett;
	int ittvan = arrkeres(szamok, keresett, meret);
	cout << ittvan;

	return 0;
}
*/

//vegre sort
/*
void sort(int arr[], int meret) {
	int temp = 0;


	for (int i = 0; i < meret - 1; i++) {

		for (int j = 0; j < meret - i - 1; j++) {

			if (arr[j] > arr[j + 1]) {

				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}
			else {}


		}

	}

}


int main() {

	int arr[] = { 3, 40, 20, 20, 300, 4, 6, 7, 9 };
	int meret = sizeof(arr) / sizeof(arr[0]);

	sort(arr, meret);

	for (int j = 0; j < meret; j++) {

		cout << arr[j] << endl;
	}

	return 0;
}


*/