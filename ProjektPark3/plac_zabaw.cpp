#include "miejsce.h"
#include "plac_zabaw.h"

using namespace std;

Plac_zabaw::Plac_zabaw()
{
#ifdef _DEBUG
	cout << "Wywolano domyslny konstruktor placu" << endl;
#endif
	nazwa_miejsca = "Plac zabaw";
	rok_zalozenia = 2005;
	ilosc_hustawek = 4;
	kolor_hustawek = "czerwony";
	foto = "plac.jpg";
	for (int i = 0; i < MAX_DRZEW1; i++)
	{
		kontener_drzew.push_back(Drzewo());
	}
	for (int i = 0; i < MAX_LAWEK1; i++)
	{
		kontener_lawek.push_back(Lawka());
	}
}

Plac_zabaw::~Plac_zabaw()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor placu" << endl;
#endif
}

void Plac_zabaw::wypiszInformacje()
{
	cout << "Nazwa miejsca: " << nazwa_miejsca << endl;
	cout << "Rok zalozenia: " << rok_zalozenia << endl;
	cout << "Ilosc hustawek: " << ilosc_hustawek << endl;
	cout << "Kolor hustawek: " << kolor_hustawek << endl;
}

string Plac_zabaw::powitanie()
{
	return string ("Witamy na placu zabaw");
}

ostream& operator<<(ostream &s, Plac_zabaw &plac)
{
	s << plac.nazwa_miejsca << " " << plac.rok_zalozenia << " " << plac.ilosc_hustawek << " " << plac.kolor_hustawek << endl;
	return s;
}

int Plac_zabaw::zwrocHustawki()
{
	return int(ilosc_hustawek);
}

string Plac_zabaw::zwrocKolor()
{
	return string(kolor_hustawek);
}

int Plac_zabaw::zwrocDrzewa()
{
	int i = kontener_drzew.size();
	return(i);
}

int Plac_zabaw::zwrocLawki()
{
	int i = kontener_lawek.size();
	return(i);
}