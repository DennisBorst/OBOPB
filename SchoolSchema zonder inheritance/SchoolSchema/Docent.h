#pragma once
#include <string>

class Docent
{
	private:
		std::string name;
		float salary;

	public:
		Docent();
		Docent(const std::string name, float salary);

		std::string getName();
		float getSalary();
};

