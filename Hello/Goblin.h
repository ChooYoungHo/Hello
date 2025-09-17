#pragma once
#include <string>
#include "Monster.h"

class Goblin : public Monster
{
public:
    Goblin() = default;
    Goblin(const std::string& InName);   

    virtual ~Goblin() override = default;

    // ��� ����
    virtual void MazeAttack(MazeBattle* InTarget, Game& InGame) override;
    virtual void MazeTakeDamage(int InDamage) override;

    // ���� ���
    void StoneThrow(MazeBattle* InTarget, Game& InGame);
};



