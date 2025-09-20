#pragma once
#include <stdio.h>
#include "BattleBoard.h"
#include "BattleShip.h"

// 사격 결과
enum class ShotResult
{
    OutBoard = 0,   // 보드 밖 (턴 차감 없음)
    Already  = 1,   // 이미 쏜 칸 (Hit/Miss 턴 차감 없음)
    Miss     = 2,   // 빗나감
    Hit      = 3,   // 명중 (아직 격침 아님)
    Sunk     = 4    // 이번 타격으로 격침
};

class BattleShipManager
{
public:
    static constexpr int MaxShip = 4;  // 배 최대 개수

    BattleShipManager()
    {
        Clear();
    }

    void Clear();

    void ShipRandomPlace(BattleBoard& InBoard);     // 함대 랜덤 배치(+보드 Ship 마킹)

    ShotResult Shoot(BattleBoard& InBoard, int InX, int InY); // 사격 처리

    int GetRemainingShips() const;         // 격침 안된 남은 배

private:
    // 한 척 시도 배치: 경계/겹침 통과 시 보드에 즉시 마킹하고 true
    bool PlaceShipFit(int InIndex, int InStartX, int InStartY, ShipLayout InLayout, BattleBoard& InBoard);

private:
    int         ShipLengths[MaxShip] = { 5, 4, 3, 2 };
    BattleShip  Ships[MaxShip];
};










    /*
    // 배 한 척을 보드에 배치
    bool ShipLine(int InIndex, int InStartX, int InStartY, ShipLayout InLayout);

    // 함대 전체 랜덤 배치: 길이 {5,4,3,2}
    void ShipRandomPlace(BattleBoard& InBoard);

    // 보드에 함선 좌표 표시(정답 맵용)
    void MarkOnBoard(BattleBoard& InBoard) const;

    // 모든 배 격침 여부
    bool AllSunk() const;

    // 사격 처리: 보드 갱신 + 해당 배 히트/격침 처리
    ShotResult Shoot(BattleBoard& InBoard, int InX, int InY);

	// 남은 배 개수 출력
    int PrintRemainShip() const;

    // 고정 함대 길이 구성: {5,4,3,2}
    inline int GetShipCount() const { return ShipCount; }
    inline int GetShipLength(int InIndex) const { return ShipLengths[InIndex]; }
    inline const BattleShip& GetShip(int InIndex) const { return Ships[InIndex]; }
    inline BattleShip& GetShip(int InIndex) { return Ships[InIndex]; }

private:
    // 겹침 검사 : InShip이 기존 배들과 한 칸이라도 겹치면 true
    bool IsColliding(const BattleShip& InShip) const;

private:
    int ShipCount = MaxShip;
    int ShipLengths[MaxShip] = { 5, 4, 3, 2 };
    BattleShip Ships[MaxShip];
};
*/
