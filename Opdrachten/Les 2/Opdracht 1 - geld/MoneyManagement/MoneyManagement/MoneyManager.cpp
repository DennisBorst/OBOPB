#include "pch.h"
#include "MoneyManager.h"

MoneyManager::MoneyManager()
{
}

MoneyManager::MoneyManager(std::string name, int value) : name(name), value(value) {}

std::string MoneyManager::getName()
{
	return name;
}

int MoneyManager::getValue()
{
	return value;
}
