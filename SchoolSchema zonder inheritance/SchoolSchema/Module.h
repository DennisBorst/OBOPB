#pragma once
#include <string>
#include "Docent.h"
#include "Student.h"

class Module
{
	private:
		std::string name;
		int ec;
		Docent docent;
		Student student;

	public:
		Module(const std::string name, int ec, Docent docent, Student student);
};

