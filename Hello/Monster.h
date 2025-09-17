#pragma once
#include <string>
#include "Actor.h"

class Monster : public Actor
{
public:
    Monster() = default;
    Monster(const std::string& InName, int InHp, int InAttackPower);
 
    virtual void MazeAttack(MazeBattle* InTarget, Game& InGame) override;
    virtual ~Monster() {};
};
