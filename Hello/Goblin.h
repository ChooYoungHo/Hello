#pragma once
#include <string>
#include "Monster.h"

class Goblin : public Monster
{
public:
    Goblin() = default;
    explicit Goblin(const std::string& InName);   // 정의는 cpp

    virtual ~Goblin() override = default;

    // 고블린 전투
    virtual void MazeAttack(MazeBattle* InTarget, Game& InGame) override;
    virtual void MazeTakeDamage(int InDamage) override;

    // 고유 기술
    void StoneThrow(MazeBattle* InTarget, Game& InGame);
};



