/* C867 Final
Brandon Petterborg*/
#include <iostream>
#include "softwareStudent.h"

using namespace std;

SoftwareStudent::SoftwareStudent() {
	setDegree(SOFTWARE);
}

SoftwareStudent::SoftwareStudent(string id, string fname, string lname, string emailaddress, int age, int* number_days, DegreeType degree)
{
	setDegree(SOFTWARE);
}

DegreeType SoftwareStudent::getDegree()
{
	return SOFTWARE;
}


void SoftwareStudent::setDegree(DegreeType d)
{
	this->degree = SOFTWARE;
}



void SoftwareStudent::print()
{
	this->Student::print();
	cout << "SOFTWARE" << "\n";
}

SoftwareStudent::~SoftwareStudent()
{
	Student::~Student();
	delete this;
}

