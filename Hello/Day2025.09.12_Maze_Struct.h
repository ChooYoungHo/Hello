#pragma once
#include <string>
#include <random>

/*
9 / 12 심화문제
- 변경된 미로 탈출 게임에 기능 추가하기
1. 플레이어의 위치, HP를 저장하는 구조체 만들고 적용하기
2. 적의 HP, 공격력, 보상이 들어있는 구조체 만들고 적용하기
3. 적 생성시 HP와 공격력과 보상을 랜덤하게 설정하기
4. 이동시 확률로 HP 회복하던 것을 보상을 사용하여 회복하는 것으로 수정하기
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
	std::uniform_int_distribution<int> PercentDist;  // 1 ~ 100 (크리티컬 판정용)
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

// ==== 플레이어 ====
// - HP 100 시작
// - 공격 데미지는 "매 턴" DamageDist로 결정
// - 크리티컬 확률 10% (PercentDist로 판정, 성공 시 2배)
// - 코인 회복 기능: 코인 50 차감 → HP +50 
// 플레이어
struct Player
{
	int Health = 100;    // 항상 100 시작
	int RecoveryHp = 100; // 코인 체력 회복량
	int Coin = 0;        // 적 처치 시 획득
};

// 적
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


