/* C867 Final
Brandon Petterborg*/
#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <iostream>
#include "degree.h"

using namespace std;

class Student
{
public:
	const static int number_days_size = 3;

protected:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int    age;
	int* number_days; // array number of days remaining in course
	DegreeType degree;


public:


	Student(); // Fix Empty constructor??
	Student(string id, string fname, string lname, string emailaddress, int age, int number_days[], DegreeType degree); //Full constructor

	//Getters for each instance field

	string          getStudentID();
	string          getFirstName();
	string          getLastName();
	string          getEmailAddress();
	int             getAge();
	int* getNumDays(); //pointer
	virtual DegreeType  getDegree() = 0;

	//mutators
	void         setStudentID(string id);
	void         setFirstName(string fname);
	void         setLastName(string lname);
	void         setEmailAddress(string emailaddress);
	void         setAge(int age);
	void         setNumDays(int number_days[]);
	virtual void setDegree(DegreeType d) = 0;
	virtual void print() = 0;

	//destructor
	~Student();


};



#endif