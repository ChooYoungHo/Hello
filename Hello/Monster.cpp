#include <cstdio>
#include "Monster.h"
#include "MazeGame.h"
#include "MazeBattle.h"


Monster::Monster(const std::string& InName, int InHp, int InAttackPower)
    : Actor(InName, InHp, InAttackPower)
{
}

void Monster::MazeAttack(MazeBattle* InTarget, Game& InGame)
{
    if (InTarget == nullptr || IsDead())
    {
        return;
    }

    int Damage = InGame.GetDamage();   // 5 ~ 15
    int Percent = InGame.GetPercent();  // 1 ~ 100

    if (Percent <= 10)
    {
        Damage *= 2;
        std::printf("%s 크리티컬 공격!\n", GetName().c_str());
    }

    InTarget->MazeTakeDamage(Damage);
}
