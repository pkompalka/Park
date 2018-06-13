#pragma once
#include <iostream>
#include <string>
#include "lawka.h"

using namespace std;

class Drzewo
{
public:
	Drzewo();
	Drzewo(string gatunek, int wiek, int golebie);
	~Drzewo();
	void ileGolebi();
	void porownanieMaterialu(Lawka & lawka);
	friend ostream& operator<<(ostream &out, Drzewo & inny);
	bool operator > (const Drzewo & inny);
	Drzewo& operator += (const Drzewo & inny);
	Drzewo& operator -= (const Drzewo & inny);
	Drzewo& operator *= (const Drzewo & inny);
	Drzewo& operator ++ (int);
	Drzewo& operator -- (int);
	friend class Park;
private:
	string gatunek_drzewa;
	int wiek_drzewa;
	int siedzace_golebie;
};
