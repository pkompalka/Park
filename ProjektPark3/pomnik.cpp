#include <iostream>
#include <string>
#include "pomnik.h"

using namespace std;

Pomnik::Pomnik()
{
#ifdef _DEBUG
	cout << "Wywolano domyslny konstruktor pomnika" << endl;
#endif
	nazwa_pomnika = "Pomnik Trzech Orlow";
	budulec_pomnika = "kamien";
	kolor_pomnika = "czarny";
}

Pomnik::Pomnik(string nazwa, string budulec, string kolor)
{
#ifdef _DEBUG
	cout << "Wywolano konstruktor pomnika" << endl;
#endif
	nazwa_pomnika = nazwa;
	budulec_pomnika = budulec;
	kolor_pomnika = kolor;
}

Pomnik::~Pomnik()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor pomnika" << endl;
#endif
}

void Pomnik::pelnaNazwaPomnika()
{
	string pelna_nazwa;
	pelna_nazwa = nazwa_pomnika + " koloru " + kolor_pomnika + " z materialu " + budulec_pomnika;
	cout << "Ten pomnik to: " << pelna_nazwa << endl << endl;
}

string Pomnik::podajKolor()
{
	return kolor_pomnika;
}
