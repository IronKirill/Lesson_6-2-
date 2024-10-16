#pragma once
#include "Person.h"

class Teacher : public Person
{
	string position;
	string cathedra;
public:
	Teacher();
	Teacher(Person st, string position, string cathedra);

	void showTeacher()const;
};