#pragma once
#include <string>
#include <random>
#include <stdint.h>
#include "Actor.h"
#include "MazeGame.h"

// ==== 플레이어 ====
// - HP 100 시작
// - 공격 데미지는 "매 턴" DamageDist로 결정
// - 크리티컬 확률 10% (PercentDist로 판정, 성공 시 2배)
// - 코인 회복 기능: 코인 50 차감 → HP +50 

//9 / 12 심화문제
//- 변경된 미로 탈출 게임에 기능 추가하기
//1. 플레이어의 위치, HP를 저장하는 구조체 만들고 적용하기
//2. 적의 HP, 공격력, 보상이 들어있는 구조체 만들고 적용하기
//3. 적 생성시 HP와 공격력과 보상을 랜덤하게 설정하기
//4. 이동시 확률로 HP 회복하던 것을 보상을 사용하여 회복하는 것으로 수정하기



enum class EventType : uint8_t
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


class Monster : public Actor
{
public:
	Monster() = default;

	// 직접 스탯 지정
	Monster(const std::string& InName, int InHp, int InAttackPower, int InRewardCoin = 0);

	// 랜덤 스탯 생성 (Game의 분포 사용)
	Monster(Game& InGame, const std::string& InName = "Monster");

	virtual ~Monster() override = default;

	virtual void MazeAttack(MazeBattle* InTarget, Game& InGame) override;

	inline int  GetRewardCoin() const { return RewardCoin; }
	inline void SetRewardCoin(int InCoin) { RewardCoin = (InCoin < 0) ? 0 : InCoin; }

protected:
	int RewardCoin = 0;
};



/*
bool IsCriticalHit(Game& game);                
void GrantEnemyReward(Player& player, const Enemy& enemy);
void RecoverWithReward(Player& player);
void MazeEscapeRun();
*/





