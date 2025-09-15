#define _CRT_SECURE_NO_WARNINGS //scanf 처리
#define _CRTDBG_MAP_ALLOC
#define new new(_NORMAL_BLOCK, __FILE__, __LINE__) // 메모리 할당했는데 delete 알려주는
#include <crtdbg.h>
#include <iostream>   // 입출력 관련
#include <stdio.h>
#include <cstdio>     // stdio.h에 네임스페이스 추가한 래퍼 
#include <time.h>     // 시간 값
#include <random>
#include <limits.h>
#include <direct.h>
#include <fstream>
#include <string>
#include "Day2025.09.14 Blackjack.h"

/*
--------------------------------------------
##블랙잭 게임 만들기
### 1. 게임 목표
- 두 카드의 합이 21에 가깝게 만들되, 21을 넘지 않는 것이 목표
- 21을 초과하면(버스트, Bust) 즉시 패배
- 배팅은 없음

### 2. 카드의 값
- 2~10: 카드 숫자 그대로 점수.
- J(잭), Q(퀸), K(킹) : 각각 10점.
- A(에이스) : 1점 또는 11점(유리한 쪽으로 자동 선택).

### 3. 게임 진행 절차
### 1) 초기 배분
- 딜러와 플레이어 모두 2장씩 카드를 받음.
- 플레이어의 카드는 두 장 모두 공개.
- 딜러는 한 장은 공개(오픈 카드), 한 장은 비공개(홀 카드).

### 2) 플레이어 턴
- 플레이어가 먼저 행동.
- 선택지:
-Hit(히트) : 카드를 한 장 더 받음.
- Stand(스탠드) : 더 이상 카드를 받지 않고 멈춤.
- 플레이어가 21을 초과하면(버스트) 즉시 패배.

### 3) 딜러 턴
- 플레이어가 스탠드를 하면 딜러 차례.
- 딜러는 자신의 카드 합이 17 이상이 될 때까지 계속 히트(카드 받기)해야 함.
- A가 포함된 "소프트 17"(A + 6 = 7 또는 17)도 멈춤.
- 17 이상이면 멈추고, 21을 넘으면 딜러 패배.

### 4) 승패 판정
- 버스트가 아닌 경우, 점수 비교.
- 플레이어가 21에 더 가까우면 승리.
- 동점이면 무승부(Push).
- 딜러가 더 가까우면 패배.
- 블랙잭: 처음 받은 두 장이 A + 10(또는 J, Q, K)이면 블랙잭.일반적으로 블랙잭이 단순 21점보다 우선함.
*/

// 카드 한장 점수 
int CardValue(const Card& card)
{
	int Value = 0;

	if (card.CardRank >= 2 && card.CardRank <= 10)
	{
		Value = card.CardRank;  // 2~10
	}
	else if (card.CardRank == JACK || card.CardRank == QUEEN || card.CardRank == KING)
	{
		Value = 10;             // J, Q, K
	}
	else if (card.CardRank == ACE)
	{
		Value = 11;             // Ace (일단 11로 계산)
	}

	return Value;
}

// 카드 점수 계산
int CalculateScore(const Card* Hand, int Count)
{
	int Sum = 0;
	int AceCount = 0;                         // ACE 개수

	for (int i = 0; i < Count; i++)
	{
		Sum += CardValue(Hand[i]);

		if (Hand[i].CardRank == ACE)          // ACE 카운터
		{
			AceCount++;
		}
	}

	while (Sum > 21 && AceCount > 0) 	  
	{
		Sum -= 10;                            // 21 넘으면 ACE -> 1 
		AceCount--;
	}

	return Sum;
}

// 카드 버스트
bool IsBust(int Score)
{
	return Score > 21; 
}

// 카드 셔플
void ShuffleDeck(Deck& deck)
{
	// 덱 채우기                                // Deck() : Index(0), Count(52) 생성자에 쓰는게 좋다.
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

	deck.Index = 0; // 새 게임 마다 덱 리셋

	// 셔플
	for (int i = deck.Count - 1; i > 0; i--)
	{
		int j = rand() % (i + 1);
		Card temp = deck.Cards[i];
		deck.Cards[i] = deck.Cards[j];
		deck.Cards[j] = temp;
	}
}

// 덱에서 카드 한장씩 뽑기
bool DrawCard(Deck& deck, Card& outCard)
{
	if (deck.Index >= deck.Count)               // 남은 카드 없을때
	{
		return false;                           // 실패
	}
	else
	{
		outCard = deck.Cards[deck.Index];       // 복사
	    deck.Index++;                           // 다음 뽑기
	}

	return true;
}

void PrintCards(const Card& InCard)
{
	const char* SuitStrs[4] = { "SPADE", "HEART", "DIAMOND", "CLUB" };
	const char* ValueStrs[13] = { "A","2","3","4","5","6","7","8","9","10","J","Q","K" };

	printf("%s %s\n", SuitStrs[InCard.CardSuit], ValueStrs[InCard.CardRank - 1]);
}

// 플레이어 턴
int PlayerTurn(const Card* Deck, int& DeckIndex, Card* PlayerHand, int& PlayerCount)
{
	while (true)
	{
		int Score = CalculateScore(PlayerHand, PlayerCount);   // 점수 계산

		if (IsBust(Score))
			return 1;                   // 버스트
		if (Score == 21) 
			return 2;                   // 블랙잭

		int Choice = 0;
		printf("1.Hit (카드 받음)  2.Stand (카드 받지 않음): \n");
		std::cin >> Choice;

		if (Choice == 1)
		{
			PlayerHand[PlayerCount] = Deck[DeckIndex];         // 카드 한 장 받기
			PlayerCount++;                                     // 플레이어 카드 수 증가
			DeckIndex++;

			printf("플레이어 Hit! 받은 카드: ");                
			PrintCards(PlayerHand[PlayerCount - 1]); 

			int Score = CalculateScore(PlayerHand, PlayerCount);
			printf("플레이어 현재 점수: %d\n", Score);
		}
		else if (Choice == 2)
		{
			return 0;                                  
		}
		else
		{
			printf("잘못된 입력.\n");
		}
	}
}

// 딜러 턴 
int DealerTurn(const Card* Deck, int& DeckIndex, Card* DealerHand, int& DealerCount)
{
	while (true)
	{
		int Score = CalculateScore(DealerHand, DealerCount);

		if (IsBust(Score))
		{
			return 1;                                 // 버스트
		}
		if (Score >= 17)                              // 소프트17 CalculateScore (ACE가 21 안넘으면 0 유지)
		{
			return 0;                                 // 스탠드
		}

		DealerHand[DealerCount] = Deck[DeckIndex];    // else 17 미만일때 카드 한 장 받기
		DealerCount++;                                // 딜러 카드 수 증가
		DeckIndex++;    

		printf("딜러 Hit! 받은 카드: ");
		PrintCards(DealerHand[DealerCount - 1]);

		Score = CalculateScore(DealerHand, DealerCount);
		printf("딜러 현재 점수: %d\n", Score);
	}
}

// 승패 판정
int GameResult(int PlayerScore, int DealerScore, bool PlayerBust, bool DealerBust)
{
	if (PlayerBust)
	{
		return -1;                              // 플레이어 버스트 -> 패배
	}
	if (DealerBust)
	{
		return 1;                               // 딜러 버스트 -> 플레이어 승리
	}
	if (PlayerScore > DealerScore)
	{
		return 1;                               // 플레이어 승리
	}
	if (PlayerScore < DealerScore)
	{
		return -1;                              // 플레이어 패배
	}
    
	return 0;                                   // 무승부
}


//### 1) 초기 배분
//- 딜러와 플레이어 모두 2장씩 카드를 받음.
//- 플레이어의 카드는 두 장 모두 공개.
//- 딜러는 한 장은 공개(오픈 카드), 한 장은 비공개(홀 카드).
void InitialDeal(Deck& deck,
	             Card* PlayerHand, int& PlayerCount,
	             Card* DealerHand, int& DealerCount)
{
	Card _card;

	// 플레이어 1장
	DrawCard(deck, _card);
	PlayerHand[PlayerCount] = _card;
	PlayerCount++;

	// 딜러 1장 (오픈 카드)
	DrawCard(deck, _card);
	DealerHand[DealerCount] = _card;
	DealerCount++;

	// 플레이어 2장
	DrawCard(deck, _card);
	PlayerHand[PlayerCount] = _card;
	PlayerCount++;

	// 딜러 2장 (홀 카드)
	DrawCard(deck, _card);
	DealerHand[DealerCount] = _card;
	DealerCount++;

	// 점수 계산 및 공개
	int PlayerScore = CalculateScore(PlayerHand, PlayerCount);
	int DealerOpenValue = CardValue(DealerHand[0]);                   // 첫 장(오픈 카드)만 공개

	printf("초기 배분 결과: \n");
	printf("플레이어 카드1: "); PrintCards(PlayerHand[0]);
	printf("플레이어 카드2: "); PrintCards(DealerHand[0]);
	
	printf("플레이어: 카드 2장, 현재 점수: %d\n", PlayerScore);
	printf("딜러: 오픈 카드: %d, 홀 카드: 비공개\n", DealerOpenValue);
}

// 실행
void BlackJackRun()
{
	srand((unsigned)time(0));   // 셔플용 시드

	Deck deck;
	ShuffleDeck(deck);          // 52장 채우고 섞기

	Card PlayerHand[12];  
	int PlayerCount = 0;

	Card DealerHand[12];  
	int DealerCount = 0;

	// 초기 배분
	InitialDeal(deck, PlayerHand, PlayerCount, DealerHand, DealerCount);

	// 플레이어 턴 (return : 1 = Bust, 2 = Blackjack) 
	int PlayerResult = PlayerTurn(deck.Cards, deck.Index, PlayerHand, PlayerCount);

	if (PlayerResult == 1)
	{ 
		printf("플레이어 버스트! 패배!\n"); 
		return; 
	}
	if (PlayerResult == 2) 
	{ 
		printf("플레이어 블랙잭! 승리!\n");  
		return;
	}

	// 플레이어 Stand 고를 때 -> 딜러 Hit 
	printf("딜러 카드 공개:\n");
	for (int i = 0; i < DealerCount; i++)
	{
		PrintCards(DealerHand[i]);   
	}
	int DealerScoreNow = CalculateScore(DealerHand, DealerCount);
	printf("딜러 현재 점수: %d\n", DealerScoreNow);

	// 딜러 턴 (return : 0 = Stand, 1 = Bust)
	int DealerResult = DealerTurn(deck.Cards, deck.Index, DealerHand, DealerCount);

	// 최종 판정 (return : -1 = 패, 0 = 무, 1 = 승)
	int PlayerScore = CalculateScore(PlayerHand, PlayerCount);
	int DealerScore = CalculateScore(DealerHand, DealerCount);
	int Result = GameResult(PlayerScore, DealerScore, PlayerResult == 1, DealerResult == 1);

	if (Result == 1)
		printf("플레이어 승리!\n");
	else if (Result == -1)
		printf("플레이어 패배\n");
	else                  
		printf("무승부!\n");
}

