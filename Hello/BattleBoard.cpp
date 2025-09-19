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

BattleType BattleBoard::GetBattle(int InX, int InY) const
{
    if (!InBounds(InX, InY))
    {
        return BattleType::Empty;
    }
    return BattleGrid[InY][InX];
}

// ¹è ¼û±è(.), ¸ÂÃá°÷(X), ¸ø¸ÂÃá°÷(O) 
void BattleBoard::PrintPlayer() const
{
    printf("    ");
    for (int X = 0; X < Width; ++X) 
    { 
        printf("%2d ", X); 
    }
    printf("\n");

    for (int Y = 0; Y < Height; ++Y)
    {
        printf("%d  ", Y);
        for (int X = 0; X < Width; ++X)
        {
            char Dot = '.';
            BattleType Type = BattleGrid[Y][X];

            if (Type == BattleType::Hit)
            {
                Dot = 'O';
            }
            else if (Type == BattleType::Miss)
            {
                Dot = 'X';
            }
            else 
            {
                Dot = '.'; 
            }
            printf("%c", Dot);
        }
        printf("\n");
    }
}


// ºó°÷(.), ¹è(S), ¸ÂÃá°÷(O), ¸ø¸ÂÃã(X)
void BattleBoard::PrintShip() const
{
    printf("    ");
    for (int X = 0; X < Width; ++X) 
    { 
        printf("%2d ", X);
    }
    printf("\n");

    for (int Y = 0; Y < Height; ++Y)
    {
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
                Dot = 'O';
            }
            else if (Type == BattleType::Miss)
            {
                Dot = 'X';
            }
            printf(" %c ", Dot);
        }
        printf("\n");
    }
}




