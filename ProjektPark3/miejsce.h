#pragma once
#include <iostream>
#include <string>

using namespace std;

class Miejsce
{
public:
	Miejsce();
	virtual ~Miejsce();
	virtual void wypiszInformacje() = 0;
	virtual string powitanie() = 0;
	friend ostream& operator << (ostream &s, Miejsce &miejsce);
	string zwrocFoto();
	string zwrocNazwe();
	int zwrocRok();
	virtual int zwrocDrzewa();
	virtual int zwrocLawki();
	virtual int zwrocPomniki();
	virtual string zwrocFestyn();
	virtual int zwrocKaczki();
	virtual int zwrocLabedzie();
	virtual int zwrocHustawki();
	virtual string zwrocKolor();
protected:
	int rok_zalozenia;
	string nazwa_miejsca;
	string foto;
};