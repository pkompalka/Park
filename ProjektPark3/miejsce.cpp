#include <iostream>
#include <string>
#include "miejsce.h"

using namespace std;

Miejsce::Miejsce()
{
#ifdef _DEBUG
	cout << "Wywolano domyslny konstruktor miejsca" << endl;
#endif
	nazwa_miejsca = "Miejsce";
	rok_zalozenia = 0;
}

Miejsce::~Miejsce()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor miejsca" << endl;
#endif
}

ostream& operator<<(ostream &s, Miejsce &miejsce)
{
	s << miejsce.nazwa_miejsca << " " << miejsce.rok_zalozenia << " ";
	return s;
}

string Miejsce::zwrocFoto()
{
	return string(foto);
}

string Miejsce::zwrocNazwe()
{
	return string(nazwa_miejsca);
}

int Miejsce::zwrocRok()
{
	return int(rok_zalozenia);
}

int Miejsce::zwrocDrzewa()
{
	return int(NULL);
}

int Miejsce::zwrocLawki()
{
	return int(NULL);
}

int Miejsce::zwrocPomniki()
{
	return int(NULL);
}

string Miejsce::zwrocFestyn()
{
	return string("brak festynu");
}

int Miejsce::zwrocKaczki()
{
	return int(NULL);
}

int Miejsce::zwrocLabedzie()
{
	return int(NULL);
}

int Miejsce::zwrocHustawki()
{
	return int(NULL);
}

string Miejsce::zwrocKolor()
{
	return string("brak hustawek");
}

