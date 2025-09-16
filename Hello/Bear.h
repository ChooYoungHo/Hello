#pragma once
#include "Animal.h"

class Bear : public Animal  
{
public:
	void Hunt();  
	void Roar();
public:
	Bear() = default;
	Bear(std::string InName)
		: Animal(InName)     
	{
	}
};

