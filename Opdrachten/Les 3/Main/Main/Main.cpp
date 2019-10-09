#include "pch.h"
#include <iostream>
#include "Bibliotheek.h"


void leenBoekUit(Bibliotheek* bieb)
{
	std::cout << std::endl;
	std::cout << "iemand komt een boek lenen" << std::endl;
	bieb->toon();

	std::cout << "Boek uitgeleend" << std::endl;

	bieb->setBoek("niks");
	bieb->toon();
	
	std::cout << "de persoon heeft de bibliotheek verlaten" << std::endl;
	std::cout << std::endl;
}

int main()
{
	Bibliotheek bieb = Bibliotheek();
	Bibliotheek* p = &bieb;

	std::cout << "Bibliotheek geopend" << std::endl;
	
	bieb.setBoek("Peter Pan");
	bieb.toon();

	leenBoekUit(p);

	std::cout << "Bibliotheek heeft een nieuw boek" << std::endl;
	bieb.setBoek("Spongebob the action movie");
	bieb.toon();

	leenBoekUit(p);

	std::cout << "Bibliotheek heeft een nieuw boek" << std::endl;
	bieb.setBoek("Avatar the last airbender");
	bieb.toon();

	leenBoekUit(p);

	std::cout << "Bibliotheek gesloten" << std::endl;

	return 0;
}