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
        printf("��������:%d �����Լ�:%d\n", RemainShot, Manager.GetRemainingShips());
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
            printf("��ħ!\n");
        }

        RemainShot--;
    }

    if (Manager.GetRemainingShips() == 0)
    {
        printf("�¸�\n");
    }
    else
    {
        printf("�й�\n");
        Board.PrintShip();
    }
}
