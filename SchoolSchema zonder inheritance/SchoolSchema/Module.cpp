#include "pch.h"
#include "Module.h"

Module::Module(const std::string name, int ec, Docent docent, Student student) : 
	name(name), ec(ec), docent(docent), student(student) {}
