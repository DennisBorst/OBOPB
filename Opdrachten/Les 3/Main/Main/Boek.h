#pragma once
#include <string>

class Boek
{
public:
	Boek();
	~Boek();
	Boek(std::string type);

	std::string type = "(onbekend)";

};

