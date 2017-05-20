// Module3Lab.cpp : Defines the entry point for the console application.
// Lab for Module 3 of Intermediate C++ course on EdX

#include "stdafx.h"
#include <iostream>
#include "Student.h"
#include "Teacher.h"

using namespace std;


int main()
{
	Student *joe = new Student("John", "Doe", 24, "White");

	joe->OutputAge();

    return 0;
}

