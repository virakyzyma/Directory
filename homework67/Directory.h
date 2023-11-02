#pragma once
#include <iostream>
#include "Directory.h"
using namespace std;
class Directory
{
protected:
	string name;
	string owner;
	int phoneNumber;
	string address;
	string occupation;
public:
	Directory() = default;
	void Set(string name, string owner, int phoneNumber, string address, string occupation);
	string GetName();
	string GetOwner();
	int GetNumber();
	string GetAddress();
	string GetOccupation();
};