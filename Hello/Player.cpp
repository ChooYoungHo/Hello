#include "Player.h"

void Player::ShowInfo() const
{
    Actor::ShowInfo();
    printf("Coin: %d | Pos: (%d, %d)\n", Coin, X, Y);
}

void Player::Move(int InPlayerx, int InPlayery)
{
    X += InPlayerx; Y += InPlayery;
    printf("[%s] 이동 → (%d, %d)\n", GetName().c_str(), X, Y);
}

void Player::RecoverWithCoin()
{
    const int Cost = 50;
    const int Heal = 50;

    if (Coin < Cost)
    {
        printf("[%s] 코인이 부족합니다. (보유: %d, 필요: %d)\n", GetName().c_str(), Coin, Cost);
        return;
    }
    Coin -= Cost;
    int BeforeHealth = GetHealth();
    Heal(Heal);
    printf("[%s] 코인 %d 사용 → HP %d → %d (/%d)\n",
        GetName().c_str(), Cost, BeforeHealth, GetHealth(), GetMaxHealth());
}

void Player::Attack(Actor& InTarget, Game& InGame)
{
    int InDamage = static_cast<int>(InGame.GetDamage());
    if (InGame.GetPercent() <= 10) 
    { 
        InDamage *= 2; 
        printf("[%s] 크리티컬!\n", GetName().c_str()); 
    }

    printf("[%s] 공격! (%d)\n", GetName().c_str(), InDamage);
    InTarget.ReceiveDamage(InDamage);
    printf(" -> [%s] 남은 HP: %d\n", InTarget.GetName().c_str(), InTarget.GetHealth());
}
