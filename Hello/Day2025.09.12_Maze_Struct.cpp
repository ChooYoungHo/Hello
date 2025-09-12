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


    /*
    std::random_device Random;
	std::mt19937 RandomEngine(Random());
	std::uniform_int_distribution<int> DamageDist(5, 15);
	std::uniform_int_distribution<int> PercentDist(1, 100); // Ȯ��
	*/

	enum EventType
	{
		Battle = 0,
		Heal = 1,
		EventNone = 2,
	};

	// �̵����� �� ����Ȯ��(20 %)�� ������ �߻��Ѵ�.
	// �̵����� �� ����Ȯ��(10 %)�� �÷��̾� HP�� ȸ���ȴ�.
	// �� �̺�Ʈ�� �ߺ����� �߻����� �ʴ´�.
	EventType GetMoveEvent(Game& game)
	{
		int RandomNumber = game.PercentDist(game.RandomEngine);
		if (RandomNumber <= 20) 
			return Battle;            // 20%
		else if (RandomNumber <= 30) 
			return Heal;              // ���� 10%
		else return EventNone;        // ������ 70%
	}

	void RunBattle(Game& game, Player& player, Enemy& enemy)  
	{
		while (player.Health > 0 && enemy.Health > 0)
		{  
			Game game;                           // ���⼭ RandomEngine + ������ ���õ�
			Player player(game.RandomEngine);    // �÷��̾� ����
			Enemy goblin(game.RandomEngine);     // �� ����

			int ChoiceReward = 0;                // ���� ����
			int Coin = 0;

			printf("�� ����! HP:%d | ATK:%d\n", goblin.Health, goblin.AttackPower);

			// �÷��̾� ��
			int PlayerDamage = game.DamageDist(game.RandomEngine);
			int PlayerCritDamage = game.PercentDist(game.RandomEngine);
			int PlayerCoin = game.RewardDist(game.RandomEngine);

			if (PlayerCritDamage <= 10)
			{
				PlayerDamage = PlayerDamage * 2;
				goblin.Health = goblin.Health - PlayerDamage;
				printf("�÷��̾� ũ��Ƽ�� ����!\n");
				printf("������ [%d]���ظ� �������ϴ�.\n", PlayerDamage);
				printf("�� ���� ü��: %d\n", goblin.Health);
			}
			else 
			{
				goblin.Health = goblin.Health - PlayerDamage;
				printf("�÷��̾� ����!\n");
			}
			if (goblin.Health <= 0)        // �� �׾�����
			{
				printf("������ %d ������ -> �� ü��: 0\n", PlayerDamage);
				printf("���� ó���Ͽ� ����(%d)�� ȹ���ϼ̽��ϴ�.\n", PlayerCoin);
				printf("������ ����Ͽ� HP�� ȸ�� �Ͻðڽ��ϱ�? (1. Yes, 2. No)\n");
				Coin = Coin + PlayerCoin;  // ����
				std::cin >> ChoiceReward;

				if (ChoiceReward == 1)
				{
					if (PlayerCoin >= 50)
					{
						printf("HP�� [%d] ȸ�� �Ǽ̽��ϴ�.\n", player.RecoveryHp);
					}
					else
					{
						printf("������ �����մϴ�.\n");
					}
				}
				else
				{
					printf("�״�� �����մϴ�.");
				}
				break;
			}
	
			//�� ��
			int EnemyDamage = game.DamageDist(game.RandomEngine);
			int EnemyCritDamage = game.PercentDist(game.RandomEngine);

			if (EnemyCritDamage <= 10)
			{
				EnemyDamage = EnemyDamage * 2;
				player.Health = player.Health - EnemyDamage;
				printf("�� ũ��Ƽ�� ����!\n");
				printf("%d ��ŭ ���ظ� �Ծ����ϴ�. ���� ü��: %d", EnemyDamage, player.Health);
			}
			else
			{
				player.Health = player.Health - EnemyDamage;
				printf("�� ����!");
				printf("%d ��ŭ ���ظ� �Ծ����ϴ�. ���� ü��: %d", player.Health);
			}
	        player.Health = player.Health - EnemyDamage;
			if (player.Health <= 0)
			{
				printf("�÷��̾�� %d ������ �� �÷��̾� HP: 0, ���!\n", EnemyDamage);
				break;
			}
			else
			{
				printf("�÷��̾�� %d ������ �� �÷��̾� HP: %d\n", EnemyDamage, player.Health);
			}
		}
		if (player.Health > 0)
		{
			printf("�÷��̾� �¸�!\n");

		}
		else if (enemy.Health > 0)
		{
			printf("�� �¸�!\n");
		}
	}

	int main()
	{
		const int MazeHeight = 10;
		const int MazeWidth = 20;

		// �̷� �迭 (0:��, 1:��, 2:����, 3:�ⱸ)
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

		// �÷��̾� ������ 

		int PlayerX = 0, PlayerY = 0;

		for (int y = 0; y < MazeHeight; y++)
		{
			for (int x = 0; x < MazeWidth; x++)
			{
				if (Maze[y][x] == 2)   // ���� ��ġ
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
			// �̷� ����
			for (int y = 0; y < MazeHeight; y++)
			{
				for (int x = 0; x < MazeWidth; x++)
				{
					if (x == PlayerX && y == PlayerY)
					{
						printf("P ");          // �÷��̾�
					}
					else if (Maze[y][x] == 0)  // ��
					{
						printf(". ");
					}
					else if (Maze[y][x] == 1)  // ��
					{
						printf("# ");
					}
					else if (Maze[y][x] == 2)  // ������
					{
						printf("S ");
					}
					else if (Maze[y][x] == 3)  // �ⱸ
					{
						printf("E ");
					}
				}
				printf("\n");
			}
			// �̵�
			char Input = 0;
			printf("�̵��� �� �ִ� ������ �����ϼ��� (w: ��, s: �Ʒ�, a: ����, d: ������): \n");
			printf("���� �Է�: ");
			std::cin >> Input;

			int PlayerNewX = PlayerX;  // �ٷ� PlayerX�� �ϸ� ���� ��� �ǵ����� �ڵ� �� �־�� ��.
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
			// �̵� �� Ȯ�� 0 �̸� ���� 1�̸� �Ȱ�
			if (PlayerNewX >= 0 && PlayerNewX < MazeWidth &&
				PlayerNewY >= 0 && PlayerNewY < MazeHeight)
			{
				if (Maze[PlayerNewY][PlayerNewX] != 1)   // ���� �ƴϸ� �̵�
				{
					PlayerX = PlayerNewX;
					PlayerY = PlayerNewY;
				}
				//�̺�Ʈ
				EventType Result = GetMoveEvent(game);
				int PlayerHp = 100;

				if (Result == Battle)
				{
					printf("���� �߻�!\n");
					RunBattle(game, player, enemy);    // ���� ����
					if (PlayerHp <= 0)
					{
						printf("���� ����!\n");
						break;
					}
				}
				else if (Result == Heal)
				{
					int RecoverHp = 30;                    // ���� ȸ��
					PlayerHp += RecoverHp;
					if (PlayerHp > 100)
						PlayerHp = 100;                  // �ִ�ġ ����
					printf("ü�� ȸ��! +%d �� ���� ü��: %d/100\n", RecoverHp, PlayerHp);
				}
				else
				{
					printf("�ƹ� �ϵ� ����!\n");
				}
			}
			// �ⱸ
			if (Maze[PlayerY][PlayerX] == 3)  // �Ƹ� �÷��̾� ��ġ�� ���Ƿ� ���ؼ� �׷���
			{
				printf("�����մϴ�! �ⱸ�� �����߽��ϴ�!\n");
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
		printf("�������� +%d ȸ��! ���� HP: %d\n", RecoveryHp, Health);
	}
	*/