// SchoolRooster.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Persoon.h"
#include "Docent.h"
#include "Student.h"

using string = std::string;

int main()
{
	std::cout << "Hello World!\n";
	Docent deDocent = Docent("Edwin", 30);
	Student deStudent = Student("Dennis", 21);

	std::cout << "Docent: " + deDocent.getName() << std::endl;
	std::cout << "Student: " + deStudent.getName() << std::endl;
}
