#pragma once
#include "Animal.h"
#include "ICanBattle.h"

// Tiger는 Animal을 모두 상속 받았다.
class Tiger : public Animal, public ICanBattle
{
public:
	virtual void Move() override;     // 호랑이는 Aniaml의 Move 함수를 덮어씀.
	virtual void MakeSound() override;

	virtual void Attack(ICanBattle* Target) override;
	virtual void TakeDamage(int InDamage) override;

	void Hunt();	// 호랑이 전용 함수
	void Move();
	
	
public:
	// 생성자,소멸자는 상속의 대상이 아니다.
	Tiger() = default;
	Tiger(std::string InName)
		: Animal(InName)      // 부모 클래스인 Animal에서 생성자 처리하는 것과 똑같이 해라.
	{
	}
	virtual ~Tiger()
	{
	}

	float AttackPower = 10.0f;

};


