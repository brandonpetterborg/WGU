/* C867 Final
Brandon Petterborg*/
#ifndef SOFTWARE_H
#define SOFTWARE_H
#include <string>
#include <iostream>
#include "student.h"
#include "degree.h"

using namespace std;

class SoftwareStudent : public Student {
public:
	SoftwareStudent();
	SoftwareStudent(string id, string fname, string lname, string emailaddress, int age, int* number_days, DegreeType degree);
	DegreeType getDegree();
	void setDegree(DegreeType d);
	void print();
	~SoftwareStudent();
};


#endif