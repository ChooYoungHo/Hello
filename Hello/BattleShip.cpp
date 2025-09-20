#include "BattleShip.h"

// 배 길이 설정 및 상태 초기화 (0 <= InLength <= MaxShipLen)
void BattleShip::Reset(int InLength)
{
    if (InLength < 0) { InLength = 0; }
    if (InLength > MaxShipLen) { InLength = MaxShipLen; }

    Length = InLength;
    Hits = 0;
    IsSunk = false;

    // 좌표/히트마스크 초기화
    for (int i = 0; i < MaxShipLen; ++i)
    {
        ShipGrid[i].X = 0;
        ShipGrid[i].Y = 0;
        HitMask[i] = false;
    }
}

// 시작점과 가로/세로 직선 배치
// InLayout == true  → 가로 배치 (오른쪽으로 i 증가)
// InLayout == false → 세로 배치 (아래쪽으로 i 증가)
void BattleShip::SetLine(int InStartX, int InStartY, bool InLayout)
{
    // 좌표 채우기 (Length개만)
    for (int i = 0; i < Length; ++i)
    {
        ShipGrid[i].X = InStartX + (InLayout ? i : 0);
        ShipGrid[i].Y = InStartY + (InLayout ? 0 : i);
        HitMask[i] = false;  // 새 배치 시 피격 정보도 리셋
    }

    Hits = 0;
    IsSunk = false;
}

// (InX, InY)가 이 배의 일부이면 해당 인덱스(0~Length-1) 반환, 아니면 -1
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