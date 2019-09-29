#pragma once
#include "Persoon.h"
#include <string>

class Docent : public Persoon
{
private:
	float salary;
	std::string name;
	int age;

public:
	Docent(const std::string name, int age);

	std::string getName();
	int getAge();
};

