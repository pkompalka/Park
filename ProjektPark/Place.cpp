#include <iostream>
#include <string>
#include "place.h"

using namespace std;

Place::Place()
{
#ifdef _DEBUG
	cout << "Default constructor of place" << endl;
#endif
	name = "Place";
	yearOfFounding = 0;
}

Place::~Place()
{
#ifdef _DEBUG
	cout << "Destructor of place" << endl;
#endif
}

ostream& operator<<(ostream &s, Place &place)
{
	s << place.name << " " << place.yearOfFounding << " ";
	return s;
}

string Place::returnPhoto()
{
	return string(photo);
}

string Place::returnName()
{
	return string(name);
}

int Place::returnYear()
{
	return int(yearOfFounding);
}

int Place::returnTrees()
{
	return int(NULL);
}

int Place::returnBenches()
{
	return int(NULL);
}

int Place::returnStatues()
{
	return int(NULL);
}

string Place::returnFestival()
{
	return string("no festival");
}

int Place::returnDucks()
{
	return int(NULL);
}

int Place::returnSwans()
{
	return int(NULL);
}

int Place::returnSwings()
{
	return int(NULL);
}

string Place::returnColor()
{
	return string("no swings");
}

