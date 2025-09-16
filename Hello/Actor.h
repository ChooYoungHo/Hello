#pragma once
#include <string>
#include <stdio.h>
#include <random>

/*
9 / 16 연습문제
1. Monster 클래스 예시 만들기
- 추상화
   - Monster 클래스 만들기
     - 기본 속성 : 이름, 체력, 공격력
     - 공통 함수 : Attack()
- 캡슐화
   - 각 속성을 protected로 만들기
     - 기본 속성은 생성자에서 세팅
     - 각종 Getter만들기
- 상속
   - 고블린, 오크, 좀비, 스켈레톤 등등 만들기
     - 고유 스킬 만들기
/////////////////////////////////////////////
2. 미로 탈출 게임 수정하기
- 적을 클래스화하기(Monster로 대체)
- 플레이어 클래스 만들고 적용하기
- 적과 플레이어의 부모인 Actor 클래스 만들기
*/

class Actor
{
public:
    Actor() = default;
    Actor(std::string InName, int InHp, int InAttackPower)
        : Name(InName), Health(InHp), MaxHealth(InHp), AttackPower(InAttackPower) 
    {
    }

    // 읽기
    inline const std::string& GetName() const { return Name; }
    inline int  GetHealth()      const { return Health; }
    inline int  GetMaxHealth()   const { return MaxHealth; }
    inline int  GetAttackPower() const { return AttackPower; }

    // 동작
    inline void ReceiveDamage(int InDamage) { SetHealth(Health - InDamage); }
    inline void Heal(int InAmount) { SetHealth(Health + InAmount); }
    inline bool IsDead() const { return Health <= 0; }

    inline void ShowInfo() const {
        printf("이름: %s | HP: %d/%d | ATK: %d\n",
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
