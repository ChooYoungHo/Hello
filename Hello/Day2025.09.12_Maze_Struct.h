#pragma once
#include <string>

/*
9 / 12 심화문제
- 변경된 미로 탈출 게임에 기능 추가하기
1. 플레이어의 위치, HP를 저장하는 구조체 만들고 적용하기
2. 적의 HP, 공격력, 보상이 들어있는 구조체 만들고 적용하기
3. 적 생성시 HP와 공격력과 보상을 랜덤하게 설정하기
4. 이동시 확률로 HP 회복하던 것을 보상을 사용하여 회복하는 것으로 수정하기
*/


// 1. 플레이어의 위치, HP를 저장하는 구조체 만들고 적용하기
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

// 4. 이동시 확률로 HP 회복하던 것을 보상을 사용하여 회복하는 것으로 수정하기
struct Player
{
	int Health = 100;       
	int AttackPower;   
	int CriticalDamage;;
	int RecoveryHp = 70;

	Player(std::mt19937& engine)
	{
		// 공격력 (5 ~ 15)
		//std::uniform_int_distribution<int> DamageDist(5, 15);
		//AttackPower = DamageDist(engine);  

		// 크리티컬 (1 ~ 100)
		//std::uniform_int_distribution<int> PercentDist(1, 100);
		//CriticalDamage = PercentDist(engine);  

		//보상 금전 회복 (50 ~ 60)
		//std::uniform_int_distribution<int> RewardDist(50, 100);
		//Coin = RewardDist(engine);
	}
};



// 2. 적의 HP, 공격력, 보상이 들어있는 구조체 만들고 적용하기
// 3. 적 생성시 HP와 공격력과 보상을 랜덤하게 설정하기
struct Enemy
{
	int Health;     
	int AttackPower;
	int CriticalDamage;
	int Coin;  


	Enemy(std::mt19937& engine) 
	{
		// HP 랜덤 (70 ~ 150)
		std::uniform_int_distribution<int> HpDist(70, 100);
		Health = HpDist(engine);

		// 공격력 (5 ~ 15)
		//std::uniform_int_distribution<int> DamageDist(5, 15);
		//AttackPower = DamageDist(engine);

		// 크리티컬 데미지 (1 ~ 100)
		//std::uniform_int_distribution<int> PercentDist(1, 100);
		//CriticalDamage = PercentDist(engine);

		// 보상 금전 (50 ~ 60)
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
	

	Game()                          // 이니셜라이저(initializer list) 마지막에 , 안한다.
		: RandomEngine(Random()),
		  EnemyHpDist(70, 100),
		  DamageDist(5, 15),
		  PercentDist(1, 100),  
		  RewardDist(50, 100)
	{
	}
};


void RecoverWithReward();
