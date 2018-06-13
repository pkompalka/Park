#pragma once
#include "miejsce.h"
#include "drzewo.h"
#include "lawka.h"
#include <vector>
#define MAX_DRZEW1 10
#define MAX_LAWEK1 5

using namespace std;

class Plac_zabaw : public Miejsce
{
public:
	Plac_zabaw();
	~Plac_zabaw();
	void wypiszInformacje();
	string powitanie();
	friend ostream& operator << (ostream &s, Plac_zabaw &plac);
	int zwrocHustawki();
	string zwrocKolor();
	int zwrocDrzewa();
	int zwrocLawki();
private:
	int ilosc_hustawek;
	string kolor_hustawek;
	vector < Drzewo > kontener_drzew;
	vector < Lawka > kontener_lawek;
};