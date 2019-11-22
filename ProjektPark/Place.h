#pragma once
#include <iostream>
#include <string>

using namespace std;

class Place
{
public:
	Place();
	virtual ~Place();
	virtual void ShowInfo() = 0;
	virtual string greetings() = 0;
	friend ostream& operator << (ostream &s, Place &place);
	string returnPhoto();
	string returnName();
	int returnYear();
	virtual int returnTrees();
	virtual int returnBenches();
	virtual int returnStatues();
	virtual string returnFestival();
	virtual int returnDucks();
	virtual int returnSwans();
	virtual int returnSwings();
	virtual string returnColor();
protected:
	int yearOfFounding;
	string name;
	string photo;
};