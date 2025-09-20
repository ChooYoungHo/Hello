#pragma once
#include <cstdint>

// 한 척의 배 (길이 2/3/4/5 직선형)
struct ShipCoord
{
    int X = 0;
    int Y = 0;
};

enum class ShipLayout 
{
    Horizontal = 0,  // 가로
    Vertical = 1     // 세로
};

class BattleShip
{
public:
    static constexpr int MaxShipLen = 5; // 가장 긴 배 길이
       
    BattleShip()                  // 초기화
    {
    }  

    // 배 길이 설정 및 상태 초기화 (0 <= InLength <= MaxShipLen)
    void Reset(int InLength);     

    // 시작점과 가로,세로 직선 배치: ShipGrid[0~Length-1] 채움
    void SetLine(int InStartX, int InStartY, ShipLayout InLayout);

    // (InX, InY)가 이 배의 일부이면 해당 인덱스(0~Length-1) 반환, 아니면 -1
    int FindShipIndex(int InX, int InY) const;

    // (InX, InY)를 맞췄을 때 처리 : 공격으로 격침되었으면 true 반환
    bool HitShip(int InX, int InY);

    inline int  GetLength()  const { return Length; }
    inline int  GetHits()    const { return Hits; }
    inline bool GetIsSunk()  const { return IsSunk; }

    // 좌표 조회
    inline ShipCoord GetShipCoord(int InIndex) const { return ShipCoords[InIndex]; }

private:
    int Length = 0;                    // 배 길이
    int Hits = 0;                      // 맞은 칸 수
    bool IsSunk = false;               // 격침 여부
    ShipCoord ShipCoords[MaxShipLen];  // 이 배가 차지하는 보드 칸들의 좌표 목록 (0~Length-1 사용)
    bool HitMask[MaxShipLen];          // 각 칸이 맞았는지 표시
};



