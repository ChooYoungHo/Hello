#pragma once
#include <stdio.h>
#include <cstdint>
#include "BattleBoard.h"
#include "BattleShip.h"

// ��� ���
enum class ShotResult : uint8_t
{
    InValid = 0,   // ���� ��
    Already = 1,   // �̹� �� ĭ (Hit/Miss)
    Miss = 2,   // ������
    Hit = 3,   // ���� (���� ��ħ �ƴ�)
    Sunk = 4    // �̹� Ÿ������ ��ħ
};

class BattleShipManager
{
public:
    static constexpr int MaxShips = 5;

    BattleShipManager()
    {
        Clear();
    }

    void Clear();

    // �� ô ��ġ (���/��ħ �˻� ����). �����ϸ� true.
    bool PlaceLine(int InIndex, int InStartX, int InStartY, bool InHorizontal, const BattleBoard& InBoard);

    // ��ħ �˻�: InShip�� ���� ���� �� ĭ�̶� ��ġ�� true
    bool IsColliding(const BattleShip& InShip) const;

    // ���忡 �Լ� ��ǥ ǥ��(���� �ʿ�)
    void MarkOnBoard(BattleBoard& InBoard) const;

    // ��� �� ��ħ ����
    bool AllSunk() const;

    // ��� ó��: ���� ���� + �ش� �� ��Ʈ/��ħ ó��
    ShotResult Shoot(BattleBoard& InBoard, int InX, int InY);

    // ���� �Դ� ���� ����: {5,4,3,3,2}
    inline int  GetShipCount() const { return ShipCount; }
    inline int  GetShipLength(int InIndex) const { return ShipLengths[InIndex]; }
    inline const BattleShip& GetShip(int InIndex) const { return Ships[InIndex]; }
    inline BattleShip& GetShip(int InIndex) { return Ships[InIndex]; }

private:
    int ShipCount = MaxShips;
    int ShipLengths[MaxShips] = { 5, 4, 3, 3, 2 };
    BattleShip Ships[MaxShips];
};

