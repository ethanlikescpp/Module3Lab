#pragma once

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	string first_name;
	string last_name;
	int age;
	string race;

protected:
	int64_t phone;

public:
	Person();
	~Person();
	virtual void OutputIdentity();
	virtual void OutputAge();
};