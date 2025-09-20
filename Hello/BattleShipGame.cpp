#include <iostream>          
#include "BattleBoard.h"
#include "BattleShip.h"
#include "BattleShipManager.h"
#include "BattleShipGame.h"

static void PlaceDefaultFleet(BattleShipManager& InManager, const BattleBoard& InBoard)
{
    // ���� {5,4,3,3,2} ����, ��ġ�� �ʰ� ���� ��ġ
    // �ε��� 0 (���� 5): (1,1) ����
    InManager.PlaceLine(0, 1, 1, true, InBoard);
    // �ε��� 1 (���� 4): (6,0) ����
    InManager.PlaceLine(1, 6, 0, false, InBoard);
    // �ε��� 2 (���� 3): (3,5) ����
    InManager.PlaceLine(2, 3, 5, true, InBoard);
    // �ε��� 3 (���� 3): (8,6) ����
    InManager.PlaceLine(3, 8, 6, false, InBoard);
    // �ε��� 4 (���� 2): (0,9) ����
    InManager.PlaceLine(4, 0, 9, true, InBoard);
}

static void PrintShotFeedback(ShotResult InResult)
{
    switch (InResult)
    {
    case ShotResult::InValid:
        printf("���� ���Դϴ�.\n");
        break;
    case ShotResult::Already:
        printf("�̹� �� ĭ�Դϴ�.\n");
        break;
    case ShotResult::Miss:
        printf("������(O)!\n");
        break;
    case ShotResult::Hit:
        printf("����(X)!\n");
        break;
    case ShotResult::Sunk:
        printf("��ħ!!!\n");
        break;
    default:
        printf("�� �� ���� ���.\n");
        break;
    }
}


void RunBattleShipGame()
{
    BattleBoard Board;
    BattleShipManager Manager;

    Board.Clear();
    Manager.Clear();

    PlaceDefaultFleet(Manager, Board);

    while (!Manager.AllSunk())
    {
        Board.PrintPlayer();

        int X = -1;
        int Y = -1;

        printf("\n��ǥ�� �Է��ϼ��� (X Y): ");
        if (!(std::cin >> X >> Y))
        {
            std::cin.clear();
            std::cin.ignore(1024, '\n');
            printf("�߸��� �Է��Դϴ�. ��) 3 5\n\n");
            continue;
        }

        ShotResult Result = Manager.Shoot(Board, X, Y);
        PrintShotFeedback(Result);
        printf("\n");
    }

    printf("��� �Լ��� ��ħ�߽��ϴ�! ���� ���� �����մϴ�.\n\n");
    Board.PrintShip();
}




