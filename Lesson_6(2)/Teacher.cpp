#include "Teacher.h"

Teacher::Teacher()
{
	position = "undefined";
	cathedra = "undefined";
}

Teacher::Teacher(Person te, string position, string cathedra) : Person(te)
{
	this->position = position;
	this->cathedra = cathedra;
}

void Teacher::showTeacher() const
{
	Person::showPerson();
	cout << "Position: " << position << endl;
	cout << "Cathedra: " << cathedra << endl;
	cout << "-------------------------------------------\n";
}
