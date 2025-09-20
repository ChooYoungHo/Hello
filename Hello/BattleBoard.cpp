#include "BattleBoard.h"

void BattleBoard::Clear()
{

    for (int Y = 0; Y < Height; ++Y)
    {
        for (int X = 0; X < Width; ++X)
        {
            BattleGrid[Y][X] = BattleType::Empty;
        }
    }
}

bool BattleBoard::InBounds(int InX, int InY) const
{
    return (InX >= 0 && InX < Width && InY >= 0 && InY < Height);
}

void BattleBoard::SetBattle(int InX, int InY, BattleType InType)
{
    if (!InBounds(InX, InY)) 
    { 
        return; 
    }
    BattleGrid[InY][InX] = InType;
}

// �ش� ��ǥ Ÿ�� ��ȸ
BattleType BattleBoard::GetBattle(int InX, int InY) const
{
    if (!InBounds(InX, InY))
    {
        return BattleType::Empty;
    }
    return BattleGrid[InY][InX];
}

// �� ����(.), �����(X), �������(O) 
void BattleBoard::PrintPlayer() const
{
    // �� ��ȣ
    printf("    ");
    for (int X = 0; X < Width; ++X)
    {
        printf("%2d ", X);
    }
    printf("\n");

    for (int Y = 0; Y < Height; ++Y)
    {
        // �� ��ȣ
        printf("%2d  ", Y);

        for (int X = 0; X < Width; ++X)
        {
            char Dot = '.';
            BattleType Type = BattleGrid[Y][X];

            if (Type == BattleType::Hit)
            {
                Dot = 'X';   // ���� ��
            }
            else if (Type == BattleType::Miss)
            {
                Dot = 'O';   // �� ���� ��
            }
            else
            {
                Dot = '.';   // �� ĭ
            }

            printf(" %c ", Dot);
        }
        printf("\n");
    }
}


// ���(.), ��(S), �����(X), ������(O)
void BattleBoard::PrintShip() const
{
    // �� ��ȣ
    printf("    ");
    for (int X = 0; X < Width; ++X)
    {
        printf("%2d ", X);
    }
    printf("\n");

    for (int Y = 0; Y < Height; ++Y)
    {
        // �� ��ȣ
        printf("%2d  ", Y);

        for (int X = 0; X < Width; ++X)
        {
            char Dot = '.';
            BattleType Type = BattleGrid[Y][X];

            if (Type == BattleType::Empty)
            {
                Dot = '.';
            }
            else if (Type == BattleType::Ship)
            {
                Dot = 'S';
            }
            else if (Type == BattleType::Hit)
            {
                Dot = 'X';   // ���� ��
            }
            else if (Type == BattleType::Miss)
            {
                Dot = 'O';   // �� ���� ��
            }

            printf(" %c ", Dot);
        }
        printf("\n");
    }
}   




