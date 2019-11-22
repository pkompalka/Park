#pragma once
#define MAX_TREES 50
#define MAX_BENCHES 20
#include <vector>
#include "place.h"
#include "tree.h"
#include "bench.h"
#include "statue.h"

using namespace std;

class Park : public Place
{
public:
	Park();
	~Park();
	void InfoPark();
	void AddTree(Tree newTree);
	void AddBench(Bench newBench);
	void AddStatue(Statue newStatue);
	void DeleteStatue();
	void ShowTrees();
	void ShowBenches();
	void ShowStatues();
	void ShowInfo();
	string greetings();
	static int ReturnNumberOfParks();
	friend ostream& operator << (ostream &s, Park &park);
	int returnTrees();
	int returnBenches();
	int returnStatues();
	string returnFestival();
protected:
	static int numberOfParks;
	string festival;
	vector < Tree > containerTree;
	vector < Bench > containerBench;
	vector < Statue > containerStatue;
};
