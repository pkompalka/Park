#include "park.h"
#include "park_rzeczny.h"

using namespace std;

Park_rzeczny::Park_rzeczny()
{
#ifdef _DEBUG
	cout << "Wywolano domyslny konstruktor parku rzecznego" << endl;
#endif
	nazwa_miejsca = "Park rzeczny";
	rok_zalozenia = 1950;
	festyn = "Dzien Rzeki";
	ilosc_kaczek = 20;
	ilosc_labedzi = 6;
	liczba_parkow++;
	kontener_pomnikow.push_back(Pomnik("Statua labedzia", "marmur", "bialy"));
	foto = "rzeczny.jpg";
	for (int i = 0; i < 10; i++)
	{
		kontener_drzew.push_back(Drzewo());
	}
	for (int i = 0; i < 5; i++)
	{
		kontener_lawek.pop_back();
	}
}

Park_rzeczny::~Park_rzeczny()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor parku rzecznego" << endl;
#endif
}

void Park_rzeczny::wypiszInformacje()
{
	Park::daneParku();
	Park::wypiszDrzewa();
	Park::wypiszLawki();
	Park::wypiszPomniki();
	cout << "W parku jest " << ilosc_kaczek << " kaczek" << endl;
	cout << "W parku jest " << ilosc_labedzi << " labedzi" << endl;
}

string Park_rzeczny::powitanie()
{
	return string ("Witamy w parku rzecznym");
}

void Park_rzeczny::nakarmKaczki()
{
	cout << "Kaczki zostaly nakarmione" << endl;
}

ostream& operator << (ostream &s, Park_rzeczny &rzeczny)
{
	s << rzeczny.nazwa_miejsca << " " << rzeczny.rok_zalozenia << " " << rzeczny.festyn << " " << rzeczny.ilosc_kaczek << " " << rzeczny.ilosc_labedzi << endl;
	return s;
}

int Park_rzeczny::zwrocKaczki()
{
	return int(ilosc_kaczek);
}

int Park_rzeczny::zwrocLabedzie()
{
	return int(ilosc_labedzi);
}
