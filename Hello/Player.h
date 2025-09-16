#pragma once
#include <stdio.h>
#include "Actor.h"
#include "MazeGame.h"

class Player : public Actor
{
public:
    void ShowInfo() const;
    void Move(int InDx, int InDy);
    void RecoverWithCoin();
    void Attack(Actor& InTarget, Game& InGame);

    Player() = default;
    Player(const std::string& InName, int InStartX = 0, int InStartY = 0)
        : Actor(InName, 100, 10), X(InStartX), Y(InStartY) {
    }

    inline int GetX() const { return X; }
    inline int GetY() const { return Y; }
    inline int GetCoin() const { return Coin; }
    inline void AddCoin(int InAmount) { Coin += InAmount; }

private:
    int X = 0, Y = 0;
    int Coin = 0;
};



