/* C867 Final
Brandon Petterborg*/
#ifndef NETWORK_H
#define NETWORK_H
#include <string>
#include <iostream>
#include "degree.h"
#include "student.h"

using namespace std;

class NetworkStudent : public Student {

public:
	NetworkStudent();
	NetworkStudent(string id, string fname, string lname, string emailaddress, int age, int* number_days, DegreeType degree);
	DegreeType getDegree();
	void setDegree(DegreeType d);
	void print();
	~NetworkStudent();
};



#endif

