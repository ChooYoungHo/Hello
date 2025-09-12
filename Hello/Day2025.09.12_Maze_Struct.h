#pragma once
#include <string>

/*
9 / 12 ��ȭ����
- ����� �̷� Ż�� ���ӿ� ��� �߰��ϱ�
1. �÷��̾��� ��ġ, HP�� �����ϴ� ����ü ����� �����ϱ�
2. ���� HP, ���ݷ�, ������ ����ִ� ����ü ����� �����ϱ�
3. �� ������ HP�� ���ݷ°� ������ �����ϰ� �����ϱ�
4. �̵��� Ȯ���� HP ȸ���ϴ� ���� ������ ����Ͽ� ȸ���ϴ� ������ �����ϱ�
*/


// 1. �÷��̾��� ��ġ, HP�� �����ϴ� ����ü ����� �����ϱ�
struct playerPosition
{
	int x = 0;
	int y = 0;
	int hp = 100;
	playerPosition(int PlayerX, int PlayerY, int PlayerHp)
	{
		x = PlayerX;
		y = PlayerY;
		hp = PlayerHp;
	}
};

// 4. �̵��� Ȯ���� HP ȸ���ϴ� ���� ������ ����Ͽ� ȸ���ϴ� ������ �����ϱ�
struct Player
{
	int Health = 100;       
	int AttackPower;   
	int CriticalDamage;;
	int RecoveryHp = 70;

	Player(std::mt19937& engine)
	{
		// ���ݷ� (5 ~ 15)
		//std::uniform_int_distribution<int> DamageDist(5, 15);
		//AttackPower = DamageDist(engine);  

		// ũ��Ƽ�� (1 ~ 100)
		//std::uniform_int_distribution<int> PercentDist(1, 100);
		//CriticalDamage = PercentDist(engine);  

		//���� ���� ȸ�� (50 ~ 60)
		//std::uniform_int_distribution<int> RewardDist(50, 100);
		//Coin = RewardDist(engine);
	}
};



// 2. ���� HP, ���ݷ�, ������ ����ִ� ����ü ����� �����ϱ�
// 3. �� ������ HP�� ���ݷ°� ������ �����ϰ� �����ϱ�
struct Enemy
{
	int Health;     
	int AttackPower;
	int CriticalDamage;
	int Coin;  


	Enemy(std::mt19937& engine) 
	{
		// HP ���� (70 ~ 150)
		std::uniform_int_distribution<int> HpDist(70, 100);
		Health = HpDist(engine);

		// ���ݷ� (5 ~ 15)
		//std::uniform_int_distribution<int> DamageDist(5, 15);
		//AttackPower = DamageDist(engine);

		// ũ��Ƽ�� ������ (1 ~ 100)
		//std::uniform_int_distribution<int> PercentDist(1, 100);
		//CriticalDamage = PercentDist(engine);

		// ���� ���� (50 ~ 60)
		//std::uniform_int_distribution<int> RewardDist(50, 100);
		//Coin = RewardDist(engine);
	}
};

struct Game
{
	std::random_device Random;
	std::mt19937 RandomEngine;
	std::uniform_int_distribution<int> DamageDist;
	std::uniform_int_distribution<int> PercentDist;
	std::uniform_int_distribution<int> RewardDist;
	std::uniform_int_distribution<int> EnemyHpDist;
	

	Game()                          // �̴ϼȶ�����(initializer list) �������� , ���Ѵ�.
		: RandomEngine(Random()),
		  EnemyHpDist(70, 100),
		  DamageDist(5, 15),
		  PercentDist(1, 100),  
		  RewardDist(50, 100)
	{
	}
};


void RecoverWithReward();
