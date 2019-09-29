#pragma once
#include <string>

class Persoon
{
private:
	std::string name;
	int age;

public:
	Persoon();
	virtual std::string getName();
	virtual int getAge();
};


