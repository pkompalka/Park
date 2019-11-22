#pragma once
#include "place.h"
#include "tree.h"
#include "bench.h"
#include <vector>
#define MAX_TREE1 10
#define MAX_BENCH1 5

using namespace std;

class Playground : public Place
{
public:
	Playground();
	~Playground();
	void ShowInfo();
	string greetings();
	friend ostream& operator << (ostream &s, Playground &play);
	int returnSwings();
	string returnColor();
	int returnTrees();
	int returnBenches();
private:
	int numberOfSwings;
	string colorOfSwings;
	vector < Tree > containerTree;
	vector < Bench > containerBench;
};