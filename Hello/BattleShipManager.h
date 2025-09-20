#pragma once
#include <stdio.h>
#include "BattleBoard.h"
#include "BattleShip.h"

// ��� ���
enum class ShotResult
{
    OutBoard = 0,   // ���� �� (�� ���� ����)
    Already  = 1,   // �̹� �� ĭ (Hit/Miss �� ���� ����)
    Miss     = 2,   // ������
    Hit      = 3,   // ���� (���� ��ħ �ƴ�)
    Sunk     = 4    // �̹� Ÿ������ ��ħ
};

class BattleShipManager
{
public:
    static constexpr int MaxShip = 4;  // �� �ִ� ����

    BattleShipManager()
    {
        Clear();
    }

    void Clear();

    void ShipRandomPlace(BattleBoard& InBoard);     // �Դ� ���� ��ġ(+���� Ship ��ŷ)

    ShotResult Shoot(BattleBoard& InBoard, int InX, int InY); // ��� ó��

    int GetRemainingShips() const;         // ��ħ �ȵ� ���� ��

private:
    // �� ô �õ� ��ġ: ���/��ħ ��� �� ���忡 ��� ��ŷ�ϰ� true
    bool PlaceShipFit(int InIndex, int InStartX, int InStartY, ShipLayout InLayout, BattleBoard& InBoard);

private:
    int         ShipLengths[MaxShip] = { 5, 4, 3, 2 };
    BattleShip  Ships[MaxShip];
};










    /*
    // �� �� ô�� ���忡 ��ġ
    bool ShipLine(int InIndex, int InStartX, int InStartY, ShipLayout InLayout);

    // �Դ� ��ü ���� ��ġ: ���� {5,4,3,2}
    void ShipRandomPlace(BattleBoard& InBoard);

    // ���忡 �Լ� ��ǥ ǥ��(���� �ʿ�)
    void MarkOnBoard(BattleBoard& InBoard) const;

    // ��� �� ��ħ ����
    bool AllSunk() const;

    // ��� ó��: ���� ���� + �ش� �� ��Ʈ/��ħ ó��
    ShotResult Shoot(BattleBoard& InBoard, int InX, int InY);

	// ���� �� ���� ���
    int PrintRemainShip() const;

    // ���� �Դ� ���� ����: {5,4,3,2}
    inline int GetShipCount() const { return ShipCount; }
    inline int GetShipLength(int InIndex) const { return ShipLengths[InIndex]; }
    inline const BattleShip& GetShip(int InIndex) const { return Ships[InIndex]; }
    inline BattleShip& GetShip(int InIndex) { return Ships[InIndex]; }

private:
    // ��ħ �˻� : InShip�� ���� ���� �� ĭ�̶� ��ġ�� true
    bool IsColliding(const BattleShip& InShip) const;

private:
    int ShipCount = MaxShip;
    int ShipLengths[MaxShip] = { 5, 4, 3, 2 };
    BattleShip Ships[MaxShip];
};
*/
