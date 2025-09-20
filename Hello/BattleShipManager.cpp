#include "BattleShipManager.h"

// ���� ��ƿ: ��ǥ�� ���� ������
static inline bool InBoardBounds(const BattleBoard& InBoard, int InX, int InY)
{
    return InBoard.InBounds(InX, InY);
}

void BattleShipManager::Clear()
{
    for (int i = 0; i < ShipCount; i++)
    {
        Ships[i].Reset(ShipLengths[i]);    // ��ǥ�� PlaceLine���� ���߿� ä��
    }
}

// �� ô ��ġ (���/��ħ �˻�)
bool BattleShipManager::PlaceLine(int InIndex, int InStartX, int InStartY, bool InHorizontal, const BattleBoard& InBoard)
{
    if (InIndex < 0 || InIndex >= ShipCount)
    {
        return false;
    }

    BattleShip& Ship = Ships[InIndex];
    int Length = Ship.GetLength();

    // 1) ��� �˻�
    int EndX = InStartX + (InHorizontal ? (Length - 1) : 0);
    int EndY = InStartY + (InHorizontal ? 0 : (Length - 1));

    if (!InBoardBounds(InBoard, InStartX, InStartY)) { return false; }
    if (!InBoardBounds(InBoard, EndX, EndY)) { return false; }

    // 2) �ӽ÷� ��ǥ �����ؼ� �浹 �˻�
    BattleShip Temp;
    Temp.Reset(Length);
    Temp.SetLine(InStartX, InStartY, InHorizontal);

    if (IsColliding(Temp))
    {
        return false;
    }

    // 3) ���� ��ġ
    Ship.SetLine(InStartX, InStartY, InHorizontal);
    return true;
}

// �ٸ� ��� ��ǥ ��ħ Ȯ��
bool BattleShipManager::IsColliding(const BattleShip& InShip) const
{
    for (int i = 0; i < ShipCount; i++)
    {
        const BattleShip& Other = Ships[i];
        if (Other.GetLength() == 0)
        {
            continue;
        }

        for (int a = 0; a < InShip.GetLength(); a++)
        {
            ShipCoord A = InShip.GetCell(a);
            for (int b = 0; b < Other.GetLength(); b++)
            {
                ShipCoord B = Other.GetCell(b);
                if (A.X == B.X && A.Y == B.Y)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

// ���� ���忡 Ship ��Ŀ ���
void BattleShipManager::MarkOnBoard(BattleBoard& InBoard) const
{
    for (int i = 0; i < ShipCount; i++)
    {
        const BattleShip& Ship = Ships[i];
        for (int c = 0; c < Ship.GetLength(); c++)
        {
            ShipCoord Cell = Ship.GetCell(c);
            InBoard.SetBattle(Cell.X, Cell.Y, BattleType::Ship);
        }
    }
}

// ��� �� ��ħ ����
bool BattleShipManager::AllSunk() const
{
    for (int i = 0; i < ShipCount; i++)
    {
        if (!Ships[i].GetIsSunk())
        {
            return false;
        }
    }
    return true;
}

// ��� ó��
ShotResult BattleShipManager::Shoot(BattleBoard& InBoard, int InX, int InY)
{
    // 1) ��� �˻�
    if (!InBoardBounds(InBoard, InX, InY))
    {
        return ShotResult::InValid;
    }

    // 2) �̹� �� ĭ����
    BattleType Curr = InBoard.GetBattle(InX, InY);
    if (Curr == BattleType::Hit || Curr == BattleType::Miss)
    {
        return ShotResult::Already;
    }

    // 3) ��� �� �˻� �� ���� ����
    for (int i = 0; i < ShipCount; i++)
    {
        BattleShip& Ship = Ships[i];
        int Index = Ship.FindShipIndex(InX, InY);

        if (Index >= 0)
        {
            InBoard.SetBattle(InX, InY, BattleType::Hit);

            bool SunkNow = Ship.HitShip(InX, InY);
            if (SunkNow)
            {
                return ShotResult::Sunk;
            }
            else
            {
                return ShotResult::Hit;
            }
        }
    }

    // 4) ���� �ƴ� �� Miss
    InBoard.SetBattle(InX, InY, BattleType::Miss);
    return ShotResult::Miss;
}