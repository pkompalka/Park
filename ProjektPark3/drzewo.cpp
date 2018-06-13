#include <iostream>
#include <string>
#include "drzewo.h"
#include "lawka.h"

using namespace std;

Drzewo::Drzewo()
{
#ifdef _DEBUG
	cout << "Wywolano domyslny konstruktor drzewa" << endl;
#endif
	gatunek_drzewa = "brzoza";
	wiek_drzewa = 60;
	siedzace_golebie = 2;
}

Drzewo::Drzewo(string gatunek, int wiek, int golebie)
{
#ifdef _DEBUG
	cout << "Wywolano konstruktor drzewa" << endl;
#endif
	gatunek_drzewa = gatunek;
	wiek_drzewa = wiek;
	siedzace_golebie = golebie;
}

Drzewo::~Drzewo()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor drzewa" << endl;
#endif
}

void Drzewo::ileGolebi()
{
	cout << "Na drzewie siedzi " << siedzace_golebie << " golebi" << endl;
}

void Drzewo::porownanieMaterialu(Lawka & lawka)
{
	if (lawka.material_lawki == gatunek_drzewa)
	{
		cout << "Drzewo i lawka to ten sam gatunek drewna: " << gatunek_drzewa << endl << endl;
	}
	else
	{
		cout << "Drzewo i lawka to rozne gatunki drewna: " << gatunek_drzewa << " i " << lawka.material_lawki << endl << endl;
	}
}

ostream& operator<<(ostream &out, Drzewo & inny)
{
	out << "INFORMACJE O DRZEWIE \nGatunek: " << inny.gatunek_drzewa << "\nWiek: " << inny.wiek_drzewa << " lat" << endl;
	if (inny.siedzace_golebie)
	{
		out << "Na drzewie siedzi " << inny.siedzace_golebie << " golebi" << endl << endl;
	}
	else
	{
		out << "Na drzewie nie siedza golebie" << endl << endl;
	}
	return out;
}

bool Drzewo::operator > (const Drzewo & inny)
{
	if (wiek_drzewa > inny.wiek_drzewa)
	{
		return true;
	}
	else
	{
		return false;
	}
}

Drzewo & Drzewo::operator += (const Drzewo & inny)
{
	siedzace_golebie += inny.siedzace_golebie;
	return *this;
}

Drzewo & Drzewo::operator -= (const Drzewo & inny)
{
	if (siedzace_golebie >= inny.siedzace_golebie)
	{
		siedzace_golebie -= inny.siedzace_golebie;
	}
	return *this;
}

Drzewo & Drzewo::operator *= (const Drzewo & inny)
{
	siedzace_golebie *= inny.siedzace_golebie;
	return *this;
}

Drzewo & Drzewo::operator ++ (int)
{
	siedzace_golebie++;
	return *this;
}

Drzewo & Drzewo::operator -- (int)
{
	if (siedzace_golebie > 0)
	{
		siedzace_golebie--;
	}
	return *this;
}
