#include "pch.h"
#include "KoffieAutomaat.h"

KoffieAutomaat::KoffieAutomaat()
{
}

void KoffieAutomaat::valueMunt(HalveEuro & halveEuro)
{
	koffieCalculator(halveEuro.getValue());
}

void KoffieAutomaat::valueMunt(Euro & euro)
{
	koffieCalculator(euro.getValue());
}

void KoffieAutomaat::valueMunt(KoffieMuntje & koffieMuntje)
{
	koffieCalculator(koffieMuntje.getValue());
}

void KoffieAutomaat::koffieCalculator(int value)
{
	if (value == 1)
	{
		std::cout << "Hiermee kunt u een Lungo kopen" << std::endl;
	}
	else if (value == 2)
	{
		std::cout << "Hiermee kunt u een Lungo of een Cappuccino van kopen" << std::endl;
	}
	else if (value >= 3)
	{
		std::cout << "Hiermee kunt u alles halen wat we hebben, dat houd in: " << std::endl;
		std::cout << "Een Lungo, Cappuccino of een Latte Macchiato" << std::endl;
	}
}
