#include <iostream>
#include <string>
#include "lawka.h"

using namespace std;

Lawka::Lawka()
{
#ifdef _DEBUG
	cout << "Wywolano domyslny konstruktor lawki" << endl;
#endif
	kolor_lawki = "bialy";
	material_lawki = "brzoza";
	pojemnosc_lawki = 2;
	czy_farbowana = true;
}

Lawka::Lawka(string kolor, string material, int pojemnosc, bool farba)
{
#ifdef _DEBUG
	cout << "Wywolano konstruktor lawki" << endl;
#endif
	kolor_lawki = kolor;
	material_lawki = material;
	pojemnosc_lawki = pojemnosc;
	czy_farbowana = farba;
}

Lawka::~Lawka()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor lawki" << endl;
#endif
}

void Lawka::farbowanieLawki()
{
	if (czy_farbowana == 0)
	{
		cout << "Pokryto lawke wykonana z drzewa gatunku " << material_lawki <<" farba ochronna" << endl << endl;
		czy_farbowana = czy_farbowana + 1;
	}
	else
	{
		cout << "Lawka wykonana z drzewa gatunku " << material_lawki << " jest pokryta farba ochronna" << endl << endl;
	}
}

ostream& operator<<(ostream &out, Lawka & inny)
{
	out << "INFORMACJE O LAWCE \nKolor: " << inny.kolor_lawki << "\nMaterial: " << inny.material_lawki << "\nLawka maksymalnie pomiesci " << inny.pojemnosc_lawki << " osoby" << endl;
	if (inny.czy_farbowana)
	{
		out << "Lawka jest pokryta farba ochronna" << endl << endl;
	}
	else
	{
		out << "Lawka nie jest pokryta farba ochronna" << endl << endl;
	}
	return out;
}

bool Lawka::operator == (const Lawka & inny)
{
	if (!(kolor_lawki == inny.kolor_lawki))
	{
		return false;
	}
	else if (!(material_lawki == inny.material_lawki))
	{
		return false;
	}
	else if (!(pojemnosc_lawki == inny.pojemnosc_lawki))
	{
		return false;
	}
	else if (!(czy_farbowana == inny.czy_farbowana))
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool Lawka::operator < (const Lawka & inny)
{
	if (pojemnosc_lawki < inny.pojemnosc_lawki)
	{
		return true;
	}
	else
	{
		return false;
	}
}
