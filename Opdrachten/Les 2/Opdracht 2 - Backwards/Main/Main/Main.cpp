#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

#define FILE "D:\\HKU bestanden\\Jaar 2\\OBOPB\\Les 2 huiswerk\\Opdracht 2 - file switch\\Backwards\\Backwards.txt"
#define OUTFILE "D:\\HKU bestanden\\Jaar 2\\OBOPB\\Les 2 huiswerk\\Opdracht 2 - file switch\\Backwards\\Output.txt"


int countCharactersInFile()
{
	char ch;
	std::ifstream in_stream;

	int count = 0;

	in_stream.open(FILE);
	in_stream.get(ch);
	while (!in_stream.fail())
	{
		count++;
		in_stream.get(ch);
	}
	in_stream.close();

	std::cout << count << " tekens in bestand" << std::endl;

	return count;
}

char getCharacterAtPosition(int number)
{
	char ch;
	std::ifstream fileInput;

	fileInput.open(FILE);

	for (int i = 0; i < number; i++)
	{
		fileInput.get(ch);
	}

	fileInput.close();
	return ch;
}

//achterste voren tekst
int main()
{
	int count;
	std::ofstream fileOutput(OUTFILE);


	count = countCharactersInFile();

	for (int number = 0; count > 0; count--)
	{
		std::cout << getCharacterAtPosition(count);
		fileOutput << getCharacterAtPosition(count);
	}

	return 0;
}

