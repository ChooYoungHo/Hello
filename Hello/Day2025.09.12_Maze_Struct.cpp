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