#pragma once
#include <string>
#include "Actor.h"
#include "MazeGame.h"   

class Monster : public Actor
{
public:
    Monster() = default;

    // ·£´ý ½ºÅÈ »ý¼º
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