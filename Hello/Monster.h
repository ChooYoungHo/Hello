#pragma once
#include <string>
#include "MazeGame.h"
#include "Actor.h"


class Monster : public Actor
{
public:
    Monster() = default;
    Monster(const std::string& InName, int InHp, int InAttackPower)
        : Actor(InName, InHp, InAttackPower)
    {
    }

    void Attack(Actor& InTarget, Game& InGame);
};




