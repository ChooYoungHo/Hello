#pragma once
#include <string>
#include "Monster.h"

class Goblin : public Monster
{
public:
    Goblin(Game& InGame, const std::string& InName = "Goblin")
        : Monster(InGame, InName)   
    {
    }

    virtual ~Goblin() override = default;

    virtual void MazeAttack(MazeBattle* InTarget, Game& InGame) override;
    virtual void MazeTakeDamage(int InDamage) override;

private:
    void StoneThrow(MazeBattle* InTarget, Game& InGame);
};


