#pragma once
#include <iostream>
#include <string>
#include "bench.h"

using namespace std;

class Tree
{
public:
	Tree();
	Tree(string type, int age, int pigeons);
	~Tree();
	void NumberOfPigeons();
	void CompareMaterial(Bench & bench);
	friend ostream& operator<<(ostream &out, Tree & other);
	bool operator > (const Tree & other);
	Tree& operator += (const Tree & other);
	Tree& operator -= (const Tree & other);
	Tree& operator *= (const Tree & other);
	Tree& operator ++ (int);
	Tree& operator -- (int);
	friend class Park;
private:
	string typeOfTree;
	int ageOfTree;
	int sittingPigeons;
};
