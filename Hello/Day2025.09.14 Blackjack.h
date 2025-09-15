#pragma once




/*
고칠점: 

Deck()
: Index(0), Count(52)
{
 여기에 덱 생성 

      채우기                                   // Deck() : Index(0), Count(52) 생성자에 쓰는게 좋다.
	int idx = 0;
	for (int i = SPADE; i <= CLUB; i++)        // 무늬
	{
		for (int j = ACE; j <= KING; j++)      // 숫자
		{
			deck.Cards[idx].CardSuit = (Suit)i;
			deck.Cards[idx].CardRank = (Rank)j;
			idx++;
		}
	}
} 

결과 return 값 매직 넘버 enum 으로 보기 좋게 수정

*/

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
    Card Cards[52]
    {
    };
    int Index;                   // 현재 뽑은 위치
    int Count;                   // 현재 총 장수
    
       Deck()
         : Index(0), Count(52)    
       {
       }
};


int CardValue(const Card& card);
int CalculateScore(const Card* Hand, int Count);
bool IsBust(int Score);
bool DrawCard(Deck& deck, Card& outCard);
void PrintCards(const Card& InCard);
int PlayerTurn(const Card* Deck, int& DeckIndex, Card* PlayerHand, int& PlayerCount);
int DealerTurn(const Card* Deck, int& DeckIndex, Card* DealerHand, int& DealerCount);
int GameResult(int PlayerScore, int DealerScore, bool PlayerBust, bool DealerBust);
void InitialDeal(Deck& deck, Card* PlayerHand, int& PlayerCount, Card* DealerHand, int& DealerCount);

void BlackJackRun();
