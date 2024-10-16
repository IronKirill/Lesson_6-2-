#include "Person.h"
#include "Applicant.h"
#include "Student.h"
#include "Teacher.h"

int main()
{
	Person a("Applicant - Alex", "01/01/2000");
	Person a2("Student - Bob", "01/01/1995");
	Person a3("Teacher - Nick", "01/01/1970");
	//a.showPerson();

	Applicant b(a, 130);
	b.showApplicant();

	Student c(a2, "C++", "Group A", "Programming");
	c.showStudent();

	Teacher d(a3, "Programmer", "Cathedra #1");
	d.showTeacher();
}