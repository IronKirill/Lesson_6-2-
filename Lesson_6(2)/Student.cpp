#include "Student.h"

Student::Student()
{
	course = "undefined";
	group = "undefined";
	faculty = "undefined";
}

Student::Student(Person st, string course, string group, string faculty) : Person(st)
{
	this->course = course;
	this->group = group;
	this->faculty = faculty;
}

void Student::showStudent() const
{
	Person::showPerson();
	cout << "Course: " << course << endl;
	cout << "Group: " << group << endl;
	cout << "Faculty: " << faculty << endl;
}