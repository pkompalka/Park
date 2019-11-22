#pragma once
#include <iostream>
#include <string>

using namespace std;

class Statue
{
public:
	Statue();
	Statue(string name, string material, string color);
	~Statue();
	void FullName();
	string returnColor();
	friend class Park;
private:
	string nameOfStatue;
	string materialOfStatue;
	string colorOfStatue;
};
