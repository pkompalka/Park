#pragma once
#include <iostream>
#include <string>

using namespace std;

class Bench
{
public:
	Bench();
	Bench(string color, string material, int capacity, bool paint);
	~Bench();
	void PaintBench();
	friend ostream& operator<<(ostream &out, Bench & other);
	bool operator == (const Bench & other);
	bool operator < (const Bench & other);
	friend class Tree;
	friend class Park;
private:
	string colorOfBench;
	string materialOfBench;
	int capacityOfBench;
	bool IsPainted;
};
