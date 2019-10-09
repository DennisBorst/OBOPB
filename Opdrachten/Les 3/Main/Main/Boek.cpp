#include "pch.h"
#include <iostream>
#include "Boek.h"


Boek::Boek()
{
	std::cout << "Boek default ctor" << std::endl;
}

Boek::~Boek()
{
}

Boek::Boek(std::string hetType) : type(hetType)
{
	//std::cout << "Boek ctor: " << hetType << std::endl;
}