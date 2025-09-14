#pragma once


enum Rank
{
    ACE = 1,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING
};

enum Suit
{
    SPADE,
    HEART,
    DIAMOND,
    CLUB
};

struct Card
{
    Rank CardRank;
    Suit CardSuit;
};

struct Deck
{
    Card Cards[52];  
    int Index;                   // ���� ���� ��ġ
    int Count;                   // �� ���

    Deck()
        : Index(0), Count(52)    // �ʱ�ȭ
    {
    }
};


int CardValue(const Card& card);
int CalculateScore(const Card* Hand, int Count);
bool IsBust(int Score);
bool DrawCard(Deck& deck, Card& outCard);
int PlayerTurn(const Card* Deck, int& DeckIndex, Card* PlayerHand, int& PlayerCount);
int DealerTurn(const Card* Deck, int& DeckIndex, Card* DealerHand, int& DealerCount);
int GameResult(int PlayerScore, int DealerScore, bool PlayerBust, bool DealerBust);
void InitialDeal(Deck& deck, Card* PlayerHand, int& PlayerCount, Card* DealerHand, int& DealerCount);

void BlackJackRun();