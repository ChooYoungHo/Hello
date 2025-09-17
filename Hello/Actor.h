#pragma once
#include <string>
#include <stdio.h>
#include <random>
#include "MazeBattle.h"

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

/*
9 / 17
미로 탈출 게임 수정하기
-Actor 클래스에 ICanBattle 인터페이스를 추가하기
  -전투를 할 수 있다는 것을 나타내는 인터페이스
    -주요 함수
      -ApplyDamage(ICanBattle * InTarget);
      -TakeDamage(float InDamage);
    -전투 코드 수정
-enum을 모두 enum class로 변경하기
-Monster가 공격을 할 때 각 몬스터별로 다른 방식으로 공격하기

-전투 시작 시 랜덤한 몬스터가 등장
*/

class Actor : public MazeBattle
{
public:
    // 공격자 : 대상에게 피해 가하기
    virtual void MazeAttack(MazeBattle* InTarget, Game& game) override
    {
        if (InTarget == nullptr || IsDead())
        {
            return;
        }
        InTarget->MazeTakeDamage(AttackPower);
    }

    // 피격자 : 피해만큼 체력 감소
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
    
    // 읽기
    inline const std::string& GetName() const { return Name; }
    inline int  GetHealth()      const { return Health; }
    inline int  GetMaxHealth()   const { return MaxHealth; }
    inline int  GetAttackPower() const { return AttackPower; }

    // 동작
    virtual bool IsDead()   const { return Health <= 0; }
    virtual void ReceiveDamage(int InDamage) { SetHealth(Health - InDamage); }
    virtual void RecoveryHealth(int InAmount) { SetHealth(Health + InAmount); }
    virtual void ShowInfo() const 
    {
        printf("이름: %s | HP: %d/%d | ATK: %d\n", Name.c_str(), Health, MaxHealth, AttackPower);
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




