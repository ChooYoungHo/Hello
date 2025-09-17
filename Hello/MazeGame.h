#pragma once
#include <random>
#include <string>


/*
미로 탈출 게임 수정하기
적을 클래스화하기(Monster로 대체)
플레이어 클래스 만들고 적용하기
적과 플레이어의 부모인 Actor 클래스 만들기
*/

/*
9 / 17
미로 탈출 게임 수정하기
Actor 클래스에 ICanBattle 인터페이스를 추가하기
전투를 할 수 있다는 것을 나타내는 인터페이스
주요 함수
ApplyDamage(ICanBattle * InTarget);
TakeDamage(float InDamage);
전투 코드 수정
enum을 모두 enum class로 변경하기
Monster가 공격을 할 때 각 몬스터별로 다른 방식으로 공격하기

전투 시작 시 랜덤한 몬스터가 등장
*/

// 미로 난수 클래스
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
    std::uniform_int_distribution<int> PercentDist;  // 1 ~ 100 (크리티컬 판정용)
    std::uniform_int_distribution<int> RewardDist;   // 50 ~ 100
    std::uniform_int_distribution<int> EnemyHpDist;  // 70 ~ 100
};


