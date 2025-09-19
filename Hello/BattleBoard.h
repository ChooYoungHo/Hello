#pragma once
#include <stdio.h>
#include <cstdint>

enum class BattleType : uint8_t
{
    Empty = 0,  // 빈 곳
    Ship  = 1,   // 적 함선 (정답 맵에만 보임)
    Hit   = 2,    // 명중
    Miss  = 3    // 빗나감
};

class BattleBoard
{
public:
    static constexpr int Width = 10;
    static constexpr int Height = 10;

    BattleBoard()   // 시작 시 전부 비움
    { 
        Clear(); 
    }

    // 빈곳
    void Clear();

    // 경계
    bool InBounds(int InX, int InY) const;

    // 실행 타입
    void SetBattle(int InX, int InY, BattleType InType);
    BattleType GetBattle(int InX, int InY) const;

    // 보드 출력
    void PrintPlayer() const; // 플레이어
    void PrintShip() const;   // 배 정답

private:
    BattleType BattleGrid[Height][Width];
};


