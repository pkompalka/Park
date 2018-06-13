#pragma once
#include <iostream>
#include <string>

using namespace std;

class Lawka
{
public:
	Lawka();
	Lawka(string kolor, string material, int pojemnosc, bool farba);
	~Lawka();
	void farbowanieLawki();
	friend ostream& operator<<(ostream &out, Lawka & inny);
	bool operator == (const Lawka & inny);
	bool operator < (const Lawka & inny);
	friend class Drzewo;
	friend class Park;
private:
	string kolor_lawki;
	string material_lawki;
	int pojemnosc_lawki;
	bool czy_farbowana;
};
