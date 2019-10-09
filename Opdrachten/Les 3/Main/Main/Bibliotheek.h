#pragma once
#include <string>
#include "Boek.h"

class Bibliotheek
{
public:
	Bibliotheek();
	Bibliotheek(const Bibliotheek& deAndere);
	Bibliotheek& operator=(const Bibliotheek& deAndere);
	~Bibliotheek();

	void toon();
	void setBoek(std::string type);

private:
	Boek* boek = nullptr;
};

