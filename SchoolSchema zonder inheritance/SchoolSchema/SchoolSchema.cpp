// SchoolSchema.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Docent.h"
#include "Student.h"

using string = std::string;

string docentName;
float docentSalaris;
string studentName;

int main()
{
	std::cout << "Hoe heet je docent? /n";
	std::cin >> docentName;
	std::cout << "en hoeveel verdient ie? /n";
	std::cin >> docentSalaris;
	Docent deDocent = Docent(Edwin, 20);
	std::cout << "Jouw docent is " + deDocent.getName() << std::endl;
	std::cout << deDocent.getSalary() << std::endl;

	Student deStudent = Student("Dennis", 1);
	std::cout << deStudent.getName() << std::endl;
	std::cout << deStudent.getStudentNr() << std::endl;
}
