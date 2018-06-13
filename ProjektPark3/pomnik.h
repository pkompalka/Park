#pragma once
#include <iostream>
#include <string>

using namespace std;

class Pomnik
{
public:
	Pomnik();
	Pomnik(string nazwa, string budulec, string kolor);
	~Pomnik();
	void pelnaNazwaPomnika();
	string podajKolor();
	friend class Park;
private:
	string nazwa_pomnika;
	string budulec_pomnika;
	string kolor_pomnika;
};
