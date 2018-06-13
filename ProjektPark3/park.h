#pragma once
#define MAX_DRZEW 50
#define MAX_LAWEK 20
#include <vector>
#include "miejsce.h"
#include "drzewo.h"
#include "lawka.h"
#include "pomnik.h"

using namespace std;

class Park : public Miejsce
{
public:
	Park();
	~Park();
	void daneParku();
	void dodajDrzewo(Drzewo nowe_drzewo);
	void dodajLawke(Lawka nowa_lawka);
	void dodajPomnik(Pomnik nowy_pomnik);
	void usunPomnik();
	void wypiszDrzewa();
	void wypiszLawki();
	void wypiszPomniki();
	void wypiszInformacje();
	string powitanie();
	static int podajLiczbeParkow();
	friend ostream& operator << (ostream &s, Park &park);
	int zwrocDrzewa();
	int zwrocLawki();
	int zwrocPomniki();
	string zwrocFestyn();
protected:
	static int liczba_parkow;
	string festyn;
	vector < Drzewo > kontener_drzew;
	vector < Lawka > kontener_lawek;
	vector < Pomnik > kontener_pomnikow;
};
