#pragma once
#include "Persoon.h"
#include <string>

class Docent : public Persoon
{
public:
	Docent(const std::string name, int age);

	std::string getName();
	int getAge();

private:
	float salary;
	std::string name;
	int age;
};

