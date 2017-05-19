#include "stdafx.h"
#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

Person::Person() {
}

Person::~Person() {
}

void Person::OutputIdentity() {
}

void Person::OutputAge() {
	cout << "I am " << age << " years old" << endl;
}