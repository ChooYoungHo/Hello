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

    int Damage = GetAttackPower();       // ���� �� �������� ������ ���� ATK ���
    if (InGame.GetPercent() <= 10)       // 10% ũ��Ƽ��
    {
        Damage *= 2;
        std::printf("%s ũ��Ƽ�� ����!\n", GetName().c_str());
    }

    InTarget->MazeTakeDamage(Damage);
}