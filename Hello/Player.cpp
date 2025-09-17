#include "Player.h"
#include "MazeBattle.h"

//const int Cost = 50;
//const int RecoverHealth = 50;

//�÷��̾� ����
void Player::MazeAttack(MazeBattle* InTarget, Game& InGame)
{
    if (InTarget == nullptr || IsDead())
    {
        return;
    }

    int Damage = InGame.GetDamage();   // 5 ~ 15
    int Percent = InGame.GetPercent();  // 1 ~ 100

    if (Percent <= 10)                  // 10% ũ��Ƽ��
    {
        Damage *= 2;
        std::printf("�÷��̾� ũ��Ƽ�� ����!\n");
    }

    InTarget->MazeTakeDamage(Damage);
}

void Player::AddCoin(int InAmount)
{
    if (InAmount > 0)
    {
        Coin += InAmount;
    }
}

bool Player::UseCoin(int InAmount)
{
    if (InAmount <= 0)
    {
        return true;
    }
    if (Coin >= InAmount)
    {
        Coin -= InAmount;
        return true;
    }
    return false;
}

void Player::RecoverWithCoin(int InCost, int InRecoveryHealth)
{
    if (Coin >= InCost)
    {
        Coin -= InCost;
        RecoveryHealth(InRecoveryHealth);  // Actor�� ���ǵ� ȸ�� �Լ�
        std::printf("���� %d �Ҹ�! ü�� %d ȸ��!\n", InCost, InRecoveryHealth);
    }
    else
    {
        std::printf("������ �����մϴ�!\n");
    }
}

void Player::ShowInfo() const
{
    std::printf("�÷��̾�: %s | HP: %d/%d | ATK: %d | Coin: %d | Pos: (%d,%d)\n",
        GetName().c_str(), GetHealth(), GetMaxHealth(), GetAttackPower(), Coin, X, Y);
}

void Player::Move(int InDx, int InDy)
{
    X += InDx;
    Y += InDy;
}