#include <iostream>

using namespace std;

class Uczen
{
public:
	string imie, nazwisko, grupa;
	int rok_urodzenia, klasa;

	
	void metryczka() {
		cout << "Imie: Robert";
		cout << "Nazwisko: Dec";
		cout << "Klasa: 3Cg";
	}

};
Uczen& pobierzDane(Uczen&);
void pobierzDane(const Uczen&);

int main()
{
	Uczen uczen1;
	pobierzDane(uczen1);

}

Uczen & pobierzDane(Uczen &u) {
	cout << "Podaj imie:";
	cin >> u.imie;
	cout << endl << "Podaj nazwisko:";
	cin >> u.nazwisko;
	cout << endl << "Podaj rok urodzenia:";
	cin >> u.rok_urodzenia;
	cout << endl << "Podaj grupe:";
	cin >> u.grupa;
	cout << endl << "Podaj klase:";
	cin >> u.klasa;

	cout << endl << "Imie: " << u.imie << endl;
	cout << "Nazwisko: " << u.nazwisko << endl;
	cout << "roku_rodzenia: " << u.rok_urodzenia << endl;
	cout << "Grupa: " << u.grupa << endl;
	cout << "Klasa: " << u.klasa << endl;
	return u;
}