#include "BattleShip.h"

// �� ���� ���� �� ���� �ʱ�ȭ (0 <= InLength <= MaxShipLen)
void BattleShip::Reset(int InLength)
{
    if (InLength < 0) { InLength = 0; }
    if (InLength > MaxShipLen) { InLength = MaxShipLen; }

    Length = InLength;
    Hits = 0;
    IsSunk = false;

    // ��ǥ/��Ʈ����ũ �ʱ�ȭ
    for (int i = 0; i < MaxShipLen; ++i)
    {
        ShipGrid[i].X = 0;
        ShipGrid[i].Y = 0;
        HitMask[i] = false;
    }
}

// �������� ����/���� ���� ��ġ
// InLayout == true  �� ���� ��ġ (���������� i ����)
// InLayout == false �� ���� ��ġ (�Ʒ������� i ����)
void BattleShip::SetLine(int InStartX, int InStartY, bool InLayout)
{
    // ��ǥ ä��� (Length����)
    for (int i = 0; i < Length; ++i)
    {
        ShipGrid[i].X = InStartX + (InLayout ? i : 0);
        ShipGrid[i].Y = InStartY + (InLayout ? 0 : i);
        HitMask[i] = false;  // �� ��ġ �� �ǰ� ������ ����
    }

    Hits = 0;
    IsSunk = false;
}

// (InX, InY)�� �� ���� �Ϻ��̸� �ش� �ε���(0~Length-1) ��ȯ, �ƴϸ� -1
int BattleShip::FindShipIndex(int InX, int InY) const
{
    for (int i = 0; i < Length; ++i)
    {
        if (ShipGrid[i].X == InX && ShipGrid[i].Y == InY)
        {
            return i;
        }
    }
    return -1;
}

// (InX, InY)�� ������ �� ó�� : �̹� �������� ��ħ�Ǿ����� true ��ȯ
bool BattleShip::HitShip(int InX, int InY)
{
    const int Index = FindShipIndex(InX, InY);
    if (Index < 0)
    {
        // �� �谡 �ƴ� �� (Miss)
        return false;
    }

    // �̹� ���� ĭ�̸� ��ȭ ����
    if (HitMask[Index])
    {
        return false;
    }

    // ���� ���� ó��
    HitMask[Index] = true;
    Hits++;

    // �̹� �������� ��ħ�Ǿ��°�?
    if (!IsSunk && Hits >= Length)
    {
        IsSunk = true;
        return true;   // �̹� Ÿ������ ��ħ
    }

    return false;      // ���߱� ������ ���� ��ħ�� �ƴ�
}