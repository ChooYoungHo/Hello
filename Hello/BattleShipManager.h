#pragma once
#include <stdio.h>
#include <cstdint>
#include "BattleBoard.h"
#include "BattleShip.h"

// 사격 결과
enum class ShotResult : uint8_t
{
    InValid = 0,   // 보드 밖
    Already = 1,   // 이미 쏜 칸 (Hit/Miss)
    Miss = 2,   // 빗나감
    Hit = 3,   // 명중 (아직 격침 아님)
    Sunk = 4    // 이번 타격으로 격침
};

class BattleShipManager
{
public:
    static constexpr int MaxShips = 5;

    BattleShipManager()
    {
        Clear();
    }

    void Clear();

    // 한 척 배치 (경계/겹침 검사 포함). 성공하면 true.
    bool PlaceLine(int InIndex, int InStartX, int InStartY, bool InHorizontal, const BattleBoard& InBoard);

    // 겹침 검사: InShip이 기존 배들과 한 칸이라도 겹치면 true
    bool IsColliding(const BattleShip& InShip) const;

    // 보드에 함선 좌표 표시(정답 맵용)
    void MarkOnBoard(BattleBoard& InBoard) const;

    // 모든 배 격침 여부
    bool AllSunk() const;

    // 사격 처리: 보드 갱신 + 해당 배 히트/격침 처리
    ShotResult Shoot(BattleBoard& InBoard, int InX, int InY);

    // 고정 함대 길이 구성: {5,4,3,3,2}
    inline int  GetShipCount() const { return ShipCount; }
    inline int  GetShipLength(int InIndex) const { return ShipLengths[InIndex]; }
    inline const BattleShip& GetShip(int InIndex) const { return Ships[InIndex]; }
    inline BattleShip& GetShip(int InIndex) { return Ships[InIndex]; }

private:
    int ShipCount = MaxShips;
    int ShipLengths[MaxShips] = { 5, 4, 3, 3, 2 };
    BattleShip Ships[MaxShips];
};

