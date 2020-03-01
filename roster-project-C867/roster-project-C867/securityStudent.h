/* C867 Final
Brandon Petterborg*/
#ifndef SECURITY_H
#define SECURITY_H
#include <string>
#include <iostream>
#include "student.h"
#include "degree.h"

using namespace std;


class SecurityStudent : public Student //SecurityStudent class inherits from Student class
{
public:
	SecurityStudent();
	SecurityStudent(string id, string fname, string lname, string emailaddress, int age, int* number_days, DegreeType degree);
	DegreeType getDegree();
	void setDegree(DegreeType d);
	void print();
	~SecurityStudent();
};





#endif
