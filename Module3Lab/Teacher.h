#pragma once

#include "stdafx.h"
#include <iostream>
#include "Person.h"

using namespace std;

class Teacher : public Person {
private:
	int age;

public:
	Teacher();
	Teacher(string, string, int, string);
	~Teacher();
	virtual void OutputIdentity();
	virtual void OutputAge();
};