#include "stdafx.h"
#include <iostream>
#include "Person.h"
#include "Teacher.h"

using namespace std;

Teacher::Teacher() {
}

Teacher::Teacher(string fName, string lName, int tage, string rrace) {
	first_name = fName;
	last_name = lName;
	SetAge(tage);
	race = rrace;
}

void Teacher::OutputIdentity() {
	cout << "I am a teacher" << endl;
}

void Teacher::OutputAge() {
	cout << "I am a teacher and ";
	Person::OutputAge();
}

Teacher::~Teacher() {
}

