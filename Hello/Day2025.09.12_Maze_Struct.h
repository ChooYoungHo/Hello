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

// ===== �̷� �� =====
class Maze
{
public:
    Maze();

    // ���/��ȸ
    void MazePrint(int InPlayerX, int InPlayerY);
    PlayerPosition FindStart();

    // ��ƿ
    bool InBounds(int InX, int InY);
    bool IsWall(int InX, int InY);

    inline int GetWidth()  const { return MazeWidth; }
    inline int GetHeight() const { return MazeHeight; }

private:
    int Grid[MazeHeight][MazeWidth];
};

// ===== ����/�̺�Ʈ ��ƿ =====
class Encounter
{
public:
    static EventType RollMoveEvent(Game& InGame); // 20% Battle
    static bool      RollCritical(Game& InGame);  // 10% Crit
};

// ===== ���� ���� =====
bool RunBattle(Game& InGame, Player& InPlayer);

// ===== ��ü ���� ���� =====
void MazeEscapeRun();



