#pragma once
#include <string>
#include <random>
#include "Monster.h"


class Goblin : public Monster
{
public:

	void StoneThrow();

public:

	Goblin() = default;
	Goblin(std::string InName)
		: Monster(InName , 30.0f, 5.0f)
	{
	}
};


