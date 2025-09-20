#include "BattleShipManager.h"

// 내부 유틸: 좌표가 보드 안인지
static inline bool InBoardBounds(const BattleBoard& InBoard, int InX, int InY)
{
    return InBoard.InBounds(InX, InY);
}

void BattleShipManager::Clear()
{
    for (int i = 0; i < ShipCount; i++)
    {
        Ships[i].Reset(ShipLengths[i]);    // 좌표는 PlaceLine으로 나중에 채움
    }
}

// 한 척 배치 (경계/겹침 검사)
bool BattleShipManager::PlaceLine(int InIndex, int InStartX, int InStartY, bool InHorizontal, const BattleBoard& InBoard)
{
    if (InIndex < 0 || InIndex >= ShipCount)
    {
        return false;
    }

    BattleShip& Ship = Ships[InIndex];
    int Length = Ship.GetLength();

    // 1) 경계 검사
    int EndX = InStartX + (InHorizontal ? (Length - 1) : 0);
    int EndY = InStartY + (InHorizontal ? 0 : (Length - 1));

    if (!InBoardBounds(InBoard, InStartX, InStartY)) { return false; }
    if (!InBoardBounds(InBoard, EndX, EndY)) { return false; }

    // 2) 임시로 좌표 구성해서 충돌 검사
    BattleShip Temp;
    Temp.Reset(Length);
    Temp.SetLine(InStartX, InStartY, InHorizontal);

    if (IsColliding(Temp))
    {
        return false;
    }

    // 3) 실제 배치
    Ship.SetLine(InStartX, InStartY, InHorizontal);
    return true;
}

// 다른 배와 좌표 겹침 확인
bool BattleShipManager::IsColliding(const BattleShip& InShip) const
{
    for (int i = 0; i < ShipCount; i++)
    {
        const BattleShip& Other = Ships[i];
        if (Other.GetLength() == 0)
        {
            continue;
        }

        for (int a = 0; a < InShip.GetLength(); a++)
        {
            ShipCoord A = InShip.GetCell(a);
            for (int b = 0; b < Other.GetLength(); b++)
            {
                ShipCoord B = Other.GetCell(b);
                if (A.X == B.X && A.Y == B.Y)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

// 정답 보드에 Ship 마커 찍기
void BattleShipManager::MarkOnBoard(BattleBoard& InBoard) const
{
    for (int i = 0; i < ShipCount; i++)
    {
        const BattleShip& Ship = Ships[i];
        for (int c = 0; c < Ship.GetLength(); c++)
        {
            ShipCoord Cell = Ship.GetCell(c);
            InBoard.SetBattle(Cell.X, Cell.Y, BattleType::Ship);
        }
    }
}

// 모든 배 격침 여부
bool BattleShipManager::AllSunk() const
{
    for (int i = 0; i < ShipCount; i++)
    {
        if (!Ships[i].GetIsSunk())
        {
            return false;
        }
    }
    return true;
}

// 사격 처리
ShotResult BattleShipManager::Shoot(BattleBoard& InBoard, int InX, int InY)
{
    // 1) 경계 검사
    if (!InBoardBounds(InBoard, InX, InY))
    {
        return ShotResult::InValid;
    }

    // 2) 이미 쏜 칸인지
    BattleType Curr = InBoard.GetBattle(InX, InY);
    if (Curr == BattleType::Hit || Curr == BattleType::Miss)
    {
        return ShotResult::Already;
    }

    // 3) 모든 배 검사 → 명중 여부
    for (int i = 0; i < ShipCount; i++)
    {
        BattleShip& Ship = Ships[i];
        int Index = Ship.FindShipIndex(InX, InY);

        if (Index >= 0)
        {
            InBoard.SetBattle(InX, InY, BattleType::Hit);

            bool SunkNow = Ship.HitShip(InX, InY);
            if (SunkNow)
            {
                return ShotResult::Sunk;
            }
            else
            {
                return ShotResult::Hit;
            }
        }
    }

    // 4) 명중 아님 → Miss
    InBoard.SetBattle(InX, InY, BattleType::Miss);
    return ShotResult::Miss;
}