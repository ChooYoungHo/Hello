#define _CRT_SECURE_NO_WARNINGS //scanf ó��
#define _CRTDBG_MAP_ALLOC
#define new new(_NORMAL_BLOCK, __FILE__, __LINE__) // �޸� �Ҵ��ߴµ� delete �˷��ִ�
#include <crtdbg.h>
#include <iostream>   // ����� ����
#include <stdio.h>
#include <cstdio>     // stdio.h�� ���ӽ����̽� �߰��� ���� 
#include <time.h>     // �ð� ��
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
	// 0:��, 1:��, 2:����, 3:�ⱸ
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

// ===== ���� =====
static void GrantEnemyReward(Player& InPlayer, const Monster& InEnemy)
{
	InPlayer.AddCoin(InEnemy.GetRewardCoin());
	std::printf("���� %d ȹ��! (���� ����: %d)\n",
		InEnemy.GetRewardCoin(), InPlayer.GetCoin());
}

bool RunBattle(Game& InGame, Player& InPlayer)
{
	// ���� �� ���� ����/���� Ȯ��
	Monster Enemy(InGame, "Monster");

	std::printf("\n=== ���� ���� ===\n");
	std::printf("�� ����! HP:%d  ATK:%d  ����:%d\n",
		Enemy.GetHealth(), Enemy.GetAttackPower(), Enemy.GetRewardCoin());
	std::printf("�÷��̾� HP:%d\n\n", InPlayer.GetHealth());

	while (!InPlayer.IsDead() && !Enemy.IsDead())
	{
		// �÷��̾� ��
		std::printf("[�÷��̾�] ");
		InPlayer.MazeAttack(&Enemy, InGame);
		if (Enemy.IsDead()) break;

		// �� ��
		std::printf("[��] ");
		Enemy.MazeAttack(&InPlayer, InGame);
	}

	if (InPlayer.IsDead())
	{
		std::printf("\n�÷��̾ ���������ϴ�... �й�!\n");
		return false;
	}

	std::printf("\n�� óġ! �¸�!\n");
	GrantEnemyReward(InPlayer, Enemy);

	std::printf("������ ����Ͽ� HP�� ȸ���Ͻðڽ��ϱ�? (1: Yes, 2: No): ");
	int Choice = 0;
	std::cin >> Choice;

	if (Choice == 1)
	{
		InPlayer.RecoverWithCoin(50, 50);
	}
	else
	{
		std::printf("ȸ�� �̻�� (HP:%d, ����:%d)\n", InPlayer.GetHealth(), InPlayer.GetCoin());
	}

	std::printf("=== ���� ���� ===\n\n");
	return true;
}

// ����
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
		std::printf("�̵� (w/a/s/d): ");
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
				std::printf("���Դϴ�. �̵� �Ұ�.\n");
			}
		}

		EventType Event = Encounter::RollMoveEvent(GameState);
		if (Event == EventType::Battle)
		{
			std::printf("���� �߻�!\n");
			bool Alive = RunBattle(GameState, PlayerState);
			if (!Alive)
			{
				std::printf("���� ����!\n");
				break;
			}
		}
		else
		{
			std::printf("�ƹ� �ϵ� ����\n");
		}

		if (PlayerState.GetX() == 18 && PlayerState.GetY() == 7)
		{
			std::printf("�����մϴ�! �ⱸ�� �����߽��ϴ�!\n");
			break;
		}
	}
}












/*
const int MazeHeight = 10;
const int MazeWidth = 20;

// �̵� �� �̺�Ʈ: 20% ����, ������ ����
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

// 10% ���� ũ��Ƽ�� (�� ���ݸ��� PercentDist�� ����)
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

// �� óġ, �÷��̾� ���� ����
void GrantEnemyReward(Player& PlayerState, const Enemy& EnemyUnit)
{
	PlayerState.Coin += EnemyUnit.RewardCoin;
	printf("���� %d ȹ��! (���� ����: %d)\n", EnemyUnit.RewardCoin, PlayerState.Coin);
}

// ���� 50 �Ҹ� ü�� ȸ��
void RecoverWithReward(Player& PlayerState)
{
	if (PlayerState.Coin < 50)
	{
		printf("������ �����մϴ�. (����: %d)\n", PlayerState.Coin);
		return;
	}

	PlayerState.Coin -= 50;
	PlayerState.Health += PlayerState.RecoveryHp;

	if (PlayerState.Health > 100)
	{
		PlayerState.Health = 100;
	}

	printf("���� ���! ü�� ȸ��! ���� ü��: %d (���� -50, ����: %d)\n", PlayerState.Health, PlayerState.Coin);
}

// ��ƿ: �̷� ���
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
				// ���� ������ �ȵǴ� �� == �� �����Ͱ� �߸��� ��
			}
		}
		printf("\n");
	}
}

// ���� ��ġ ã��
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
	Enemy EnemyUnit(GameState);   // ü��/���ݷ�/����: ���� �� 1ȸ �Ѹ� �� ����

	printf("\n=== ���� ���� ===\n");
	printf("�� ����! HP:%d  ATK:%d)\n", EnemyUnit.Health, EnemyUnit.AttackPower);
	printf("�÷��̾� HP:%d\n\n", PlayerState.Health);

	while (PlayerState.Health > 0 && EnemyUnit.Health > 0)
	{
		// �÷��̾� �� 
		int PlayerDamage = GameState.DamageDist(GameState.RandomEngine);

		if (IsCriticalHit(GameState))
		{
			PlayerDamage = PlayerDamage * 2;
			printf("[�÷��̾�] ũ��Ƽ��! ");
		}
		else
		{
			printf("[�÷��̾�] ����! ");
		}

		EnemyUnit.Health -= PlayerDamage;

		if (EnemyUnit.Health < 0)
		{
			EnemyUnit.Health = 0;
		}

		printf("%d ������ �� �� HP:%d\n", PlayerDamage, EnemyUnit.Health);

		if (EnemyUnit.Health <= 0)
		{
			break;
		}

	    // �� �� 
		int EnemyDamage = EnemyUnit.AttackPower;

		if (IsCriticalHit(GameState))
		{
			EnemyDamage = EnemyDamage * 2;
			printf("[��] ũ��Ƽ��! ");
		}
		else
		{
			printf("[��] ����! ");
		}

		PlayerState.Health -= EnemyDamage;

		if (PlayerState.Health < 0)
		{
			PlayerState.Health = 0;
		}

		printf("%d ������ �� �÷��̾� HP:%d\n", EnemyDamage, PlayerState.Health);
	}

	if (PlayerState.Health <= 0)
	{
		printf("\n�÷��̾ ���������ϴ�... �й�!\n");
		return false;
	}

	printf("\n�� óġ! �¸�!\n");
	GrantEnemyReward(PlayerState, EnemyUnit);

	printf("������ ����Ͽ� HP�� ȸ���Ͻðڽ��ϱ�? (1: Yes, 2: No): ");
	int Choice = 0;
	std::cin >> Choice;

	if (Choice == 1)
	{
		RecoverWithReward(PlayerState);
	}
	else
	{
		printf("ȸ�� �̻�� (HP:%d, ����:%d)\n", PlayerState.Health, PlayerState.Coin);
	}

	printf("=== ���� ���� ===\n\n");
	return true;
}


void MazeEscapeRun()
{
	// �̷� (0:��, 1:��, 2:����, 3:�ⱸ)
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

	Game GameState;       // ���� ���� + ����
	Player PlayerState;   // HP=100, Coin=0

	PlayerPosition Player = FindStartPosition(Maze);


	while (true)
	{
		PrintMaze(Maze, Player.X, Player.Y);

		// �̵� �Է�
		char Input = 0;
		printf("�̵� (w/a/s/d): ");
		std::cin >> Input;

		// �̵� �ĺ�
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

		// �� üũ �� �̵�
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
				printf("���Դϴ�. �̵� �Ұ�.\n");
			}
		}

		// �̵� �� �̺�Ʈ
		EventType EventResult = GetMoveEvent(GameState);

		if (EventResult == Battle)
		{
			printf("���� �߻�!\n");

			bool IsAlive = RunBattle(GameState, PlayerState);

			if (!IsAlive)
			{
				printf("���� ����!\n");
				break;
			}
		}
		else
		{
			printf("�ƹ� �ϵ� ����\n");
		}

		// �ⱸ ����
		if (Maze[Player.Y][Player.X] == 3)
		{
			printf("�����մϴ�! �ⱸ�� �����߽��ϴ�!\n");
			break;
		}
	}
}
*/