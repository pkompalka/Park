#include <iostream>
#include <string>
#include "tree.h"
#include "bench.h"

using namespace std;

Tree::Tree()
{
#ifdef _DEBUG
	cout << "Default constructor of tree" << endl;
#endif
	typeOfTree = "oak";
	ageOfTree = 60;
	sittingPigeons = 2;
}

Tree::Tree(string type, int age, int pigeons)
{
#ifdef _DEBUG
	cout << "Constructor of tree" << endl;
#endif
	typeOfTree = type;
	ageOfTree = age;
	sittingPigeons = pigeons;
}

Tree::~Tree()
{
#ifdef _DEBUG
	cout << "Destructor of tree" << endl;
#endif
}

void Tree::NumberOfPigeons()
{
	cout << "There are " << sittingPigeons << " pigeons" << endl;
}

void Tree::CompareMaterial(Bench & bench)
{
	if (bench.materialOfBench == typeOfTree)
	{
		cout << "Bench and tree are both made from: " << typeOfTree << endl << endl;
	}
	else
	{
		cout << "Bench and tree are different type: " << typeOfTree << " i " << bench.materialOfBench << endl << endl;
	}
}

ostream& operator<<(ostream &out, Tree & other)
{
	out << "INFORMATION ABOUT TREE \nType: " << other.typeOfTree << "\nAge: " << other.ageOfTree << " years" << endl;
	if (other.sittingPigeons)
	{
		out << "There are " << other.sittingPigeons << " pigeons" << endl << endl;
	}
	else
	{
		out << "No pigeons on tree" << endl << endl;
	}
	return out;
}

bool Tree::operator > (const Tree & other)
{
	if (ageOfTree > other.ageOfTree)
	{
		return true;
	}
	else
	{
		return false;
	}
}

Tree & Tree::operator += (const Tree & other)
{
	sittingPigeons += other.sittingPigeons;
	return *this;
}

Tree & Tree::operator -= (const Tree & other)
{
	if (sittingPigeons >= other.sittingPigeons)
	{
		sittingPigeons -= other.sittingPigeons;
	}
	return *this;
}

Tree & Tree::operator *= (const Tree & other)
{
	sittingPigeons *= other.sittingPigeons;
	return *this;
}

Tree & Tree::operator ++ (int)
{
	sittingPigeons++;
	return *this;
}

Tree & Tree::operator -- (int)
{
	if (sittingPigeons > 0)
	{
		sittingPigeons--;
	}
	return *this;
}
