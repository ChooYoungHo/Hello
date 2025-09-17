#pragma once
#include <string>
#include <random>
#include <stdint.h>
#include "Actor.h"
#include "MazeGame.h"

// ==== �÷��̾� ====
// - HP 100 ����
// - ���� �������� "�� ��" DamageDist�� ����
// - ũ��Ƽ�� Ȯ�� 10% (PercentDist�� ����, ���� �� 2��)
// - ���� ȸ�� ���: ���� 50 ���� �� HP +50 

//9 / 12 ��ȭ����
//- ����� �̷� Ż�� ���ӿ� ��� �߰��ϱ�
//1. �÷��̾��� ��ġ, HP�� �����ϴ� ����ü ����� �����ϱ�
//2. ���� HP, ���ݷ�, ������ ����ִ� ����ü ����� �����ϱ�
//3. �� ������ HP�� ���ݷ°� ������ �����ϰ� �����ϱ�
//4. �̵��� Ȯ���� HP ȸ���ϴ� ���� ������ ����Ͽ� ȸ���ϴ� ������ �����ϱ�



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

	// ���� ���� ����
	Monster(const std::string& InName, int InHp, int InAttackPower, int InRewardCoin = 0);

	// ���� ���� ���� (Game�� ���� ���)
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





