#pragma once
#include "MazeGame.h"

class MazeBattle
{
public:
	virtual ~MazeBattle() {}

	virtual	void MazeAttack(MazeBattle* InTarget, Game& InGame) = 0;
	virtual void MazeTakeDamage(int InDamage) = 0;

	// 맴버 변수가 꼭 필요 할 경우, Getter가 있다는 것을 명시
	//virtual void GetAttackPower() = 0;
};