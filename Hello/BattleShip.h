#pragma once
#include <cstdint>

// �� ô�� �� (���� 2/3/4/5 ������)
struct ShipCoord
{
    int X = 0;
    int Y = 0;
};

enum class ShipLayout 
{
    Horizontal = 0,  // ����
    Vertical = 1     // ����
};

class BattleShip
{
public:
    static constexpr int MaxShipLen = 5; // ���� �� �� ����
       
    BattleShip()                  // �ʱ�ȭ
    {
    }  

    // �� ���� ���� �� ���� �ʱ�ȭ (0 <= InLength <= MaxShipLen)
    void Reset(int InLength);     

    // �������� ����,���� ���� ��ġ: ShipGrid[0~Length-1] ä��
    void SetLine(int InStartX, int InStartY, ShipLayout InLayout);

    // (InX, InY)�� �� ���� �Ϻ��̸� �ش� �ε���(0~Length-1) ��ȯ, �ƴϸ� -1
    int FindShipIndex(int InX, int InY) const;

    // (InX, InY)�� ������ �� ó�� : �������� ��ħ�Ǿ����� true ��ȯ
    bool HitShip(int InX, int InY);

    inline int  GetLength()  const { return Length; }
    inline int  GetHits()    const { return Hits; }
    inline bool GetIsSunk()  const { return IsSunk; }

    // ��ǥ ��ȸ
    inline ShipCoord GetShipCoord(int InIndex) const { return ShipCoords[InIndex]; }

private:
    int Length = 0;                    // �� ����
    int Hits = 0;                      // ���� ĭ ��
    bool IsSunk = false;               // ��ħ ����
    ShipCoord ShipCoords[MaxShipLen];  // �� �谡 �����ϴ� ���� ĭ���� ��ǥ ��� (0~Length-1 ���)
    bool HitMask[MaxShipLen];          // �� ĭ�� �¾Ҵ��� ǥ��
};



