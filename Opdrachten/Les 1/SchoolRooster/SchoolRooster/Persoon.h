#pragma once
#include <string>

class Persoon
{
public:
	Persoon();
	virtual std::string getName();
	virtual int getAge();

private:
	std::string name;
	int age;
};


