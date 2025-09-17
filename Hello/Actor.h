#pragma once
#include <string>
#include <stdio.h>
#include <random>
#include "MazeBattle.h"

/*
9 / 16 ��������
1. Monster Ŭ���� ���� �����
- �߻�ȭ
   - Monster Ŭ���� �����
     - �⺻ �Ӽ� : �̸�, ü��, ���ݷ�
     - ���� �Լ� : Attack()
- ĸ��ȭ
   - �� �Ӽ��� protected�� �����
     - �⺻ �Ӽ��� �����ڿ��� ����
     - ���� Getter�����
- ���
   - ���, ��ũ, ����, ���̷��� ��� �����
     - ���� ��ų �����
/////////////////////////////////////////////
2. �̷� Ż�� ���� �����ϱ�
- ���� Ŭ����ȭ�ϱ�(Monster�� ��ü)
- �÷��̾� Ŭ���� ����� �����ϱ�
- ���� �÷��̾��� �θ��� Actor Ŭ���� �����
*/

/*
9 / 17
�̷� Ż�� ���� �����ϱ�
-Actor Ŭ������ ICanBattle �������̽��� �߰��ϱ�
  -������ �� �� �ִٴ� ���� ��Ÿ���� �������̽�
    -�ֿ� �Լ�
      -ApplyDamage(ICanBattle * InTarget);
      -TakeDamage(float InDamage);
    -���� �ڵ� ����
-enum�� ��� enum class�� �����ϱ�
-Monster�� ������ �� �� �� ���ͺ��� �ٸ� ������� �����ϱ�

-���� ���� �� ������ ���Ͱ� ����
*/

class Actor : public MazeBattle
{
public:
    // ������ : ��󿡰� ���� ���ϱ�
    virtual void MazeAttack(MazeBattle* InTarget, Game& game) override
    {
        if (InTarget == nullptr || IsDead())
        {
            return;
        }
        InTarget->MazeTakeDamage(AttackPower);
    }

    // �ǰ��� : ���ظ�ŭ ü�� ����
    virtual void MazeTakeDamage(int InDamage) override
    {
        if (InDamage < 0) 
        {
            InDamage = 0;
        }
        SetHealth(Health - InDamage);
    }

    Actor() = default;
    Actor(std::string InName, int InHp, int InAttackPower)
        : Name(InName), Health(InHp), MaxHealth(InHp), AttackPower(InAttackPower) 
    {
    }
    
    // �б�
    inline const std::string& GetName() const { return Name; }
    inline int  GetHealth()      const { return Health; }
    inline int  GetMaxHealth()   const { return MaxHealth; }
    inline int  GetAttackPower() const { return AttackPower; }

    // ����
    virtual bool IsDead()   const { return Health <= 0; }
    virtual void ReceiveDamage(int InDamage) { SetHealth(Health - InDamage); }
    virtual void RecoveryHealth(int InAmount) { SetHealth(Health + InAmount); }
    virtual void ShowInfo() const 
    {
        printf("�̸�: %s | HP: %d/%d | ATK: %d\n", Name.c_str(), Health, MaxHealth, AttackPower);
    }

    virtual ~Actor() {};

protected:
    inline void SetHealth(int NewHp) 
    {
        if (NewHp < 0)
        {
            NewHp = 0;
        }
        if (NewHp > MaxHealth)
        {
            NewHp = MaxHealth;
        }
        Health = NewHp;
    }

protected:
    std::string Name = "Actor";
    int Health = 0;
    int MaxHealth = 0;
    int AttackPower = 0;
};




