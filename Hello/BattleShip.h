#pragma once
#include <cstdint>


/*
#Battle Ship
1. ��ǥ
    - �÷��̾�� ��ǻ�Ͱ� ���ܳ��� �� �Լ��� ã�� ��ħ��Ų��.
2. �� ũ��� 10 x 10�̴�.
    - �� ĭ���� �Լ� �Ǵ� �� ĭ�� ��ġ�Ѵ�.
3. �� �Լ� ����
    - �� 4ô: ũ�� 5, 4, 3, 2
4. �Լ� ��ġ
    - �Լ��� �ʿ� ��ġ�� �ʰ� ���� �Ǵ� ���η� ���� ��ġ�ȴ�.
5. �÷��̾��� ��ǥ
    - ���ѵ� ���� Ƚ��(50ȸ) ���� ��� �� �Լ��� ���߽��� ��ħ��Ű�� ��.
6. ���� ���� ���
    - �÷��̾�� (x, y) ��ǥ�� �Է��� �����Ѵ�.
    - ���� ���(����/����)�� �ٷ� ǥ�õǰ�, �÷��̾��� �ʿ� ��ϵȴ�.
    - �̹� ������ ��ǥ�� �ٽ� ������ �� ����.
7. �Լ� ��ħ
    - �� �Լ��� ��� ĭ�� ���߽�Ű�� "��ħ" �޽����� ��µȴ�.
8. ���� ���� ����
    - ��� �� �Լ��� ��ħ��Ű�� �¸�.
    - �־��� Ƚ�� ���� ��ħ���� ���ϸ� �й��ϸ�, �й� �� �� �Լ��� ���� ��ġ�� �����ȴ�.
9. �߰� ����
    - ���� ���� Ƚ���� ���� �� �Լ� ���� �׻� �ȳ��ȴ�.
*/

// �� ô�� �� (���� 2/3/4/5 ������)
struct ShipCoord
{
    int X = 0;
    int Y = 0;
};

class BattleShip
{
public:
    static constexpr int MaxShipLen = 5; // ���� �� �� ����
       
    BattleShip()                  // Length=0, Hits=0, IsSunk=false, HitMask �ʱ�ȭ
    {
    }  

    // �� ���� ���� �� ���� �ʱ�ȭ (0 <= InLength <= MaxShipLen)
    void Reset(int InLength);     

    // �������� ����(����/����)���� ���� ��ġ: ShipGrid[0~Length-1] ä��
    void SetLine(int InStartX, int InStartY, bool InHorizontal);

    // (InX, InY)�� �� ���� �Ϻ��̸� �ش� �ε���(0~Length-1) ��ȯ, �ƴϸ� -1
    int Occupies(int InX, int InY) const;

    // (InX, InY)�� ������ �� ó��: �̹� �������� ��ħ�Ǿ����� true ��ȯ
    bool RegisterHit(int InX, int InY);

    lnline


private:
    int Length = 0;                          // �� ����
    int Hits = 0;                            // ���� ĭ ��
    bool IsSunk = false;                     // ��ħ ����
    ShipCoord ShipGrid[MaxShipLen];          // �� ĭ ��ǥ
    bool HitMask[MaxShipLen];                // �� ĭ�� �¾Ҵ��� ǥ��
};
































    // �ܼ� ����
    inline int  GetLength()  const { return Length; }
    inline int  GetHits()    const { return Hits; }
    inline bool GetIsSunk()  const { return IsSunk; }

    // ��ǥ ��ȸ(��ȿ �ε��� ����)
    inline ShipCoord GetCell(int InIndex) const { return Cells[InIndex]; }

private:
    int Length = 0;                          // �� ����
    int Hits = 0;                            // ���� ĭ ��
    bool IsSunk = false;                     // ��ħ ����
    ShipCoord Cells[MaxShipLen];             // �� ĭ ��ǥ
    bool HitMask[MaxShipLen];                // �� ĭ�� �¾Ҵ��� ǥ��
};