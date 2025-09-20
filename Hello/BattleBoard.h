#pragma once
#include <stdio.h>


enum class BattleType
{
    Empty = 0,    // �� ��
    Ship  = 1,    // �� �Լ� (���� �ʿ��� ����)
    Hit   = 2,    // ����
    Miss  = 3     // ������
};

class BattleBoard
{
public:
    static constexpr int Width = 10;
    static constexpr int Height = 10;

    BattleBoard()   // ���� �� ���� ���
    { 
        Clear(); 
    }

    // ���
    void Clear();

    // ��� (���� ������ Ȯ��)
    bool InBounds(int InX, int InY) const;

    // ���� ��ǥ ���� ���� (InType : Empty, Ship, Hit, Miss)
    void SetBattle(int InX, int InY, BattleType InType);

    // �ش� ��ǥ ���� (Empty, Ship, Hit, Miss)
    BattleType GetBattle(int InX, int InY) const;

    // ���� ���
    void PrintPlayer() const; // �÷��̾�
    void PrintShip() const;   // �� ����

private:
    BattleType BattleGrid[Height][Width];
};


