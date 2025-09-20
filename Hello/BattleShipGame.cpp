#include <iostream>
#include "BattleShipGame.h"

static constexpr int MaxShot = 50;

void BattleShipGame::BattleShipGameRun()
{
    BattleBoard Board;
    BattleShipManager Manager;

    Board.Clear();
    Manager.Clear();
    Manager.ShipRandomPlace(Board);

    int RemainShot = MaxShot;

    while (RemainShot > 0 && Manager.GetRemainingShips() > 0)
    {
        Board.PrintPlayer();

        int X, Y;
        printf("X Y: \n");
        printf("남은공격:%d 남은함선:%d\n", RemainShot, Manager.GetRemainingShips());
        std::cin >> X >> Y;

        ShotResult Result = Manager.Shoot(Board, X, Y);

        if (Result == ShotResult::OutBoard)
        {
            continue;
        }
        if (Result == ShotResult::Already)
        {
            continue;
        }
        if (Result == ShotResult::Sunk)
        {
            printf("격침!\n");
        }

        RemainShot--;
    }

    if (Manager.GetRemainingShips() == 0)
    {
        printf("승리\n");
    }
    else
    {
        printf("패배\n");
        Board.PrintShip();
    }
}
