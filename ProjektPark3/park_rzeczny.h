#pragma once
#include "park.h"

using namespace std;

class Park_rzeczny : public Park
{
public:
	Park_rzeczny();
	~Park_rzeczny();
	void wypiszInformacje();
	string powitanie();
	void nakarmKaczki();
	friend ostream& operator << (ostream &s, Park_rzeczny &rzeczny);
	int zwrocKaczki();
	int zwrocLabedzie();
private:
	int ilosc_kaczek;
	int ilosc_labedzi;
};