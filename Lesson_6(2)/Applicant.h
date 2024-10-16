#pragma once
#include "Person.h"

class Applicant : public Person
{
	int number_of_points;
public:
	Applicant();
	Applicant(Person ap, int number_of_points);

	void showApplicant()const;
};