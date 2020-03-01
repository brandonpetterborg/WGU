/* C867 Final
Brandon Petterborg*/
#ifndef ROSTER_H
#define ROSTER_H
#include <list>
#include <string>
#include <iostream>
#include "student.h"

using namespace std;

const int numStudents = 5;

string studentData[numStudents] = {
	"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Brandon,Petterborg,Pette2@my.wgu.edu,30,30,30,30,SOFTWARE",
};



class Roster {
public:
	int lastIndex;
	int capacity;
	Student** classRosterArray;
	Roster();
	Roster(int capacity);
	void add(string datarow);
	void printAll();
	void remove(string id);
	void printAverageDays(string id);
	void printInvalidEmails();
	void printDegree(DegreeType d);
	~Roster();
};



#endif

