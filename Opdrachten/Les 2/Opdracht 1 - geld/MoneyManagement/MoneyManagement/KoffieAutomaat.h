#pragma once
#include <iostream>
#include "MoneyManager.h"
#include "HalveEuro.h"
#include "Euro.h"
#include "KoffieMuntje.h"

class KoffieAutomaat
{
public:
	KoffieAutomaat();
	void valueMunt(HalveEuro& halveEuro);
	void valueMunt(Euro& euro);
	void valueMunt(KoffieMuntje& koffieMuntje);

	void koffieCalculator(int value);
};

