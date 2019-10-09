#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

#define FILE1 "D:\\HKU bestanden\\Jaar 2\\OBOPB\\Les 2 huiswerk\\Opdracht 2 - file switch\\FileSwitch\\FileSwitch1.txt"
#define FILE2 "D:\\HKU bestanden\\Jaar 2\\OBOPB\\Les 2 huiswerk\\Opdracht 2 - file switch\\FileSwitch\\FileSwitch2.txt"
#define OUTPUT "D:\\HKU bestanden\\Jaar 2\\OBOPB\\Les 2 huiswerk\\Opdracht 2 - file switch\\FileSwitch\\Output.txt"


//normale tekst
int main()
{
	std::string text;

	std::ifstream fileInput1;
	std::ifstream fileInput2;
	std::ofstream fileOutput;

	fileInput1.open(FILE1);
	fileInput2.open(FILE2);
	fileOutput.open(OUTPUT);

	while (!fileInput1.eof() || !fileInput2.eof())
	{
		std::getline(fileInput1, text);
		fileOutput << text << std::endl;
		std::cout << text << std::endl;

		std::getline(fileInput2, text);
		fileOutput << text << std::endl;
		std::cout << text << std::endl;
	}

	fileInput1.close();
	fileInput2.close();
	fileOutput.close();
	return 0;
}