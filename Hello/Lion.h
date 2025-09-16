#pragma once
#include "Animal.h"

class Lion : public Animal
{
public:
	void Hunt();
public:
	Lion() = default;
	Lion(std::string InName)
		: Animal(InName)     
	{
	}
};

