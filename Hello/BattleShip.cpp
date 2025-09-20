#include "BattleShip.h"

// 배 길이 설정 및 상태 초기화 
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

    // 좌표,히트마스크 초기화
    for (int i = 0; i < MaxShipLen; i++)
    {
        ShipCoords[i].X = 0;
        ShipCoords[i].Y = 0;
        HitMask[i] = false;
    }
}

// 시작점,가로,세로 배치
void BattleShip::SetLine(int InStartX, int InStartY, ShipLayout InLayout)
{
    for (int I = 0; I < Length; ++I)
    {
        if (InLayout == ShipLayout::Horizontal)
        {
            ShipCoords[I].X = InStartX + I;  // 가로: X 증가
            ShipCoords[I].Y = InStartY;      // Y 고정
        }
        else // Vertical
        {
            ShipCoords[I].X = InStartX;      // X 고정
            ShipCoords[I].Y = InStartY + I;  // 세로: Y 증가
        }
    }
}

// (InX, InY)가 이 배의 일부이면 해당 인덱스(0~Length-1) 반환, 아니면 -1
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

// (InX, InY)를 맞췄을 때 처리 : 이번 공격으로 격침되었으면 true 반환
bool BattleShip::HitShip(int InX, int InY)
{
    const int Index = FindShipIndex(InX, InY);
    if (Index < 0)
    {
        // 이 배가 아닌 곳 (Miss)
        return false;
    }

    // 이미 맞은 칸이면 변화 없음
    if (HitMask[Index])
    {
        return false;
    }

    // 새로 맞음 처리
    HitMask[Index] = true;
    Hits++;

    // 이번 공격으로 격침되었는가?
    if (!IsSunk && Hits >= Length)
    {
        IsSunk = true;
        return true;   // 이번 타격으로 격침
    }

    return false;      // 맞추긴 했지만 아직 격침은 아님
}