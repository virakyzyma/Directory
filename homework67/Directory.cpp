#include "Directory.h"
#include<iostream>
using namespace std;
void Directory::Set(string Name, string Owner, int PhoneNumber, string Address, string Occupation)
{
	name = Name;
	owner = Owner;
	phoneNumber = PhoneNumber;
	address = Address;
	occupation = Occupation;
}
string Directory::GetName()
{
	return name;
}
string Directory::GetOwner()
{
	return owner;
}
int Directory::GetNumber()
{
	return phoneNumber;
}
string Directory::GetAddress()
{
	return address;
}
string Directory::GetOccupation()
{
	return occupation;
}