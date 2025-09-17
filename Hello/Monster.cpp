#include <cstdio>
#include "Monster.h"
#include "MazeGame.h"
#include "MazeBattle.h"

void Monster::MazeAttack(MazeBattle* InTarget, Game& InGame)
{
    if (InTarget == nullptr || IsDead())
    {
        return;
    }

    int Damage = GetAttackPower();       // 생성 시 랜덤으로 정해진 고정 ATK 사용
    if (InGame.GetPercent() <= 10)       // 10% 크리티컬
    {
        Damage *= 2;
        std::printf("%s 크리티컬 공격!\n", GetName().c_str());
    }

    InTarget->MazeTakeDamage(Damage);
}