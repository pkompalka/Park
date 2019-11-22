#include <iostream>
#include <string>
#include "bench.h"

using namespace std;

Bench::Bench()
{
#ifdef _DEBUG
	cout << "Default constructor of bench" << endl;
#endif
	colorOfBench = "white";
	materialOfBench = "birch";
	capacityOfBench = 2;
	IsPainted = true;
}

Bench::Bench(string color, string material, int capacity, bool paint)
{
#ifdef _DEBUG
	cout << "Constructor of bench" << endl;
#endif
	colorOfBench = color;
	materialOfBench = material;
	capacityOfBench = capacity;
	IsPainted = paint;
}

Bench::~Bench()
{
#ifdef _DEBUG
	cout << "Destructor of bench" << endl;
#endif
}

void Bench::PaintBench()
{
	if (IsPainted == 0)
	{
		cout << "Bench made from " << materialOfBench <<" got painted" << endl << endl;
		IsPainted = IsPainted + 1;
	}
	else
	{
		cout << "Bench made from " << materialOfBench << " is already painted" << endl << endl;
	}
}

ostream& operator<<(ostream &out, Bench & other)
{
	out << "INFORMATION ABOUT BENCH \nColor: " << other.colorOfBench << "\nMaterial: " << other.materialOfBench << "\nBench made for max " << other.capacityOfBench << " people" << endl;
	if (other.IsPainted)
	{
		out << "Bench is painted" << endl << endl;
	}
	else
	{
		out << "Bench is not painted" << endl << endl;
	}
	return out;
}

bool Bench::operator == (const Bench & other)
{
	if (!(colorOfBench == other.colorOfBench))
	{
		return false;
	}
	else if (!(materialOfBench == other.materialOfBench))
	{
		return false;
	}
	else if (!(capacityOfBench == other.capacityOfBench))
	{
		return false;
	}
	else if (!(IsPainted == other.IsPainted))
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool Bench::operator < (const Bench & other)
{
	if (capacityOfBench < other.capacityOfBench)
	{
		return true;
	}
	else
	{
		return false;
	}
}
