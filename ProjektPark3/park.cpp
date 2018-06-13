#include <vector>
#include "drzewo.h"
#include "lawka.h"
#include "pomnik.h"
#include "park.h"

using namespace std;

int Park::liczba_parkow = 0;

Park::Park()
{
#ifdef _DEBUG
	cout << "Wywolano domyslny konstruktor parku" << endl;
#endif
	nazwa_miejsca = "Park";
	rok_zalozenia = 1900;
	festyn = "Dzien Parku";
	foto = "park.jpg";
	liczba_parkow++;
	for (int i = 0; i < MAX_DRZEW; i++)
	{
		kontener_drzew.push_back(Drzewo());
	}
	for (int i = 0; i < MAX_LAWEK; i++)
	{
		kontener_lawek.push_back(Lawka());
	}
	kontener_pomnikow.push_back(Pomnik());
}

Park::~Park()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor parku" << endl;
#endif
	liczba_parkow--;
}

void Park::daneParku()
{
	cout << "Nazwa parku: " << nazwa_miejsca << endl;
	cout << "Rok zalozenia parku: " << rok_zalozenia << endl;
	cout << "Trwajacy festyn: " << festyn << endl;
}

void Park::dodajDrzewo(Drzewo nowe_drzewo)
{
	kontener_drzew.push_back(nowe_drzewo);
}

void Park::dodajLawke(Lawka nowa_lawka)
{
	kontener_lawek.push_back(nowa_lawka);
}

void Park::dodajPomnik(Pomnik nowy_pomnik)
{
	kontener_pomnikow.push_back(nowy_pomnik);
}

void Park::usunPomnik()
{
	if (kontener_pomnikow.size() > 0)
	{
		kontener_pomnikow.pop_back();
		cout << "Usunieto pomnik z parku" << endl << endl;
	}
	else
	{
		cout << "W parku nie ma pomnikow do usuniecia" << endl << endl;
	}
}

void Park::wypiszDrzewa()
{
	for (int i = 0; i < kontener_drzew.size(); i++)
	{
		cout << i + 1 << ". drzewo to " << kontener_drzew[i].gatunek_drzewa << endl;
	}
}

void Park::wypiszLawki()
{
	for (int i = 0; i < kontener_lawek.size(); i++)
	{
		cout << i + 1 << ". lawka ma kolor " << kontener_lawek[i].kolor_lawki << endl;
	}
}

void Park::wypiszPomniki()
{
	for (int i = 0; i < kontener_pomnikow.size(); i++)
	{
		cout << i + 1 << ". pomnik to " << kontener_pomnikow[i].nazwa_pomnika << endl;
	}
}

void Park::wypiszInformacje()
{
	daneParku();
	wypiszDrzewa();
	wypiszLawki();
	wypiszPomniki();
}

string Park::powitanie()
{
	return string("Witamy w parku");
}

int Park::podajLiczbeParkow()
{
	return liczba_parkow;
}

ostream& operator << (ostream &s, Park &park)
{
	s << park.nazwa_miejsca << " " << park.rok_zalozenia << " " << park.festyn << endl;
	return s;
}

int Park::zwrocDrzewa()
{
	int i = kontener_drzew.size();
	return(i);
}

int Park::zwrocLawki()
{
	int i = kontener_lawek.size();
	return(i);
}

int Park::zwrocPomniki()
{
	int i = kontener_pomnikow.size();
	return(i);
}

string Park::zwrocFestyn()
{
	return string(festyn);
}
