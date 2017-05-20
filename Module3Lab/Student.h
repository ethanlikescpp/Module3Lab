#pragma once

#include "stdafx.h"
#include <iostream>
#include "Person.h"

using namespace std;

class Student : public Person {
private:
	int age;

public:
	Student();
	~Student();
	Student(string, string, int, string);
	virtual void OutputIdentity();
	virtual void OutputAge();
};