#pragma once
#include "Animal.h"
#include "ICanBattle.h"

// Tiger�� Animal�� ��� ��� �޾Ҵ�.
class Tiger : public Animal, public ICanBattle
{
public:
	virtual void Move() override;     // ȣ���̴� Aniaml�� Move �Լ��� ���.
	virtual void MakeSound() override;

	virtual void Attack(ICanBattle* Target) override;
	virtual void TakeDamage(int InDamage) override;

	void Hunt();	// ȣ���� ���� �Լ�
	void Move();
	
	
public:
	// ������,�Ҹ��ڴ� ����� ����� �ƴϴ�.
	Tiger() = default;
	Tiger(std::string InName)
		: Animal(InName)      // �θ� Ŭ������ Animal���� ������ ó���ϴ� �Ͱ� �Ȱ��� �ض�.
	{
	}
	virtual ~Tiger()
	{
	}

	float AttackPower = 10.0f;

};


