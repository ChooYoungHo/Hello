#pragma once
#include <stdio.h>
#include <string>
#include "Actor.h"
#include "MazeGame.h"


class Player : public Actor
{
public:

    // �÷��̾� ����
    virtual void MazeAttack(MazeBattle* InTarget, Game& InGame) override;

    // ���� ����
    void AddCoin(int InAmount);
    bool UseCoin(int InAmount);
   
    // �������� ü�� ȸ�� 
    void RecoverWithCoin(int InCost, int InRecoveryHealth);
    
    virtual void ShowInfo() const override;

    inline int GetX() const { return X; }
    inline int GetY() const { return Y; }
    inline int GetCoin() const { return Coin; }
    void Move(int InDx, int InDy);
    virtual ~Player() {};

    Player() = default;
    Player(const std::string& InName, int InStartX = 0, int InStartY = 0)
        : Actor(InName, 100, 10), X(InStartX), Y(InStartY) 
    {
    }
    
private:
    int X = 0, Y = 0;
    int Coin = 0;
};
