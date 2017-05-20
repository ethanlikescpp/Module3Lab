#include "stdafx.h"
#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

Person::Person() {
}

Person::Person(string rfirst_name, string rlast_name, int rage, string rrace) {
	first_name = rfirst_name;
	last_name = rlast_name;
	age = rage;
	race = rrace;
}

Person::~Person() {
}


void Person::OutputIdentity() {
}

void Person::OutputAge() {
	cout << "I am " << age << " years old" << endl;
}

void Person::SetAge(int theage) {
	age = theage;
}
