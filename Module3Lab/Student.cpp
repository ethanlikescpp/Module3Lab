#include "stdafx.h"
#include <iostream>
#include "Person.h"
#include "Student.h"

using namespace std;

Student::Student() {
}

Student::~Student() {
}

Student::Student(string fName, string lName, int tage, string rrace) {
	first_name = fName;
	last_name = lName;
	SetAge(tage);
	race = rrace;
}