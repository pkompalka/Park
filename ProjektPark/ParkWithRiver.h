#pragma once
#include "park.h"

using namespace std;

class ParkWithRiver : public Park
{
public:
	ParkWithRiver();
	~ParkWithRiver();
	void ShowInfo();
	string greetings();
	void FeedDucks();
	friend ostream& operator << (ostream &s, ParkWithRiver &rzeczny);
	int returnDucks();
	int returnSwans();
private:
	int numberOfDucks;
	int numberOfSwans;
};