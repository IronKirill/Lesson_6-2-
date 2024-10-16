#pragma once
#include "Person.h"

class Student : public Person
{
	string course;
	string group;
	string faculty;
public:
	Student();
	Student(Person st, string course, string group, string faculty);

	void showStudent()const;
};