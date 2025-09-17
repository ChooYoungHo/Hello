#pragma once
#include "MazeGame.h"

class ICanBattle
{
public:
	virtual ~ICanBattle() {}

	virtual	void Attack(ICanBattle* InTarget) = 0;
	virtual void TakeDamage(int InDamage) = 0;

	// �ɹ� ������ �� �ʿ� �� ���, Getter�� �ִٴ� ���� ���
	//virtual void GetAttackPower() = 0;
};

