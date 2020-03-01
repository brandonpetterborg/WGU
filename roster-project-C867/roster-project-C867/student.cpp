/* C867 Final
Brandon Petterborg*/
#include <iomanip>
#include <iostream>
#include "degree.h"
#include "student.h"

using namespace std;

Student::Student() //full constructor
{
	this->studentID = "student_id";
	this->firstName = "first_name";
	this->lastName = "last_name";
	this->emailAddress = "email_address";
	this->age = 0;
	this->number_days = new int[number_days_size];
	for (int i = 0; i < number_days_size; ++i) this->number_days[i] = 0;

}
//constructor
Student::Student(string id, string fname, string lname, string emailaddress, int age, int number_days[], DegreeType degree)

{
	this->studentID = id;
	this->firstName = fname;
	this->lastName = lname;
	this->emailAddress = emailaddress;
	this->age = age;
	this->number_days = new int[number_days_size];
	for (int i = 0; i < 3; ++i) this->number_days[i] = number_days[i];

}

//getters
string Student::getStudentID()
{
	return studentID;
}
string Student::getFirstName()
{
	return firstName;
}
string Student::getLastName()
{
	return lastName;
}
string Student::getEmailAddress()
{
	return emailAddress;
}
int    Student::getAge()
{
	return age;
}
int* Student::getNumDays()
{
	return number_days;
}

//setters
void   Student::setStudentID(string id)
{
	this->studentID = id;
}
void   Student::setFirstName(string fname)
{
	this->firstName = fname;
}
void   Student::setLastName(string lname)
{
	this->lastName = lname;
}
void   Student::setEmailAddress(string emailaddress)
{
	this->emailAddress = emailaddress;
}
void   Student::setAge(int age)
{
	this->age = age;
}
void   Student::setNumDays(int number_days[])
{
	if (this->number_days != nullptr) {
		delete[] this->number_days;
		this->number_days = nullptr;
	}
	this->number_days = new int[number_days_size];
	for (int i = 0; i < 3; ++i) {
		this->number_days[i] = number_days[i];
	}
}

void   Student::print()
{
	int* courseday = getNumDays();

	cout << studentID << endl;
	cout << "First name: " << firstName << "\t";
	cout << "Last name: " << lastName << "\t";
	cout << "Age: " << age << "\t";
	cout << "daysInCourse: {" << *courseday << " " << *(courseday + 1) << " " << *(courseday + 2) << "}" << "\t";
}

//destructor
Student::~Student()
{
	if (number_days != nullptr) {
		delete[] number_days;
		number_days = nullptr;
	}
}

