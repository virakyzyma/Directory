#include <iostream>
#include "Directory.h"
#include <fstream>
#include <string>
using namespace std;

int main()
{
	fstream File("Directory.txt", ios::in | ios::out);
	
	Directory obj;
	string name;
	string owner;
	int phoneNumber;
	string address;
	string occupation;

	cout << "Enter company name: ";
	getline(cin, name);
	cout << "Enter owner's name: ";
	getline(cin, owner);
	cout << "Enter address: ";
	getline(cin, address);
	cout << "Enter occupation: ";
	getline(cin, occupation);
	cout << "Enter phone number: ";
	cin >> phoneNumber;
	obj.Set(name, owner, phoneNumber, address, occupation);

	File << (obj.GetName()) << endl;
	File << (obj.GetOwner()) << endl;
	File << (obj.GetAddress()) << endl;
	File << (obj.GetOccupation()) << endl;
	File << (obj.GetNumber()) << endl;

	cin.ignore();
	File.seekg(0, ios::beg);
	do
	{
		char ch = '\0';
		File.get(ch);
		cout << ch;

	} while (File);


	return 0;
}