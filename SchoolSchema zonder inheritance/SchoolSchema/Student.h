#pragma once
#include <string>

class Student
{
	private:
		std::string name;
		int studentNr;
	public:
		Student();
		Student(const std::string name, int studentNr);

		std::string getName();
		int getStudentNr();
};

