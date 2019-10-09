#include "pch.h"
#include <iostream>
#include "Bibliotheek.h"


Bibliotheek::Bibliotheek()
{
}

Bibliotheek::Bibliotheek(const Bibliotheek & deAndere)
{
	std::cout << "Bibliotheek: copy-ctor" << std::endl;
	boek = new Boek();
	boek->type = deAndere.boek->type;
}

Bibliotheek & Bibliotheek::operator=(const Bibliotheek & deAndere)
{
	std::cout << "Bibliotheek: assignment oper" << std::endl;

	if (this != &deAndere)
	{
		if (boek) delete boek;

		boek = new Boek();
		boek->type = deAndere.boek->type;
	}

	return *this;
}

Bibliotheek::~Bibliotheek()
{
	delete boek;
}


void Bibliotheek::toon()
{
	if (boek)
	{
		std::cout << "Bibliotheek bevat boek: " << boek->type << std::endl;
	}
	else
	{
		std::cout << "Bibliotheek bevat: niks" << std::endl;
		std::cout << std::endl;
	}
}

void Bibliotheek::setBoek(std::string type)
{
	boek = new Boek(type);
}