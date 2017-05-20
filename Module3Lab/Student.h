#pragma once

#include "stdafx.h"
#include <iostream>
#include "Person.h"

using namespace std;

class Student : public Person {
public:
	Student();
	~Student();
	Student(string, string, int, string);
};