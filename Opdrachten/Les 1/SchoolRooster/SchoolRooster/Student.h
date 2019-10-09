#pragma once
#include "Persoon.h"

class Student : public Persoon
{
public:
	Student(const std::string name, int age);
	std::string getName();
	int getAge();

private:
	int studentNumber;
	std::string name;
	int age;
};

