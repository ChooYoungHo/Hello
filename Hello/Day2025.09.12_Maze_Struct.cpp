#define _CRT_SECURE_NO_WARNINGS //scanf 처리
#define _CRTDBG_MAP_ALLOC
#define new new(_NORMAL_BLOCK, __FILE__, __LINE__) // 메모리 할당했는데 delete 알려주는
#include <crtdbg.h>
#include <iostream>   // 입출력 관련
#include <stdio.h>
#include <cstdio>     // stdio.h에 네임스페이스 추가한 래퍼 
#include <time.h>     // 시간 값
#include <random>
#include <limits.h>
#include <direct.h>
#include <fstream>
#include <string>
#include "Day2025.09.12_Maze_Struct.h"


    /*
    std::random_device Random;
	std::mt19937 RandomEngine(Random());
	std::uniform_int_distribution<int> DamageDist(5, 15);
	std::uniform_int_distribution<int> PercentDist(1, 100); // 확률
	*/

	enum EventType
	{
		Battle = 0,
		Heal = 1,
		EventNone = 2,
	};

	// 이동했을 때 일정확률(20 %)로 전투가 발생한다.
	// 이동했을 때 일정확률(10 %)로 플레이어 HP가 회복된다.
	// 두 이벤트는 중복으로 발생하지 않는다.
	EventType GetMoveEvent(Game& game)
	{
		int RandomNumber = game.PercentDist(game.RandomEngine);
		if (RandomNumber <= 20) 
			return Battle;            // 20%
		else if (RandomNumber <= 30) 
			return Heal;              // 다음 10%
		else return EventNone;        // 나머지 70%
	}

	void RunBattle(Game& game, Player& player, Enemy& enemy)  
	{
		while (player.Health > 0 && enemy.Health > 0)
		{  
			Game game;                           // 여기서 RandomEngine + 분포기 세팅됨
			Player player(game.RandomEngine);    // 플레이어 생성
			Enemy goblin(game.RandomEngine);     // 적 생성

			int ChoiceReward = 0;                // 보상 선택
			int Coin = 0;

			printf("적 등장! HP:%d | ATK:%d\n", goblin.Health, goblin.AttackPower);

			// 플레이어 턴
			int PlayerDamage = game.DamageDist(game.RandomEngine);
			int PlayerCritDamage = game.PercentDist(game.RandomEngine);
			int PlayerCoin = game.RewardDist(game.RandomEngine);

			if (PlayerCritDamage <= 10)
			{
				PlayerDamage = PlayerDamage * 2;
				goblin.Health = goblin.Health - PlayerDamage;
				printf("플레이어 크리티컬 공격!\n");
				printf("적에게 [%d]피해를 입혔습니다.\n", PlayerDamage);
				printf("적 현재 체력: %d\n", goblin.Health);
			}
			else 
			{
				goblin.Health = goblin.Health - PlayerDamage;
				printf("플레이어 공격!\n");
			}
			if (goblin.Health <= 0)        // 적 죽었을때
			{
				printf("적에게 %d 데미지 -> 적 체력: 0\n", PlayerDamage);
				printf("적을 처지하여 코인(%d)을 획득하셨습니다.\n", PlayerCoin);
				printf("보상을 사용하여 HP를 회복 하시겠습니까? (1. Yes, 2. No)\n");
				Coin = Coin + PlayerCoin;  // 코인
				std::cin >> ChoiceReward;

				if (ChoiceReward == 1)
				{
					if (PlayerCoin >= 50)
					{
						printf("HP가 [%d] 회복 되셨습니다.\n", player.RecoveryHp);
					}
					else
					{
						printf("코인이 부족합니다.\n");
					}
				}
				else
				{
					printf("그대로 진행합니다.");
				}
				break;
			}
	
			//적 턴
			int EnemyDamage = game.DamageDist(game.RandomEngine);
			int EnemyCritDamage = game.PercentDist(game.RandomEngine);

			if (EnemyCritDamage <= 10)
			{
				EnemyDamage = EnemyDamage * 2;
				player.Health = player.Health - EnemyDamage;
				printf("적 크리티컬 공격!\n");
				printf("%d 만큼 피해를 입었습니다. 현재 체력: %d", EnemyDamage, player.Health);
			}
			else
			{
				player.Health = player.Health - EnemyDamage;
				printf("적 공격!");
				printf("%d 만큼 피해를 입었습니다. 현재 체력: %d", player.Health);
			}
	        player.Health = player.Health - EnemyDamage;
			if (player.Health <= 0)
			{
				printf("플레이어에게 %d 데미지 → 플레이어 HP: 0, 사망!\n", EnemyDamage);
				break;
			}
			else
			{
				printf("플레이어에게 %d 데미지 → 플레이어 HP: %d\n", EnemyDamage, player.Health);
			}
		}
		if (player.Health > 0)
		{
			printf("플레이어 승리!\n");

		}
		else if (enemy.Health > 0)
		{
			printf("적 승리!\n");
		}
	}

	int main()
	{
		const int MazeHeight = 10;
		const int MazeWidth = 20;

		// 미로 배열 (0:길, 1:벽, 2:시작, 3:출구)
		int Maze[MazeHeight][MazeWidth] =
		{
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
			{1,2,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,1,0,1},
			{1,1,1,1,0,1,0,1,1,0,1,0,1,1,0,1,0,1,0,1},
			{1,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1},
			{1,0,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1},
			{1,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1},
			{1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1},
			{1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,3,1},
			{1,0,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1},
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
		};

		// 플레이어 시작점 

		int PlayerX = 0, PlayerY = 0;

		for (int y = 0; y < MazeHeight; y++)
		{
			for (int x = 0; x < MazeWidth; x++)
			{
				if (Maze[y][x] == 2)   // 시작 위치
				{
					PlayerX = x;
					PlayerY = y;
					break;
				}
			}
		}

		Game game;
		Player player(game.RandomEngine);
	
		player.AttackPower = game.DamageDist(game.RandomEngine);
		player.CriticalDamage = game.PercentDist(game.RandomEngine);


		while (true)
		{
			// 미로 변신
			for (int y = 0; y < MazeHeight; y++)
			{
				for (int x = 0; x < MazeWidth; x++)
				{
					if (x == PlayerX && y == PlayerY)
					{
						printf("P ");          // 플레이어
					}
					else if (Maze[y][x] == 0)  // 길
					{
						printf(". ");
					}
					else if (Maze[y][x] == 1)  // 벽
					{
						printf("# ");
					}
					else if (Maze[y][x] == 2)  // 시작점
					{
						printf("S ");
					}
					else if (Maze[y][x] == 3)  // 출구
					{
						printf("E ");
					}
				}
				printf("\n");
			}
			// 이동
			char Input = 0;
			printf("이동할 수 있는 방향을 선택하세요 (w: 위, s: 아래, a: 왼쪽, d: 오른쪽): \n");
			printf("방향 입력: ");
			std::cin >> Input;

			int PlayerNewX = PlayerX;  // 바로 PlayerX로 하면 벽에 끼어서 되돌리는 코드 또 넣어야 됨.
			int PlayerNewY = PlayerY;
			if
				(Input == 'w' || Input == 'W')
				PlayerNewY--;
			else if
				(Input == 's' || Input == 'S')
				PlayerNewY++;
			else if
				(Input == 'a' || Input == 'A')
				PlayerNewX--;
			else if
				(Input == 'd' || Input == 'D')
				PlayerNewX++;
			// 이동 벽 확인 0 이면 가고 1이면 안감
			if (PlayerNewX >= 0 && PlayerNewX < MazeWidth &&
				PlayerNewY >= 0 && PlayerNewY < MazeHeight)
			{
				if (Maze[PlayerNewY][PlayerNewX] != 1)   // 벽이 아니면 이동
				{
					PlayerX = PlayerNewX;
					PlayerY = PlayerNewY;
				}
				//이벤트
				EventType Result = GetMoveEvent(game);
				int PlayerHp = 100;

				if (Result == Battle)
				{
					printf("전투 발생!\n");
					RunBattle(game, player, enemy);    // 전투 시작
					if (PlayerHp <= 0)
					{
						printf("게임 오버!\n");
						break;
					}
				}
				else if (Result == Heal)
				{
					int RecoverHp = 30;                    // 고정 회복
					PlayerHp += RecoverHp;
					if (PlayerHp > 100)
						PlayerHp = 100;                  // 최대치 보정
					printf("체력 회복! +%d → 현재 체력: %d/100\n", RecoverHp, PlayerHp);
				}
				else
				{
					printf("아무 일도 없음!\n");
				}
			}
			// 출구
			if (Maze[PlayerY][PlayerX] == 3)  // 아마 플레이어 위치를 임의로 정해서 그런듯
			{
				printf("축하합니다! 출구에 도착했습니다!\n");
				break;
			}
		}
		return 0;
	}


	/*
	void RecoverWithReward()
	{
		Health += RecoveryHp;
		if (Health > 100) Health = 100;
		printf("보상으로 +%d 회복! 현재 HP: %d\n", RecoveryHp, Health);
	}
	*/