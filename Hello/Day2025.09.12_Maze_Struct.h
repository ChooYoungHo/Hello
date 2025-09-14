#pragma once
#include <string>
#include <random>

/*
9 / 12 ��ȭ����
- ����� �̷� Ż�� ���ӿ� ��� �߰��ϱ�
1. �÷��̾��� ��ġ, HP�� �����ϴ� ����ü ����� �����ϱ�
2. ���� HP, ���ݷ�, ������ ����ִ� ����ü ����� �����ϱ�
3. �� ������ HP�� ���ݷ°� ������ �����ϰ� �����ϱ�
4. �̵��� Ȯ���� HP ȸ���ϴ� ���� ������ ����Ͽ� ȸ���ϴ� ������ �����ϱ�
*/


enum EventType 
{
	Battle = 0, 
	EventNone = 1 
};


struct PlayerPosition
{
	int X;
	int Y;

	PlayerPosition(int PlayerX, int PlayerY)
		: X(PlayerX), Y(PlayerY)
	{
	}
};

struct Game
{
	std::random_device Random;
	std::mt19937 RandomEngine;

	std::uniform_int_distribution<int> DamageDist;   // 5 ~ 15
	std::uniform_int_distribution<int> PercentDist;  // 1 ~ 100 (ũ��Ƽ�� ������)
	std::uniform_int_distribution<int> RewardDist;   // 50 ~ 100
	std::uniform_int_distribution<int> EnemyHpDist;  // 70 ~ 100

	Game()
		: RandomEngine(Random()),
		DamageDist(5, 15),
		PercentDist(1, 100),
		RewardDist(50, 100),
		EnemyHpDist(70, 100)
	{
	}
};

// ==== �÷��̾� ====
// - HP 100 ����
// - ���� �������� "�� ��" DamageDist�� ����
// - ũ��Ƽ�� Ȯ�� 10% (PercentDist�� ����, ���� �� 2��)
// - ���� ȸ�� ���: ���� 50 ���� �� HP +50 
// �÷��̾�
struct Player
{
	int Health = 100;    // �׻� 100 ����
	int RecoveryHp = 100; // ���� ü�� ȸ����
	int Coin = 0;        // �� óġ �� ȹ��
};

// ��
struct Enemy
{
	int Health;       // 70 ~ 100
	int AttackPower;  // 5 ~ 15
	int RewardCoin;   // 50 ~ 100

	Enemy(Game& game)
	{
		Health = game.EnemyHpDist(game.RandomEngine);
		AttackPower = game.DamageDist(game.RandomEngine);
		RewardCoin = game.RewardDist(game.RandomEngine);
	}
};




bool IsCriticalHit(Game& game);                
void GrantEnemyReward(Player& player, const Enemy& enemy);
void RecoverWithReward(Player& player);
void MazeEscapeRun();


