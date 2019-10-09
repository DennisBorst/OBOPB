#pragma once
#include "MoneyManager.h"

class Euro : public MoneyManager
{
public:
	Euro(std::string name, int value);
};

