#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person
{
	string name;
	string birth_date;
public:
	Person();
	Person(string name, string birth_date);

	void showPerson()const;
};