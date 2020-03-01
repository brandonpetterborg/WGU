/* C867 Final
Brandon Petterborg*/
#include <iostream>
#include "networkStudent.h"

using namespace std;



NetworkStudent::NetworkStudent() {
	setDegree(NETWORK);
}

NetworkStudent::NetworkStudent(string id, string fname, string lname, string emailaddress, int age, int* number_days, DegreeType degree)
{
	setDegree(NETWORK);
}

DegreeType NetworkStudent::getDegree()
{
	return NETWORK;
}


void NetworkStudent::setDegree(DegreeType d)
{
	this->degree = NETWORK;
}



void NetworkStudent::print()
{
	this->Student::print();
	cout << "NETWORK" << "\n";
}

NetworkStudent::~NetworkStudent()
{
	Student::~Student();
	delete this;
}