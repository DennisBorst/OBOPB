#include "pch.h"
#include "Docent.h"

Docent::Docent(const std::string name, int age) : name(name), age(age) {}

std::string Docent::getName()
{
	return name;
}

int Docent::getAge()
{
	return age;
}