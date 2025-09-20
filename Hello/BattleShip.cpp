#include "BattleShip.h"

// �� ���� ���� �� ���� �ʱ�ȭ 
void BattleShip::Reset(int InLength)
{
    if (InLength < 0) 
    { 
        InLength = 0; 
    }
    if (InLength > MaxShipLen) 
    { 
        InLength = MaxShipLen; 
    }

    Length = InLength;
    Hits = 0;
    IsSunk = false;

    // ��ǥ,��Ʈ����ũ �ʱ�ȭ
    for (int i = 0; i < MaxShipLen; i++)
    {
        ShipCoords[i].X = 0;
        ShipCoords[i].Y = 0;
        HitMask[i] = false;
    }
}

// ������,����,���� ��ġ
void BattleShip::SetLine(int InStartX, int InStartY, ShipLayout InLayout)
{
    for (int I = 0; I < Length; ++I)
    {
        if (InLayout == ShipLayout::Horizontal)
        {
            ShipCoords[I].X = InStartX + I;  // ����: X ����
            ShipCoords[I].Y = InStartY;      // Y ����
        }
        else // Vertical
        {
            ShipCoords[I].X = InStartX;      // X ����
            ShipCoords[I].Y = InStartY + I;  // ����: Y ����
        }
    }
}

// (InX, InY)�� �� ���� �Ϻ��̸� �ش� �ε���(0~Length-1) ��ȯ, �ƴϸ� -1
int BattleShip::FindShipIndex(int InX, int InY) const
{
    for (int i = 0; i < Length; i++)
    {
        if (ShipCoords[i].X == InX && ShipCoords[i].Y == InY)
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