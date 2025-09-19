#pragma once
#include <cstdint>


/*
#Battle Ship
1. 목표
    - 플레이어는 컴퓨터가 숨겨놓은 적 함선을 찾아 격침시킨다.
2. 맵 크기는 10 x 10이다.
    - 각 칸에는 함선 또는 빈 칸이 위치한다.
3. 적 함선 종류
    - 총 4척: 크기 5, 4, 3, 2
4. 함선 배치
    - 함선은 맵에 겹치지 않게 가로 또는 세로로 랜덤 배치된다.
5. 플레이어의 목표
    - 제한된 공격 횟수(50회) 내에 모든 적 함선을 명중시켜 격침시키는 것.
6. 게임 진행 방식
    - 플레이어는 (x, y) 좌표를 입력해 공격한다.
    - 공격 결과(명중/실패)는 바로 표시되고, 플레이어의 맵에 기록된다.
    - 이미 공격한 좌표는 다시 공격할 수 없다.
7. 함선 격침
    - 한 함선의 모든 칸을 명중시키면 "격침" 메시지가 출력된다.
8. 게임 종료 조건
    - 모든 적 함선을 격침시키면 승리.
    - 주어진 횟수 내에 격침하지 못하면 패배하며, 패배 시 적 함선의 실제 위치가 공개된다.
9. 추가 정보
    - 남은 공격 횟수와 남은 적 함선 수가 항상 안내된다.
*/

// 한 척의 배 (길이 2/3/4/5 직선형)
struct ShipCoord
{
    int X = 0;
    int Y = 0;
};

class BattleShip
{
public:
    static constexpr int MaxShipLen = 5; // 가장 긴 배 길이
       
    BattleShip()                  // Length=0, Hits=0, IsSunk=false, HitMask 초기화
    {
    }  

    // 배 길이 설정 및 상태 초기화 (0 <= InLength <= MaxShipLen)
    void Reset(int InLength);     

    // 시작점과 방향(가로/세로)으로 직선 배치: ShipGrid[0~Length-1] 채움
    void SetLine(int InStartX, int InStartY, bool InHorizontal);

    // (InX, InY)가 이 배의 일부이면 해당 인덱스(0~Length-1) 반환, 아니면 -1
    int Occupies(int InX, int InY) const;

    // (InX, InY)를 맞췄을 때 처리: 이번 공격으로 격침되었으면 true 반환
    bool RegisterHit(int InX, int InY);

    lnline


private:
    int Length = 0;                          // 배 길이
    int Hits = 0;                            // 맞은 칸 수
    bool IsSunk = false;                     // 격침 여부
    ShipCoord ShipGrid[MaxShipLen];          // 각 칸 좌표
    bool HitMask[MaxShipLen];                // 각 칸이 맞았는지 표시
};
































    // 단순 게터
    inline int  GetLength()  const { return Length; }
    inline int  GetHits()    const { return Hits; }
    inline bool GetIsSunk()  const { return IsSunk; }

    // 좌표 조회(유효 인덱스 전제)
    inline ShipCoord GetCell(int InIndex) const { return Cells[InIndex]; }

private:
    int Length = 0;                          // 배 길이
    int Hits = 0;                            // 맞은 칸 수
    bool IsSunk = false;                     // 격침 여부
    ShipCoord Cells[MaxShipLen];             // 각 칸 좌표
    bool HitMask[MaxShipLen];                // 각 칸이 맞았는지 표시
};