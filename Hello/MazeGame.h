#pragma once
#include <random>
#include <string>

/*
�̷� Ż�� ���� �����ϱ�
���� Ŭ����ȭ�ϱ�(Monster�� ��ü)
�÷��̾� Ŭ���� ����� �����ϱ�
���� �÷��̾��� �θ��� Actor Ŭ���� �����
*/

// �̷� ���� Ŭ����
class Game
{
public:

    Game();

    //Getter
    float GetDamage() { return DamageDist(RandomEngine); }
    float GetPercent() { return PercentDist(RandomEngine); }
    float GetReward() { return RewardDist(RandomEngine); }
    float GetEnemyHp() { return EnemyHpDist(RandomEngine); }

private:
    std::random_device Random;
    std::mt19937 RandomEngine;

    std::uniform_int_distribution<int> DamageDist;   // 5 ~ 15
    std::uniform_int_distribution<int> PercentDist;  // 1 ~ 100 (ũ��Ƽ�� ������)
    std::uniform_int_distribution<int> RewardDist;   // 50 ~ 100
    std::uniform_int_distribution<int> EnemyHpDist;  // 70 ~ 100
};
