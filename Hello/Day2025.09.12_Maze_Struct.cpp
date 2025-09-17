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
#include "MazeGame.h"     
#include "Player.h"    
#include "Monster.h"     
#include "MazeBattle.h"   



Maze::Maze()
{
	// 0:길, 1:벽, 2:시작, 3:출구
	const int Init[MazeHeight][MazeWidth] =
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

	for (int y = 0; y < MazeHeight; y++)
	{
		for (int x = 0; x < MazeWidth; x++)
		{
			Grid[y][x] = Init[y][x];
		}
	}
}

void Maze::MazePrint(int InPlayerX, int InPlayerY)
{
	for (int y = 0; y < MazeHeight; y++)
	{
		for (int x = 0; x < MazeWidth; x++)
		{
			if (x == InPlayerX && y == InPlayerY)
			{
				std::printf("P ");
			}
			else if (Grid[y][x] == static_cast<int>(CellType::Road))
			{
				std::printf(". ");
			}
			else if (Grid[y][x] == static_cast<int>(CellType::Wall))
			{
				std::printf("# ");
			}
			else if (Grid[y][x] == static_cast<int>(CellType::Start))
			{
				std::printf("S ");
			}
			else if (Grid[y][x] == static_cast<int>(CellType::Exit))
			{
				std::printf("E ");
			}
			else
			{
				std::printf("? ");
			}
		}
		std::printf("\n");
	}
}

PlayerPosition Maze::FindStart()
{
	for (int y = 0; y < MazeHeight; y++)
	{
		for (int x = 0; x < MazeWidth; x++)
		{
			if (Grid[y][x] == static_cast<int>(CellType::Start))
			{
				return PlayerPosition(x, y);
			}
		}
	}
	return PlayerPosition(0, 0);
}

bool Maze::InBounds(int InX, int InY)
{
	return (InX >= 0 && InX < MazeWidth && InY >= 0 && InY < MazeHeight);
}

bool Maze::IsWall(int InX, int InY)
{
	if (!InBounds(InX, InY)) 
	{
		return true;
	}
	return Grid[InY][InX] == static_cast<int>(CellType::Wall);
}

EventType Encounter::RollMoveEvent(Game& InGame)
{
	int RandomNumber = InGame.GetPercent(); // 1~100
	return (RandomNumber <= 20) ? EventType::Battle : EventType::None;
}

bool Encounter::RollCritical(Game& InGame)
{
	int RandomNumber = InGame.GetPercent(); // 1~100
	return (RandomNumber <= 10);
}

// ===== 전투 =====
static void GrantEnemyReward(Player& InPlayer, const Monster& InEnemy)
{
	InPlayer.AddCoin(InEnemy.GetRewardCoin());
	std::printf("코인 %d 획득! (보유 코인: %d)\n",
		InEnemy.GetRewardCoin(), InPlayer.GetCoin());
}

bool RunBattle(Game& InGame, Player& InPlayer)
{
	// 생성 시 랜덤 스탯/보상 확정
	Monster Enemy(InGame, "Monster");

	std::printf("\n=== 전투 시작 ===\n");
	std::printf("적 등장! HP:%d  ATK:%d  보상:%d\n",
		Enemy.GetHealth(), Enemy.GetAttackPower(), Enemy.GetRewardCoin());
	std::printf("플레이어 HP:%d\n\n", InPlayer.GetHealth());

	while (!InPlayer.IsDead() && !Enemy.IsDead())
	{
		// 플레이어 턴
		std::printf("[플레이어] ");
		InPlayer.MazeAttack(&Enemy, InGame);
		if (Enemy.IsDead()) break;

		// 적 턴
		std::printf("[적] ");
		Enemy.MazeAttack(&InPlayer, InGame);
	}

	if (InPlayer.IsDead())
	{
		std::printf("\n플레이어가 쓰러졌습니다... 패배!\n");
		return false;
	}

	std::printf("\n적 처치! 승리!\n");
	GrantEnemyReward(InPlayer, Enemy);

	std::printf("보상을 사용하여 HP를 회복하시겠습니까? (1: Yes, 2: No): ");
	int Choice = 0;
	std::cin >> Choice;

	if (Choice == 1)
	{
		InPlayer.RecoverWithCoin(50, 50);
	}
	else
	{
		std::printf("회복 미사용 (HP:%d, 코인:%d)\n", InPlayer.GetHealth(), InPlayer.GetCoin());
	}

	std::printf("=== 전투 종료 ===\n\n");
	return true;
}

// 실행
void MazeEscapeRun()
{
	Maze Map;
	Game GameState;

	PlayerPosition Start = Map.FindStart();
	Player PlayerState("Player", Start.X, Start.Y);

	while (true)
	{
		Map.MazePrint(PlayerState.GetX(), PlayerState.GetY());

		char Input = 0;
		std::printf("이동 (w/a/s/d): ");
		std::cin >> Input;

		int Dx = 0;
		int Dy = 0;

		if (Input == 'w' || Input == 'W') Dy = -1;
		else if (Input == 's' || Input == 'S') Dy = 1;
		else if (Input == 'a' || Input == 'A') Dx = -1;
		else if (Input == 'd' || Input == 'D') Dx = 1;

		int NewX = PlayerState.GetX() + Dx;
		int NewY = PlayerState.GetY() + Dy;

		if (Map.InBounds(NewX, NewY))
		{
			if (!Map.IsWall(NewX, NewY))
			{
				PlayerState.Move(Dx, Dy);
			}
			else
			{
				std::printf("벽입니다. 이동 불가.\n");
			}
		}

		EventType Event = Encounter::RollMoveEvent(GameState);
		if (Event == EventType::Battle)
		{
			std::printf("전투 발생!\n");
			bool Alive = RunBattle(GameState, PlayerState);
			if (!Alive)
			{
				std::printf("게임 오버!\n");
				break;
			}
		}
		else
		{
			std::printf("아무 일도 없음\n");
		}

		if (PlayerState.GetX() == 18 && PlayerState.GetY() == 7)
		{
			std::printf("축하합니다! 출구에 도착했습니다!\n");
			break;
		}
	}
}












/*
const int MazeHeight = 10;
const int MazeWidth = 20;

// 이동 후 이벤트: 20% 전투, 나머지 없음
EventType GetMoveEvent(Game& GameState)
{
	int RandomNumber = GameState.PercentDist(GameState.RandomEngine);

	if (RandomNumber <= 20)
	{
		return Battle;
	}
	else
	{
		return EventNone;
	}
}

// 10% 고정 크리티컬 (매 공격마다 PercentDist로 판정)
bool IsCriticalHit(Game& GameState)
{
	int RandomNumber = GameState.PercentDist(GameState.RandomEngine);

	if (RandomNumber <= 10)
	{
		return true;
	}
	else
	{
		return false;
	}
}

// 적 처치, 플레이어 코인 누적
void GrantEnemyReward(Player& PlayerState, const Enemy& EnemyUnit)
{
	PlayerState.Coin += EnemyUnit.RewardCoin;
	printf("코인 %d 획득! (보유 코인: %d)\n", EnemyUnit.RewardCoin, PlayerState.Coin);
}

// 코인 50 소모 체력 회복
void RecoverWithReward(Player& PlayerState)
{
	if (PlayerState.Coin < 50)
	{
		printf("코인이 부족합니다. (보유: %d)\n", PlayerState.Coin);
		return;
	}

	PlayerState.Coin -= 50;
	PlayerState.Health += PlayerState.RecoveryHp;

	if (PlayerState.Health > 100)
	{
		PlayerState.Health = 100;
	}

	printf("보상 사용! 체력 회복! 현재 체력: %d (코인 -50, 보유: %d)\n", PlayerState.Health, PlayerState.Coin);
}

// 유틸: 미로 출력
void PrintMaze(const int Maze[MazeHeight][MazeWidth], int PlayerX, int PlayerY)
{
	for (int Y = 0; Y < MazeHeight; ++Y)
	{
		for (int X = 0; X < MazeWidth; ++X)
		{
			if (X == PlayerX && Y == PlayerY)
			{
				printf("P ");
			}
			else if (Maze[Y][X] == 0)
			{
				printf(". ");
			}
			else if (Maze[Y][X] == 1)
			{
				printf("# ");
			}
			else if (Maze[Y][X] == 2)
			{
				printf("S ");
			}
			else if (Maze[Y][X] == 3)
			{
				printf("E ");
			}
			else
			{
				// 절대 들어오면 안되는 곳 == 맵 데이터가 잘못된 것
			}
		}
		printf("\n");
	}
}

// 시작 위치 찾기
PlayerPosition FindStartPosition(const int Maze[MazeHeight][MazeWidth])
{
	for (int y = 0; y < MazeHeight; y++)
	{
		for (int x = 0; x < MazeWidth; x++)
		{
			if (Maze[y][x] == 2)
			{
				return PlayerPosition(x, y);
			}
		}
	}
	return PlayerPosition(0, 0);
}

bool RunBattle(Game& GameState, Player& PlayerState)
{
	Enemy EnemyUnit(GameState);   // 체력/공격력/보상: 생성 시 1회 롤링 → 고정

	printf("\n=== 전투 시작 ===\n");
	printf("적 등장! HP:%d  ATK:%d)\n", EnemyUnit.Health, EnemyUnit.AttackPower);
	printf("플레이어 HP:%d\n\n", PlayerState.Health);

	while (PlayerState.Health > 0 && EnemyUnit.Health > 0)
	{
		// 플레이어 턴 
		int PlayerDamage = GameState.DamageDist(GameState.RandomEngine);

		if (IsCriticalHit(GameState))
		{
			PlayerDamage = PlayerDamage * 2;
			printf("[플레이어] 크리티컬! ");
		}
		else
		{
			printf("[플레이어] 공격! ");
		}

		EnemyUnit.Health -= PlayerDamage;

		if (EnemyUnit.Health < 0)
		{
			EnemyUnit.Health = 0;
		}

		printf("%d 데미지 → 적 HP:%d\n", PlayerDamage, EnemyUnit.Health);

		if (EnemyUnit.Health <= 0)
		{
			break;
		}

	    // 적 턴 
		int EnemyDamage = EnemyUnit.AttackPower;

		if (IsCriticalHit(GameState))
		{
			EnemyDamage = EnemyDamage * 2;
			printf("[적] 크리티컬! ");
		}
		else
		{
			printf("[적] 공격! ");
		}

		PlayerState.Health -= EnemyDamage;

		if (PlayerState.Health < 0)
		{
			PlayerState.Health = 0;
		}

		printf("%d 데미지 → 플레이어 HP:%d\n", EnemyDamage, PlayerState.Health);
	}

	if (PlayerState.Health <= 0)
	{
		printf("\n플레이어가 쓰러졌습니다... 패배!\n");
		return false;
	}

	printf("\n적 처치! 승리!\n");
	GrantEnemyReward(PlayerState, EnemyUnit);

	printf("보상을 사용하여 HP를 회복하시겠습니까? (1: Yes, 2: No): ");
	int Choice = 0;
	std::cin >> Choice;

	if (Choice == 1)
	{
		RecoverWithReward(PlayerState);
	}
	else
	{
		printf("회복 미사용 (HP:%d, 코인:%d)\n", PlayerState.Health, PlayerState.Coin);
	}

	printf("=== 전투 종료 ===\n\n");
	return true;
}


void MazeEscapeRun()
{
	// 미로 (0:길, 1:벽, 2:시작, 3:출구)
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

	Game GameState;       // 난수 엔진 + 분포
	Player PlayerState;   // HP=100, Coin=0

	PlayerPosition Player = FindStartPosition(Maze);


	while (true)
	{
		PrintMaze(Maze, Player.X, Player.Y);

		// 이동 입력
		char Input = 0;
		printf("이동 (w/a/s/d): ");
		std::cin >> Input;

		// 이동 후보
		int PlayerNewX = Player.X;
		int PlayerNewY = Player.Y;

		if (Input == 'w' || Input == 'W')
		{
			PlayerNewY--;
		}
		else if (Input == 's' || Input == 'S')
		{
			PlayerNewY++;
		}
		else if (Input == 'a' || Input == 'A')
		{
			PlayerNewX--;
		}
		else if (Input == 'd' || Input == 'D')
		{
			PlayerNewX++;
		}

		// 벽 체크 후 이동
		if (PlayerNewX >= 0 && PlayerNewX < MazeWidth &&
			PlayerNewY >= 0 && PlayerNewY < MazeHeight)
		{
			if (Maze[PlayerNewY][PlayerNewX] != 1)
			{
				Player.X = PlayerNewX;
				Player.Y = PlayerNewY;
			}
			else
			{
				printf("벽입니다. 이동 불가.\n");
			}
		}

		// 이동 후 이벤트
		EventType EventResult = GetMoveEvent(GameState);

		if (EventResult == Battle)
		{
			printf("전투 발생!\n");

			bool IsAlive = RunBattle(GameState, PlayerState);

			if (!IsAlive)
			{
				printf("게임 오버!\n");
				break;
			}
		}
		else
		{
			printf("아무 일도 없음\n");
		}

		// 출구 도착
		if (Maze[Player.Y][Player.X] == 3)
		{
			printf("축하합니다! 출구에 도착했습니다!\n");
			break;
		}
	}
}
*/