#include "Person.h"

Person::Person()
{
	name = "undefined";
	birth_date = "undefined";
}

Person::Person(string name, string birth_date)
{
	this->name = name;
	this->birth_date = birth_date;
}

void Person::showPerson() const
{
	cout << "-------------------------------------------\n";
	cout << "Name: " << name << endl;
	cout << "Birthday: " << birth_date << endl;
}