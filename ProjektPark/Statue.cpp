#include <iostream>
#include <string>
#include "statue.h"

using namespace std;

Statue::Statue()
{
#ifdef _DEBUG
	cout << "Default constructor of statue" << endl;
#endif
	nameOfStatue = "Statue of Three Eagles";
	materialOfStatue = "stone";
	colorOfStatue = "black";
}

Statue::Statue(string name, string material, string color)
{
#ifdef _DEBUG
	cout << "Constructor of statue" << endl;
#endif
	nameOfStatue = name;
	materialOfStatue = material;
	colorOfStatue = color;
}

Statue::~Statue()
{
#ifdef _DEBUG
	cout << "Destructor of statue" << endl;
#endif
}

void Statue::FullName()
{
	string fullName;
	fullName = nameOfStatue + " color " + colorOfStatue + " from " + materialOfStatue;
	cout << "Ten pomnik to: " << fullName << endl << endl;
}

string Statue::returnColor()
{
	return colorOfStatue;
}
