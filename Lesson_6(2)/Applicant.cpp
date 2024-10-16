#include "Applicant.h"

Applicant::Applicant()
{
	number_of_points = 0;
}

Applicant::Applicant(Person ap, int number_of_points) : Person(ap)
{
	this->number_of_points = number_of_points;
}

void Applicant::showApplicant() const
{
	Person::showPerson();
	cout << "Number of points: " << number_of_points << endl;
}