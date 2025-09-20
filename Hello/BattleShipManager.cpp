#include "BattleShipManager.h"
#include <cstdlib>
#include <ctime>

void BattleShipManager::Clear()
{
    for (int I = 0; I < MaxShip; I++)
    {
        Ships[I].Reset(ShipLengths[I]);
    }
}

bool BattleShipManager::PlaceShipFit(int InIndex, int InStartX, int InStartY, ShipLayout InLayout, BattleBoard& InBoard)
{
    Ships[InIndex].Reset(ShipLengths[InIndex]);
    Ships[InIndex].SetLine(InStartX, InStartY, InLayout);

    const int Length = Ships[InIndex].GetLength();

    // 경계 + 겹침(보드 상태) 검사
    for (int I = 0; I < Length; I++)
    {
        ShipCoord Coord = Ships[InIndex].GetShipCoord(I);

        if (!InBoard.InBounds(Coord.X, Coord.Y))
        {
            return false;
        }

        if (InBoard.GetBattle(Coord.X, Coord.Y) == BattleType::Ship)
        {
            return false;
        }
    }

    // 배치 확정: 보드에 Ship 마킹
    for (int I = 0; I < Length; I++)
    {
        ShipCoord Coord = Ships[InIndex].GetShipCoord(I);
        InBoard.SetBattle(Coord.X, Coord.Y, BattleType::Ship);
    }

    return true;
}

void BattleShipManager::ShipRandomPlace(BattleBoard& InBoard)
{
    srand(time(0));

    for (int I = 0; I < MaxShip; I++)
    {
        const int Length = ShipLengths[I];
        bool Placed = false;

        for (int Try = 0; Try < 10000 && !Placed; Try++)
        {
            ShipLayout Layout = (rand() % 2 == 0) ? ShipLayout::Horizontal : ShipLayout::Vertical;

            int XMaxStart = (Layout == ShipLayout::Horizontal) ? (BattleBoard::Width - Length) : (BattleBoard::Width - 1);
            int YMaxStart = (Layout == ShipLayout::Vertical) ? (BattleBoard::Height - Length) : (BattleBoard::Height - 1);

            int X = rand() % (XMaxStart + 1);
            int Y = rand() % (YMaxStart + 1);

            if (PlaceShipFit(I, X, Y, Layout, InBoard))
            {
                Placed = true;
            }
        }
    }
}

ShotResult BattleShipManager::Shoot(BattleBoard& InBoard, int InX, int InY)
{
    if (!InBoard.InBounds(InX, InY))
    {
        return ShotResult::OutBoard;  // 턴 차감 없음
    }

    BattleType Cell = InBoard.GetBattle(InX, InY);

    if (Cell == BattleType::Hit || Cell == BattleType::Miss)
    {
        return ShotResult::Already;   // 턴 차감 없음
    }

    if (Cell == BattleType::Empty)
    {
        InBoard.SetBattle(InX, InY, BattleType::Miss);
        return ShotResult::Miss;
    }

    // Ship인 경우
    InBoard.SetBattle(InX, InY, BattleType::Hit);

    for (int I = 0; I < MaxShip; I++)
    {
        if (Ships[I].HitShip(InX, InY))
        {
            return ShotResult::Sunk;
        }
    }

    return ShotResult::Hit;
}

int BattleShipManager::GetRemainingShips() const
{
    int Count = 0;

    for (int I = 0; I < MaxShip; I++)
    {
        if (!Ships[I].GetIsSunk())
        {
            Count++;
        }
    }

    return Count;
}