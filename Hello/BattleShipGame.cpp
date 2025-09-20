#include <iostream>          
#include "BattleBoard.h"
#include "BattleShip.h"
#include "BattleShipManager.h"
#include "BattleShipGame.h"

static void PlaceDefaultFleet(BattleShipManager& InManager, const BattleBoard& InBoard)
{
    // 길이 {5,4,3,3,2} 가정, 겹치지 않게 수동 배치
    // 인덱스 0 (길이 5): (1,1) 가로
    InManager.PlaceLine(0, 1, 1, true, InBoard);
    // 인덱스 1 (길이 4): (6,0) 세로
    InManager.PlaceLine(1, 6, 0, false, InBoard);
    // 인덱스 2 (길이 3): (3,5) 가로
    InManager.PlaceLine(2, 3, 5, true, InBoard);
    // 인덱스 3 (길이 3): (8,6) 세로
    InManager.PlaceLine(3, 8, 6, false, InBoard);
    // 인덱스 4 (길이 2): (0,9) 가로
    InManager.PlaceLine(4, 0, 9, true, InBoard);
}

static void PrintShotFeedback(ShotResult InResult)
{
    switch (InResult)
    {
    case ShotResult::InValid:
        printf("범위 밖입니다.\n");
        break;
    case ShotResult::Already:
        printf("이미 쏜 칸입니다.\n");
        break;
    case ShotResult::Miss:
        printf("빗나감(O)!\n");
        break;
    case ShotResult::Hit:
        printf("명중(X)!\n");
        break;
    case ShotResult::Sunk:
        printf("격침!!!\n");
        break;
    default:
        printf("알 수 없는 결과.\n");
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

        printf("\n좌표를 입력하세요 (X Y): ");
        if (!(std::cin >> X >> Y))
        {
            std::cin.clear();
            std::cin.ignore(1024, '\n');
            printf("잘못된 입력입니다. 예) 3 5\n\n");
            continue;
        }

        ShotResult Result = Manager.Shoot(Board, X, Y);
        PrintShotFeedback(Result);
        printf("\n");
    }

    printf("모든 함선을 격침했습니다! 정답 맵을 공개합니다.\n\n");
    Board.PrintShip();
}




