#include "place.h"
#include "playground.h"

using namespace std;

Playground::Playground()
{
#ifdef _DEBUG
	cout << "Default constructor of playground" << endl;
#endif
	name = "Playground";
	yearOfFounding = 2005;
	numberOfSwings = 4;
	colorOfSwings = "red";
	photo = "plac.jpg";
	for (int i = 0; i < MAX_TREE1; i++)
	{
		containerTree.push_back(Tree());
	}
	for (int i = 0; i < MAX_BENCH1; i++)
	{
		containerBench.push_back(Bench());
	}
}

Playground::~Playground()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor placu" << endl;
#endif
}

void Playground::ShowInfo()
{
	cout << "Name: " << name << endl;
	cout << "Year of founding: " << yearOfFounding << endl;
	cout << "Number of swings: " << numberOfSwings << endl;
	cout << "Color of swings: " << colorOfSwings << endl;
}

string Playground::greetings()
{
	return string ("Welcome in playground");
}

ostream& operator<<(ostream &s, Playground &play)
{
	s << play.name << " " << play.yearOfFounding << " " << play.numberOfSwings << " " << play.colorOfSwings << endl;
	return s;
}

int Playground::returnSwings()
{
	return int(numberOfSwings);
}

string Playground::returnColor()
{
	return string(colorOfSwings);
}

int Playground::returnTrees()
{
	int i = containerTree.size();
	return(i);
}

int Playground::returnBenches()
{
	int i = containerBench.size();
	return(i);
}