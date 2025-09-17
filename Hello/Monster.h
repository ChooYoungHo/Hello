#pragma once
#include <string>
#pragma once
#include <string>
#include "Actor.h"
#include "MazeGame.h"   // 전방선언 금지 규칙: 직접 include

class Monster : public Actor
{
public:
    Monster() = default;

    // 랜덤 스탯 생성
    Monster(Game& InGame, const std::string& InName = "Monster")
        : Actor(InName, InGame.GetEnemyHp(), InGame.GetDamage()),
        RewardCoin(InGame.GetReward())
    {
    }

    virtual ~Monster() override = default;
    virtual void MazeAttack(MazeBattle* InTarget, Game& InGame) override;

    inline int GetRewardCoin() const { return RewardCoin; }

private:
    int RewardCoin = 0;  
};