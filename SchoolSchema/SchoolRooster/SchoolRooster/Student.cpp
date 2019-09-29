#include "pch.h"
#include "Student.h"

Student::Student(const std::string name, int age) : name(name), age(age) {}

std::string Student::getName()
{
	return name;
}

int Student::getAge()
{
	return age;
}