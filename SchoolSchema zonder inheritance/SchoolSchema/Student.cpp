#include "pch.h"
#include "Student.h"

Student::Student(const std::string name, int studentNr) : 
	name(name), studentNr(studentNr) {}

std::string Student::getName()
{
	return name;
}

int Student::getStudentNr()
{
	return studentNr;
}
