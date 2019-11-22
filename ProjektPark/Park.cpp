#include <vector>
#include "tree.h"
#include "bench.h"
#include "statue.h"
#include "park.h"

using namespace std;

int Park::numberOfParks = 0;

Park::Park()
{
#ifdef _DEBUG
	cout << "Default constructor of park" << endl;
#endif
	name = "Park";
	yearOfFounding = 1900;
	festival = "Anniversary of foundation";
	photo = "park.jpg";
	numberOfParks++;
	for (int i = 0; i < MAX_TREES; i++)
	{
		containerTree.push_back(Tree());
	}
	for (int i = 0; i < MAX_BENCHES; i++)
	{
		containerBench.push_back(Bench());
	}
	containerStatue.push_back(Statue());
}

Park::~Park()
{
#ifdef _DEBUG
	cout << "Destructor of park" << endl;
#endif
	numberOfParks--;
}

void Park::InfoPark()
{
	cout << "Name of parku: " << name << endl;
	cout << "Year of foundation: " << yearOfFounding << endl;
	cout << "Current festival: " << festival << endl;
}

void Park::AddTree(Tree newTree)
{
	containerTree.push_back(newTree);
}

void Park::AddBench(Bench newBench)
{
	containerBench.push_back(newBench);
}

void Park::AddStatue(Statue newStatue)
{
	containerStatue.push_back(newStatue);
}

void Park::DeleteStatue()
{
	if (containerStatue.size() > 0)
	{
		containerStatue.pop_back();
		cout << "Deleted statue from park" << endl << endl;
	}
	else
	{
		cout << "There are no statues in park" << endl << endl;
	}
}

void Park::ShowTrees()
{
	for (int i = 0; i < containerTree.size(); i++)
	{
		cout << i + 1 << ". tree is " << containerTree[i].typeOfTree << endl;
	}
}

void Park::ShowBenches()
{
	for (int i = 0; i < containerBench.size(); i++)
	{
		cout << i + 1 << ". bench's color is " << containerBench[i].colorOfBench << endl;
	}
}

void Park::ShowStatues()
{
	for (int i = 0; i < containerStatue.size(); i++)
	{
		cout << i + 1 << ". statue is " << containerStatue[i].nameOfStatue << endl;
	}
}

void Park::ShowInfo()
{
	InfoPark();
	ShowTrees();
	ShowBenches();
	ShowStatues();
}

string Park::greetings()
{
	return string("Welcome in park");
}

int Park::ReturnNumberOfParks()
{
	return numberOfParks;
}

ostream& operator << (ostream &s, Park &park)
{
	s << park.name << " " << park.yearOfFounding << " " << park.festival << endl;
	return s;
}

int Park::returnTrees()
{
	int i = containerTree.size();
	return(i);
}

int Park::returnBenches()
{
	int i = containerBench.size();
	return(i);
}

int Park::returnStatues()
{
	int i = containerStatue.size();
	return(i);
}

string Park::returnFestival()
{
	return string(festival);
}
