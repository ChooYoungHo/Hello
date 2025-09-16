#include "Monster.h"

void Monster::Attack(Actor& InTarget, Game& InGame)
{
    int InDamage = static_cast<int>(InGame.GetDamage());
    printf("[%s]의 공격! (%d)\n", GetName().c_str(), InDamage);
    InTarget.ReceiveDamage(InDamage);
    printf(" -> [%s] 남은 HP: %d\n", InTarget.GetName().c_str(), InTarget.GetHealth());
}

