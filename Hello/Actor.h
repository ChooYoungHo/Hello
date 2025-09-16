#pragma once
#include <string>
#include <stdio.h>
#include <random>

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

class Actor
{
public:
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
    inline void ReceiveDamage(int InDamage) { SetHealth(Health - InDamage); }
    inline void Heal(int InAmount) { SetHealth(Health + InAmount); }
    inline bool IsDead() const { return Health <= 0; }

    inline void ShowInfo() const {
        printf("�̸�: %s | HP: %d/%d | ATK: %d\n",
            Name.c_str(), Health, MaxHealth, AttackPower);
    }

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
