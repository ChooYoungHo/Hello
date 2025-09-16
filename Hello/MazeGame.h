#pragma once
#include <random>
#include <string>

/*
미로 탈출 게임 수정하기
적을 클래스화하기(Monster로 대체)
플레이어 클래스 만들고 적용하기
적과 플레이어의 부모인 Actor 클래스 만들기
*/

// 미로 난수 클래스
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
    std::uniform_int_distribution<int> PercentDist;  // 1 ~ 100 (크리티컬 판정용)
    std::uniform_int_distribution<int> RewardDist;   // 50 ~ 100
    std::uniform_int_distribution<int> EnemyHpDist;  // 70 ~ 100
};
