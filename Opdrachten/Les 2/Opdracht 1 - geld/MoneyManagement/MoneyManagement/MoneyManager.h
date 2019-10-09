#pragma once
#include <string>

class MoneyManager
{
private:
	std::string name;
	int value;
public:
	MoneyManager();
	MoneyManager(std::string name, int value);
	std::string getName();
	int getValue();

};

