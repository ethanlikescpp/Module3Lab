#pragma once

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	int age;

protected:
	string first_name;
	string last_name;
	string race;
public:
	Person();
	~Person();
	Person(string, string, int, string);
	virtual void OutputIdentity();
	virtual void OutputAge();
	void SetAge(int);
};