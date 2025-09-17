#pragma once
#include <string>
#include <cstdint>
#include "MazeGame.h"
#include "Player.h"  

const int MazeHeight = 10;
const int MazeWidth = 20;

enum class EventType
{
    Battle = 0,
    None = 1
};

enum class CellType
{
    Road = 0,
    Wall = 1,
    Start = 2,
    Exit = 3
};

struct PlayerPosition
{
    int X = 0;
    int Y = 0;

    PlayerPosition() = default;
    PlayerPosition(int InX, int InY) : X(InX), Y(InY) {}
};

// ===== 미로 맵 =====
class Maze
{
public:
    Maze();

    // 출력/조회
    void MazePrint(int InPlayerX, int InPlayerY);
    PlayerPosition FindStart();

    // 유틸
    bool InBounds(int InX, int InY);
    bool IsWall(int InX, int InY);

    inline int GetWidth()  const { return MazeWidth; }
    inline int GetHeight() const { return MazeHeight; }

private:
    int Grid[MazeHeight][MazeWidth];
};

// ===== 전투/이벤트 유틸 =====
class Encounter
{
public:
    static EventType RollMoveEvent(Game& InGame); // 20% Battle
    static bool      RollCritical(Game& InGame);  // 10% Crit
};

// ===== 전투 실행 =====
bool RunBattle(Game& InGame, Player& InPlayer);

// ===== 전체 게임 루프 =====
void MazeEscapeRun();



