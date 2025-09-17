#pragma once
#include "MazeGame.h"

class MazeBattle
{
public:
	virtual ~MazeBattle() {}

	virtual	void MazeAttack(MazeBattle* InTarget, Game& InGame) = 0;
	virtual void MazeTakeDamage(int InDamage) = 0;

	// �ɹ� ������ �� �ʿ� �� ���, Getter�� �ִٴ� ���� ���
	//virtual void GetAttackPower() = 0;
};