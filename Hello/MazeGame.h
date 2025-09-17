#pragma once
#include <random>
#include <string>


/*
�̷� Ż�� ���� �����ϱ�
���� Ŭ����ȭ�ϱ�(Monster�� ��ü)
�÷��̾� Ŭ���� ����� �����ϱ�
���� �÷��̾��� �θ��� Actor Ŭ���� �����
*/

/*
9 / 17
�̷� Ż�� ���� �����ϱ�
Actor Ŭ������ ICanBattle �������̽��� �߰��ϱ�
������ �� �� �ִٴ� ���� ��Ÿ���� �������̽�
�ֿ� �Լ�
ApplyDamage(ICanBattle * InTarget);
TakeDamage(float InDamage);
���� �ڵ� ����
enum�� ��� enum class�� �����ϱ�
Monster�� ������ �� �� �� ���ͺ��� �ٸ� ������� �����ϱ�

���� ���� �� ������ ���Ͱ� ����
*/

// �̷� ���� Ŭ����
class Game
{
public:
    Game()
        : RandomEngine(Random()),
        DamageDist(10, 15),
        PercentDist(1, 100),
        RewardDist(50, 100),
        EnemyHpDist(70, 100)
    {
    }

    int GetDamage() { return DamageDist(RandomEngine); }
    int GetPercent() { return PercentDist(RandomEngine); }
    int GetReward() { return RewardDist(RandomEngine); }
    int GetEnemyHp() { return EnemyHpDist(RandomEngine); }

private:
    std::random_device Random;
    std::mt19937 RandomEngine;

    std::uniform_int_distribution<int> DamageDist;   // 5 ~ 15
    std::uniform_int_distribution<int> PercentDist;  // 1 ~ 100 (ũ��Ƽ�� ������)
    std::uniform_int_distribution<int> RewardDist;   // 50 ~ 100
    std::uniform_int_distribution<int> EnemyHpDist;  // 70 ~ 100
};


