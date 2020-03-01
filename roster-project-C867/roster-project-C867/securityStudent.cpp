/* C867 Final
Brandon Petterborg*/
#include <iostream>
#include "securityStudent.h"

using namespace std;

SecurityStudent::SecurityStudent() {
	setDegree(SECURITY);
}

SecurityStudent::SecurityStudent(string id, string fname, string lname, string emailaddress, int age, int* number_days, DegreeType degree)
{
	setDegree(SECURITY);
}

DegreeType SecurityStudent::getDegree()
{
	return SECURITY;
}


void SecurityStudent::setDegree(DegreeType d)
{
	this->degree = SECURITY;
}



void SecurityStudent::print()
{
	this->Student::print();
	cout << "SECURITY" << "\n";
}


SecurityStudent::~SecurityStudent()
{
	Student::~Student();
	delete this;
}

