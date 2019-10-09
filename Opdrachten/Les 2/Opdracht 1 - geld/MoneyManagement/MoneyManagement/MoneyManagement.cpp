// MoneyManagement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include <iostream>

#include "KoffieAutomaat.h"
#include "MoneyManager.h"
#include "HalveEuro.h"
#include "Euro.h"
#include "KoffieMuntje.h"

int main()
{
	HalveEuro halveEuro = HalveEuro("50 cent", 1);
	Euro euro = Euro("1 euro", 2);
	KoffieMuntje koffieMuntje = KoffieMuntje("1 koffiemuntje", 3);

	KoffieAutomaat koffieAutomaat;

	std::cout << "50 cent word in de automaat geworpen, wat kunnen we hiermee kopen?" << std::endl;
	koffieAutomaat.valueMunt(halveEuro);
	std::cout << std::endl;

	std::cout << "1 euro word in de automaat geworpen, wat kunnen we hiermee kopen?" << std::endl;
	koffieAutomaat.valueMunt(euro);
	std::cout << std::endl;

	std::cout << "1 koffiemuntje word in de automaat geworpen, wat kunnen we hiermee kopen?" << std::endl;
	koffieAutomaat.valueMunt(koffieMuntje);
	std::cout << std::endl;

	return 0;
}

