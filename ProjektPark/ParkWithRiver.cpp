#include "park.h"
#include "parkwithriver.h"

using namespace std;

ParkWithRiver::ParkWithRiver()
{
#ifdef _DEBUG
	cout << "Default constructor of park with river" << endl;
#endif
	name = "Park with river";
	yearOfFounding = 1950;
	festival = "River Day";
	numberOfDucks = 20;
	numberOfSwans = 6;
	numberOfParks++;
	containerStatue.push_back(Statue("Statue of swan", "marble", "white"));
	photo = "rzeczny.jpg";
	for (int i = 0; i < 10; i++)
	{
		containerTree.push_back(Tree());
	}
	for (int i = 0; i < 5; i++)
	{
		containerBench.pop_back();
	}
}

ParkWithRiver::~ParkWithRiver()
{
#ifdef _DEBUG
	cout << "Destructor of park with river" << endl;
#endif
}

void ParkWithRiver::ShowInfo()
{
	Park::ShowInfo();
	Park::ShowTrees();
	Park::ShowBenches();
	Park::ShowStatues();
	cout << "In park there are " << numberOfDucks << " ducks" << endl;
	cout << "In park there are " << numberOfSwans << " swans" << endl;
}

string ParkWithRiver::greetings()
{
	return string ("Welcome in park with river");
}

void ParkWithRiver::FeedDucks()
{
	cout << "Ducks fed" << endl;
}

ostream& operator << (ostream &s, ParkWithRiver &river)
{
	s << river.name << " " << river.yearOfFounding << " " << river.festival << " " << river.numberOfDucks << " " << river.numberOfSwans << endl;
	return s;
}

int ParkWithRiver::returnDucks()
{
	return int(numberOfDucks);
}

int ParkWithRiver::returnSwans()
{
	return int(numberOfSwans);
}
