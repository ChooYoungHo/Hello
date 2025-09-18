#include <stdio.h>  
#include "Goblin.h"
#include "MazeGame.h"
#include "MazeBattle.h"

/*
Goblin::Goblin(Game& InGame, const std::string& InName)
    : Monster(InGame, InName)
{
}
*/
void Goblin::MazeAttack(MazeBattle* InTarget, Game& InGame)
{
    StoneThrow(InTarget, InGame);
}

void Goblin::MazeTakeDamage(int InDamage)
{
    if (InDamage < 0) { InDamage = 0; }
    Actor::MazeTakeDamage(InDamage);
}

void Goblin::StoneThrow(MazeBattle* InTarget, Game& InGame)
{
    if (InTarget == nullptr || IsDead())
    {
        return;
    }

    int Hits = (InGame.GetPercent() <= 50) ? 2 : 1;

    if (Hits == 2)
        printf("%s: 돌멩이 2연속 투척!\n", GetName().c_str());
    else
        printf("%s: 돌멩이 투척!\n", GetName().c_str());

    for (int i = 0; i < Hits; i++)
    {
        int BaseDamage = InGame.GetDamage();   // 5~15
        int Damage = (BaseDamage * 60) / 100;  // 각 타격 60%
        if (Damage < 1) Damage = 1;

        int Percent = InGame.GetPercent();     // 1~100
        if (Percent <= 10)                     // 10% 크리티컬
        {
            Damage *= 2;
            printf("고블린 크리티컬!\n");
        }
        InTarget->MazeTakeDamage(Damage);
    }
}

