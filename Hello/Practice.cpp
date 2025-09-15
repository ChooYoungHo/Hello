#include <iostream>
#include <stdio.h>
#include <random>
#include "Practice.h"

void TestClass::TestFunc()
{
	// 동작 구현
}


void Day20250902_Practice()
{


}

void Day20250903_Practice()
{

/*
    void PrintHelloWorld()
    {
    	printf("Hello World!\n");
    }
    
    float Average(float Number1, float Number2, float Number3)
    {
    	return (Number1 + Number2 + Number3) / 3.0f;
    }
    
    int DiscountedPrice(int OriginalPrice, float DiscountRate)
    {
    	return OriginalPrice * (1.0f - DiscountRate * 0.01f);
    }
    
    int RollDice()
    {
    	return (rand() % 6) + 1;
    }
    
    char GetGrade(int Score)
    {
    	if (Score >= 90)
    		return 'A';
    	else if (Score >= 80)
    		return 'B';
    	else if (Score >= 70)
    		return 'C';
    	else if (Score >= 60)
    		return 'D';
    	else
    		return 'F';
    } 


	int Sum(int Test1, int Test2)  // int Sum(int, int); 이 선언을 정의했다.
	{
		int Result = Test1 + Test2;

		return Test1 + Test2;  // 리턴은 왠만하면 마지막에 하나
	}
	float Sum(float Test1, float Test2)
	{
		float Result = Test1 + Test2;

		return Result;
	}

	int Multiply(int Number1, int Number2)
	{
		return Number1 * Number2;
	}

	int Subtract(int Number3, int Number4)
	{
		return Number3 - Number4;
	}

	int Divide(int Number5, int Number6)
	{
		return Number5 / Number6;
	}

	int TestRecurcive(int Number)
	{
		if (Number < 2)
		{
			return 1;
		}
		printf("Recurcive : %d\n", Number);
		return TestRecurcive(Number - 1);
	}
*/
}
void Day20250904_Practice1()
{
	///*
	//1. 주사위(1~6)를, 100만번 돌려서, 6이 몇번 나왔는지, 카운팅해서, 출력하기
	//*/
	//	const int TestCount = 1000000;
	//	int HitCount = 0;
	//	for (int i = 0; i < TestCount; i++)	// 100만번 돌려서
	//	{
	//		int dice = rand() % 6 + 1;	// 주사위(1~6)를
	//		if (dice == 6)	// 6이 몇번 나왔는지
	//		{
	//			HitCount++;	// 카운팅해서
	//		}
	//	}
	//	printf("6이 나온 회수 = %d", HitCount);	// 출력하기
	//
	//	/*
	//		2. 가위, 바위, 보 게임 만들기
	//			3선승제
	//			enum 활용
	//
	//			가위 바위 보
	//			 - 두명의 플레이어가 가위,바위,보 중 하나를 선택한다.
	//			 - 선택의 결과에 따라 승과 패가 나뉜다.
	//			 - 가위는 보를 이긴다.
	//			 - 바위는 가위를 이긴다.
	//			 - 보는 바위를 이긴다.
	//	*/
	//	enum RockPaperScissors
	//	{
	//		Scissors,
	//		Rock,
	//		Paper,
	//		NumOfRps
	//	};
	//	const int WinGoal = 3;
	//	int PlayerWinCount = 0;
	//	int ComWinCount = 0;
	//
	//	while (PlayerWinCount < WinGoal && ComWinCount < WinGoal)
	//	{
	//		int PlayerSelect = -1;
	//		while (true)	// 플레이어 선택
	//		{
	//			printf("선택하세요. [0:가위, 1:바위, 2:보] : ");
	//			std::cin >> PlayerSelect;
	//
	//			if (PlayerSelect == Scissors
	//				|| PlayerSelect == Rock
	//				|| PlayerSelect == Paper)
	//			{
	//				break;
	//			}
	//
	//			printf("잘못된 입력입니다. 다시 입력하세요\n");
	//		}
	//		int ComSelect = rand() % NumOfRps;	// 컴퓨터 선택
	//
	//		switch (PlayerSelect)	// 승패 결정
	//		{
	//		case Scissors:
	//			if (ComSelect == Scissors)
	//			{
	//				printf("당신은 [가위]를 선택했고 컴퓨터는 [가위]를 선택했습니다.\n");
	//				printf("비겼습니다.\n");
	//			}
	//			else if (ComSelect == Rock)
	//			{
	//				printf("당신은 [가위]를 선택했고 컴퓨터는 [바위]를 선택했습니다.\n");
	//				printf("당신이 졌습니다.\n");
	//				ComWinCount++;
	//			}
	//			else if (ComSelect == Paper)
	//			{
	//				printf("당신은 [가위]를 선택했고 컴퓨터는 [보]를 선택했습니다.\n");
	//				printf("당신이 이겼습니다.\n");
	//				PlayerWinCount++;
	//			}
	//			else
	//			{
	//				printf("ERROR!!!!! 예상외의 사건이 발생함!\n");
	//			}
	//			break;
	//		case Rock:
	//			if (ComSelect == Scissors)
	//			{
	//				printf("당신은 [바위]를 선택했고 컴퓨터는 [가위]를 선택했습니다.\n");
	//				printf("당신이 이겼습니다.\n");
	//				PlayerWinCount++;
	//			}
	//			else if (ComSelect == Rock)
	//			{
	//				printf("당신은 [바위]를 선택했고 컴퓨터는 [바위]를 선택했습니다.\n");
	//				printf("비겼습니다.\n");
	//			}
	//			else if (ComSelect == Paper)
	//			{
	//				printf("당신은 [바위]를 선택했고 컴퓨터는 [보]를 선택했습니다.\n");
	//				printf("당신이 졌습니다.\n");
	//				ComWinCount++;
	//			}
	//			else
	//			{
	//				printf("ERROR!!!!! 예상외의 사건이 발생함!\n");
	//			}
	//			break;
	//		case Paper:
	//			if (ComSelect == Scissors)
	//			{
	//				printf("당신은 [보]를 선택했고 컴퓨터는 [가위]를 선택했습니다.\n");
	//				printf("당신이 졌습니다.\n");
	//				ComWinCount++;
	//			}
	//			else if (ComSelect == Rock)
	//			{
	//				printf("당신은 [보]를 선택했고 컴퓨터는 [바위]를 선택했습니다.\n");
	//				printf("당신이 이겼습니다.\n");
	//				PlayerWinCount++;
	//			}
	//			else if (ComSelect == Paper)
	//			{
	//				printf("당신은 [보]를 선택했고 컴퓨터는 [보]를 선택했습니다.\n");
	//				printf("비겼습니다.\n");
	//			}
	//			else
	//			{
	//				printf("ERROR!!!!! 예상외의 사건이 발생함!\n");
	//			}
	//			break;
	//		default:
	//			printf("ERROR!!!!! 예상외의 사건이 발생함!\n");
	//			break;
	//		}
	//
	//		printf("Player = [%d], COM = [%d]\n", PlayerWinCount, ComWinCount);
	//	}
	//
	//	if (PlayerWinCount >= WinGoal)
	//	{
	//		printf("당신이 컴퓨터를 이겼습니다!\n");
	//	}
	//	else
	//	{
	//		printf("당신이 컴퓨터에게 졌습니다...\n");
	//	}
}
void Day20250904_Practice2()
{ 
	///*
	//	3. 하이 로우
	//		컴퓨터가 1~100 사이의 임의의 숫자를 선택하고,
	//		사용자가 맞출 때까지 입력을 받아 "더 높게", "더 낮게" 등의 힌트를 제공하는 게임
	//		5번안에 맞춰야 승리
	//*/
	//int RandomNumber = rand() % 100 + 1;
	//int PlayerNumber = 0;
	//int CountDown = 5;
	//
	//while (CountDown > 0)
	//{
	//	printf("1~100 사이의 숫자를 예상해 보세요 : ");
	//	std::cin >> PlayerNumber;
	//
	//	if (PlayerNumber < RandomNumber)
	//	{
	//		printf("더 큰 수를 찍어보세요\n");
	//	}
	//	else if (PlayerNumber > RandomNumber)
	//	{
	//		printf("더 작은 수를 찍어보세요\n");
	//	}
	//	else
	//	{
	//		printf("정답입니다!\n찾는 수는 %d였습니다.\n", RandomNumber);
	//		break;
	//	}
	//	CountDown--;
	//	printf("남은 회수는 %d번 입니다.\n", CountDown);
	//}
	//if (CountDown <= 0)
	//{
	//	printf("실패했습니다.\n");
	//}
	//getchar();
	//getchar();
}
void Day20250904_Practice3()
{
	// 공포게임의 인벤토리를 비트플래그로 표현하기
	// 아이템 종류를 나타내는 enum을 만들고
	// 특정 아이템을 추가하고 삭제하는 예시 보여주기
	// 인번토리 내용 출력하기 (인벤토리의 비트내용에 따라 출력)
	// 1번 : 아이템 추가, 2번 : 아이템 버리기, 3번 : 종료
	// 이미 있는 아이템을 추가하려고하면 "이미 있는 아이템입니다." 출력
	// 없는 아이템을 버리려고하면 "없는 아이템입니다." 출력

	//	enum Item
	//	{
	//		Key  = 1 << 0,  //1
	//		Fuse = 1 << 1,  //2
	//		Book = 1 << 2,  //4
	//		Note = 1 << 3,  //8
	//	};
	//
	//	const int ItemCount = 4;
	//	int Inventory = 0;
	//
	//	//Inventory = 0b1111;  //  테스트 코드
	//
	//	int PlayerSelect = -1;
	//
	//	while (PlayerSelect != 3)
	//	{
	//		printf("어떤 일을 할까요 [1:아이템 추가, 2: 아이템 삭제, 3. 종료]: ");
	//		std::cin >> PlayerSelect;
	//
	//		switch (PlayerSelect)
	//		{
	//		case 1:
	//		{
	//			printf("어떤 아이템을 추가 할까요?: [0:열쇠, 1:퓨즈, 2:책, 3:쪽지]: ");
	//			int AddItem = 0;
	//			std::cin >> AddItem;
	//			Inventory |= (1 << AddItem);
	//		}
	//		break;
	//		case 2:
	//		{
	//			printf("어떤 아이템을 추가 할까요?: [0:열쇠, 1:퓨즈, 2:책, 3:쪽지]: ");
	//			int RemoveItem = 0;
	//			std::cin >> RemoveItem;
	//			Inventory &= (~(1 << RemoveItem));
	//		}
	//		break;
	//		case 3:
	//			continue;
	//		default:
	//			//에러 출력하기
	//			break;
	//		}
	//	}
	//
	//	printf("인벤토리 : ");    // 인벤토리 내용 출력
	//	if ((Inventory & Key) != 0)  // 아이템이 있는거
	//	{
	//		printf("열쇠 ");
	//	}
	//	if ((Inventory & Fuse) != 0)  
	//	{
	//		printf("퓨즈 ");
	//	}
	//	if ((Inventory & Book) != 0) 
	//	{
	//		printf("책 ");
	//	}if ((Inventory & Note) != 0)  
	//	{
	//		printf("쪽지 ");
	//	}
	//}


	//게임 인벤토리//

	//int main()
	//{

	//	enum Item
	//	{
	//		None = 0,
	//		Gun = 1 << 0,   //0b0001
	//		Bullet = 1 << 1, //0b0010
	//		Sword = 1 << 2,  //0b0100
	//		Shield = 1 << 3, //0b1000
	//	};



	//	int Inventory = None;
	//	int Select = 0;
	//	while (true)
	//	{
	//		printf("1번 : 아이템 추가, 2번 : 아이템 버리기, 3번 : 종료\n");
	//		std::cin >> Select;
	//		if (Select == 1)
	//		{
	//			int AddItem = 0;
	//			printf("추가할 아이템 선택 (1: Gun, 2: Bullet, 3: Sword, 4: Shield) : ");
	//			std::cin >> AddItem;
	//			if (AddItem == 1)
	//			{
	//				if ((Inventory & Item::Gun) != 0)
	//				{
	//					printf("이미 있는 아이템입니다.\n");
	//				}
	//				else
	//				{
	//					Inventory = Inventory | Item::Gun;
	//				}
	//			}
	//			else if (AddItem == 2)
	//			{
	//				if ((Inventory & Item::Bullet) != 0)
	//				{
	//					printf("이미 있는 아이템입니다.\n");
	//				}
	//				else
	//				{
	//					Inventory = Inventory | Item::Bullet;
	//				}
	//			}
	//			else if (AddItem == 3)
	//			{
	//				if ((Inventory & Item::Sword) != 0)
	//				{
	//					printf("이미 있는 아이템입니다.\n");
	//				}
	//				else
	//				{
	//					Inventory = Inventory | Item::Sword;
	//				}
	//			}
	//			else if (AddItem == 4)
	//			{
	//				if ((Inventory & Item::Shield) != 0)
	//				{
	//					printf("이미 있는 아이템입니다.\n");
	//				}
	//				else
	//				{
	//					Inventory = Inventory | Item::Shield;
	//				}
	//			}
	//		}
	//		if (Select == 2)
	//		{
	//			int RemoveItem = 0;
	//			printf("버릴 아이템 선택 (1: Gun, 2: Bullet, 3: Sword, 4: Shield) : ");
	//			std::cin >> RemoveItem;
	//			if (RemoveItem == 1)
	//			{
	//				if ((Inventory & Item::Gun) == 0)
	//				{
	//					printf("없는 아이템입니다.\n");
	//				}
	//				else
	//				{
	//					Inventory = Inventory & ~Item::Gun;
	//				}
	//			}
	//			else if (RemoveItem == 2)
	//			{
	//				if ((Inventory & Item::Bullet) == 0)
	//				{
	//					printf("없는 아이템입니다.\n");
	//				}
	//				else
	//				{
	//					Inventory = Inventory & ~Item::Bullet;
	//				}
	//			}
	//			else if (RemoveItem == 3)
	//			{
	//				if ((Inventory & Item::Sword) == 0)
	//				{
	//					printf("없는 아이템입니다.\n");
	//				}
	//				else
	//				{
	//					Inventory = Inventory & ~Item::Sword;
	//				}
	//			}
	//			else if (RemoveItem == 4)
	//			{
	//				if ((Inventory & Item::Shield) == 0)
	//				{
	//					printf("없는 아이템입니다.\n");
	//				}
	//				else
	//				{
	//					Inventory = Inventory & ~Item::Shield;
	//				}
	//			}

	//		}
	//		else if (Select == 3)
	//		{
	//			break;
	//		}

	//	}
	//	return 0;
	//}
 

	/*
	9/4 실습
	주사위 게임 만들기
	초기 세팅
	플레이어와 컴퓨터 모두 일정 금액(예: 10000원)으로 시작한다.
	1차 주사위 굴리기
	게임 시작 시, 플레이어와 컴퓨터가 각각 주사위(1~6)를 한 번 굴린다.
	각자 주사위 결과를 공개한다.
	배팅
	이전 판에서 진 쪽이 배팅 금액을 제시한다.
	제시한 배팅 금액은 두 사람 모두의 현재 소지 금액 이하이어야 한다.
	배팅 금액은 두 사람 모두에게서 차감된다.
	2차 주사위 굴리기
	다시 플레이어와 컴퓨터가 각각 주사위를 한 번씩 굴린다.
	(1차+2차) 주사위의 합을 계산한다.
	승패 판정 및 금액 증감
	합이 더 큰 쪽이 배팅 금액의 총합(즉, 2×배팅금액)을 모두 가져간다.
	동점일 경우 배팅 금액은 그대로 반환한다.
	다음 판 진행
	소지금이 0 이하인 쪽이 나오면 게임 종료.



	9/4
	홀짝 게임
	초기 금액 및 배팅
	플레이어는 기본금 100원으로 베팅을 시작한다.
	홀짝 선택
	플레이어가 1(홀) 또는 2(짝)을 선택한다.
	결과 결정
	컴퓨터가 랜덤으로 1(홀) 또는 2(짝)을 선택한다.
	플레이어의 선택과 결과가 일치하면 승리(이기면 배팅금의 2배 획득), 다르면 패배(배팅금 전액 잃음).
	연속 배팅 선택
	승리 시 플레이어는 두 가지 중 하나를 선택:
	(A) 이긴 금액을 모두 다시 한 번에 배팅 (연승 도전)
	(B) 이긴 금액을 얻고, 다시 100원부터 새로 배팅 시작
	게임 종료 조건
	플레이어가 소지금이 100원 미만일 경우 게임 종료.
	*/
}


void Practice20250905()
{

/*
//1. 특정 범위안의 랜덤한 수를 리턴하는 함수
//- int 파라메터가 2개
//- int 리턴
int main()
{
	int num = Random(1, 10); // 1~10 사이 랜덤
	printf("랜덤 숫자: %d\n", num);

	return 0;
   }
*/

/*
//2. “당신의 나이를 입력해 주세요 : “ → “당신은 00살 입니다”
//- int 파라메터 1개
int main()
{
	int Age = 0;
	std::printf("당신의 나이를 입력해 주세요 : ");
	std::cin >> Age;
	std::printf("당신은 %d살 입니다\n", Age);

	return 0;
}
*/

/*
//3. 원의 반지름을 입력 받고 넓이 구하기
//- float 파라메터 1개
//- float 리턴
int main()
{
	float Radius = 0.0f;
	std::printf("원의 반지름을 입력해 주세요: ");
	std::cin >> Radius;

	float Area = CircleArea(Radius);
	std::printf("원의 넓이는 %.2f입니다\n", Area);

	return 0;
}
*/

/*
//4. 숫자를 입력받아 홀수인지 짝수인지 판단하는 함수
//- int 파라메터 1개
//- bool 리턴(true면 홀수, false면 짝수)
int main()
{
	int Number = 0;
	std::printf("숫자를 입력해 주세요: ");
	std::cin >> Number;

	if (IsOdd(Number)) {
		std::printf("%d는 홀수입니다.\n", Number);
	}
	else {
		std::printf("%d는 짝수입니다.\n", Number);
	}

	return 0;
}
*/

//5. 성적 분류 함수(A~F)
//- int 파라메터 1개
//- int 리턴(enum값)

/*
int main()
{
	int Score = 0;
	std::printf("점수를 입력해 주세요: ");
	std::cin >> Score;

	Grade InputGrade = GetGrade(Score);

	switch (InputGrade)
	{
	case A:
	{
		printf("등급: A\n");
		break;
	}
	case B:
	{
		printf("등급: B\n");
		break;
	}
	case C:
	{
		printf("등급: C\n");
		break;
	}
	case D:
	{
		printf("등급: D\n");
		break;
	}
	case F:
	{
		printf("등급: F\n");
		break;
	}
	return 0;
	}
}
*/

//6. 아이템 설정, 아이템 해제, 아이템 토글용 함수 총 3개
//- 비트 플래그 인벤토리 코드 수정
//- int 파라메터 두개(Inventory, 비트플래그용 enum)

/*
int main()
{
	int Inventory = 0; // 초기화

	Inventory = AddItem(Inventory, Item::Key);
	printf("현재 인벤토리: %d\n", Inventory);

	Inventory = AddItem(Inventory, Item::Fuse);
	printf("현재 인벤토리: %d\n", Inventory);

	Inventory = RemoveItem(Inventory, Item::Key);
	printf("현재 인벤토리: %d\n", Inventory);

	Inventory = ToggleItem(Inventory, Item::Book);
	printf("현재 인벤토리: %d\n", Inventory);

	Inventory = ToggleItem(Inventory, Item::Book);
	printf("현재 인벤토리: %d\n", Inventory);

	return 0;
}
*/

//7. 피라미드 출력 함수
//- int 파라메터 1개


/*
int Pyramid(int Height)
{
	for (int i = 1; i <= Height; i++)
	{
		for (int j = 0; j < Height - i; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < 2 * i - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return Height;
}
int main()
{
	int Height = 0;
	printf("피라미드 높이 입력: ");
	std::cin >> Height;

	Pyramid(Height);
}
*/

/*
탬플릿 함수 만들기
파라메터 2개
리턴 : 파라메터 중 작은 수 리턴
Max
파라메터 2개
리턴 : 파라메터 중 큰 수 리턴
Clamp
파라메터 3개(value, min, max)
리턴
value값이 min보다 작으면 min
value값이 max보다 크면 max
value값이 min과 max 사이면 value
*/

	//int main()
	//{
	//	printf("Min: %d\n", Min(3, 7));
	//	printf("Max: %d\n", Max(3, 7));
	//	printf("Clamp: %d\n", Clamp(10, 0, 5));

	//	return 0;
	//}

//int Value -120;
//int Min = 10;
//int Max = 50;
//Value = Clamp(Value, Min, Max);
//
//float ValueF = 10.0f;
//float MinF = 10.0f;
//float MaxF = 50.0f;
//ValueF = Clamp(ValueF, MinF, MaxF);






	/*
	//재귀함수를 이용해서 팩토리얼 값을 만드는 함수 만들기
	//5팩토리얼 = 5 * 4 * 3 * 2 * 1
	int Factorial(int FacNumber)
	{
		printf("%d", FacNumber);

		if (FacNumber > 1)
		{
			printf(" * ");
			return FacNumber * Factorial(FacNumber - 1);
		}
		else
		{
			printf("\n");
			return 1;
		}
	}

	int main()
	{
		int Number = 5;
		int FiveFactorial = Factorial(Number);

		printf("%d! = %d\n", Number, FiveFactorial);

		return 0;
	}
	*/
    
    
    /*
        1. 특정 범위안의 랜덤한 수를 리턴하는 함수
        - int 파라메터가 2개
        - int 리턴
        2. “당신의 나이를 입력해 주세요 : “ → “당신은 00살 입니다”
        - int 파라메터 1개
        3. 원의 반지름을 입력 받고 넓이 구하기
        - float 파라메터 1개
        - float 리턴
        4. 숫자를 입력받아 홀수인지 짝수인지 판단하는 함수
        - int 파라메터 1개
        - bool 리턴(true면 홀수, false면 짝수)
        5. 성적 분류 함수(A~F)
        - int 파라메터 1개
        - int 리턴(enum값)
        6. 아이템 설정, 아이템 해제, 아이템 토글용 함수 총 3개
        - 비트 플래그 인벤토리 코드 수정
        - int 파라메터 두개(Inventory, 비트플래그용 enum)
        7. 피라미드 출력 함수
        - int 파라메터 1개
    */
}

void Practice20250906()
{
	//3개의 파라메터를 받아 평균값을 리턴하는 함수 만들기
	//int main()
	//{
	//	float Number1 = 0.0f;
	//	float Number2 = 0.0f;
	//	float Number3 = 0.0f;
	//	std::cin >> Number1 >> Number2 >> Number3;
	//
	//	float Result = Average(Number1, Number2, Number3);
	//	printf("평균값: %.2f\n", Result);
	//	return 0;
	//}


	//2. 정가와 할인율 입력 받아 할인가 구하는 함수 만들기
	//int main()
	//{
	//	float Price = 0.0f;
	//	float DiscountRate = 0.0f;
	//	std::printf("정가와 할인율을 입력해 주세요: ");
	//	std::cin >> Price >> DiscountRate;
	//	std::printf("할인가: %d\n", DiscountedPrice(Price, DiscountRate));
	//	return 0;
	//}


	////3. 주사위를 굴린 결과를 리턴하는 함수 만들기
	//int main()
	//{
	//	int DiceResult = RollDice();
	//	printf("주사위 결과: %d\n", DiceResult);
	//	return 0;
	//}


	//4. 점수를 주면 성적(A~F)를 주는 함수 만들기
	//int main()
	//{
	//	int Score = 0;
	//	printf("점수 입력하세요: ");
	//	std::cin >> Score;	
	//
	//	char Grade = GetGrade(Score);
	//	printf("성적: %c\n", Grade);
	//	return 0;
	//}


	///*
	//탬플릿 함수 만들기
	//- Min
	//파라메터 2개
	//리턴 : 파라메터 중 작은 수 리턴
	//- Max
	//파라메터 2개
	//리턴 : 파라메터 중 큰 수 리턴
	//- Clamp
	//파라메터 3개(value, min, max)
	//리턴
	//value값이 min보다 작으면 min
	//value값이 max보다 크면 max
	//value값이 min과 max 사이면 value
	//*/
	//int main()
	//{
	//	printf("Min: %d\n", Min(3, 7));
	//	printf("Max: %d\n", Max(3, 7));
	//	printf("Clamp: %d\n", Clamp(10, 0, 5));
	//
	//	return 0;
	//}


	////1. 자리수 분리하기(입력은 자리 수 제한 없음) - 각 자리의 수를 합해서 출력하기
	//int main()
	//{
	//	int InputNumber;
	//	std::cin >> InputNumber;
	//
	//	int Sum = 0;
	//	while (InputNumber > 0)
	//	{
	//		Sum = Sum + InputNumber % 10; // 일의 자리 수 더하기
	//		InputNumber = InputNumber / 10;       // 일의 자리 수 제거
	//	}
	//	printf("자리수의 합: %d\n", Sum);
	//	return 0;
	//}
	//
	//
	//
	////2. 재귀 함수를 이용하여 10진수를 입력받아 2진수로 출력하는 함수 만들기
	//void Binary(int Number)
	//{
	//	if (Number > 1)
	//	{
	//		Binary(Number / 2);
	//	}
	//	printf("%d", Number % 2);
	//}
	//
	//int main()
	//{
	//	int Number;
	//	printf("10진수를 입력하세요: ");
	//	std::cin >> Number;
	//
	//	printf("2진수: ");
	//	Binary(Number);
	//	printf("\n");
	//
	//	return 0;
	//}
	//
	//
	///*
	//3. 슬롯 머신 게임 만들기
	//- 시작 금액 10000
	//- 한판에 무조건  최소 100 배팅해야 함.만약 소지금액이 100 이하일 경우 게임 종료.
	//- 같은 숫자 3개가 나오면 50배로 돌려 받는다.
	//- 만약 777이면 10000배 받음
	//*/
	//
	//int main()
	//{
	//	const int StartMoney = 10000;
	//	int Money = StartMoney;
	//
	//	std::random_device RandomSlot;
	//	std::mt19937 SlotEngine(RandomSlot());
	//	std::uniform_int_distribution<int> SlotDist(1, 9); 
	//
	//	while (Money > 100)  // 소지금이 100이하일경우 게임 종료
	//	{
	//		int BettingMoney = 0;
	//		printf("현재 금액 : %d\n", Money);
	//		printf("현재 배팅할 금액(100이상): ");
	//		std::cin >> BettingMoney;
	//
	//		if (BettingMoney < 100)
	//		{
	//			printf("100이상 다시 베팅하세요.\n");
	//			continue;
	//		}
	//		else if (BettingMoney > Money)
	//		{
	//			printf("소지금보다 많이 걸 수 없습니다.\n");
	//			continue; 
	//		}
	//		else
	//		{
	//		Money = Money - BettingMoney;
	//		}
	//
	//		int Slot1 = SlotDist(SlotEngine);
	//		int Slot2 = SlotDist(SlotEngine);
	//		int Slot3 = SlotDist(SlotEngine);
	//		printf("슬롯 결과: %d %d %d\n", Slot1, Slot2, Slot3);
	//
	//		if (Slot1 == Slot2 && Slot2 == Slot3)
	//		{
	//			int RewardMoney = BettingMoney * 50;
	//			Money = Money + RewardMoney;
	//			printf("같은 숫자를 뽑으셨습니다. %d원을 받으셨습니다.\n", RewardMoney);
	//		}
	//		else if (Slot1 == 7 && Slot2 == 7 && Slot3 == 7)
	//		{
	//			int RewardMoney = BettingMoney * 10000;
	//			printf("잭팟! 777을 뽑으셨습니다!\n");
	//			Money = Money * RewardMoney;
	//		}
	//		else
	//		{
	//			printf("돈을 잃으셨습니다.\n");
	//		}
	//	}
	//	printf("게임 종료! 최종 금액: %d\n", Money);
	//
	//	return 0;
	//}
	//
	//
	///*
	//4. 플레이어와 적의 턴제 전투 만들기
	//- HP는 100으로 시작
	//- 공격을 할 때 상대방에게 5~15의 데미지를 준다.
	//- 10 % 의 확률로 크리티컬이 발생해 2배의 데미지를 준다.
	//- 상대방의 HP가 0 이하가 되면 승리한다.
	//*/
	//int main()
	//{
	//	const int StartHp = 100;
	//	int PlayerHp = StartHp;
	//	int EnemyHp = StartHp;
	//	std::random_device RandomDamage;
	//	std::mt19937 DamageEngine(RandomDamage());
	//	std::uniform_int_distribution<int> DamageDist(5, 15);
	//	std::uniform_int_distribution<int> CriticalDist(1, 100); // 확률
	//
	//	while (PlayerHp > 0 && EnemyHp > 0)
	//	{
	//		int PlayerDamage = DamageDist(DamageEngine);
	//		int CriticalDamage = CriticalDist(DamageEngine);
	//
	//		if (CriticalDamage <= 10)
	//		{
	//			PlayerDamage = PlayerDamage * 2;
	//			printf("플레이어 크리티컬 공격!\n");
	//		}
	//		else
	//		{
	//			printf("플에이어 공격!\n");
	//		}
	//		EnemyHp = EnemyHp - PlayerDamage;
	//		
	//        if (EnemyHp <= 0) 
	//		{
	//			printf("적에게 %d 데미지 -> 적 체력: 0\n", PlayerDamage);
	//			break; 
	//		}
	//		else 
	//		{
	//			printf("적에게 %d 데미지 -> 적 체력: %d\n", PlayerDamage, EnemyHp);
	//		}
	//
	//		//적 턴
	//		int EnemyDamage = DamageDist(DamageEngine);
	//		int EnemyCritical = CriticalDist(DamageEngine);
	//
	//		if (EnemyCritical <= 10) 
	//		{
	//			EnemyDamage = EnemyDamage * 2;
	//			printf("적 크리티컬 공격! ");
	//		}
	//		else 
	//		{
	//			printf("적 공격! ");
	//		}
	//        PlayerHp = PlayerHp - EnemyDamage;
	//
	//		if (PlayerHp <= 0) 
	//		{
	//			printf("플레이어에게 %d 데미지 → 플레이어 HP: 0\n", EnemyDamage);
	//			break; 
	//		}
	//		else 
	//		{
	//			printf("플레이어에게 %d 데미지 → 플레이어 HP: %d\n", EnemyDamage, PlayerHp);
	//		}
	//	}
	//
	//	if (PlayerHp > 0 && EnemyHp <= 0)
	//	{
	//		printf("플레이어 승리!");
	//	}
	//	else if (EnemyHp > 0 && PlayerHp <= 0)   // 중복 없애
	//	{
	//		printf("적 승리!\n");
	//	}
	//	return 0;
	//}
	//
	//
	///*
	//5. 도둑 잡기 만들기
	//- 시작 금액 10000
	//- 한판에 무조건 최소 100 배팅해야 함.만약 소지금액이 100 이하일 경우 게임 종료.
	//- 딜러는 A~K까지의 트럼프 카드 중 2장을 중복없이 선택하고 조커 카드가 추가된다.
	//- 플레이어는 딜러의 카드 중 한장을 선택한다.
	//- 만약 플레이어가 조커를 뽑다면 플레이어의 승리.배팅 금액의 2배를 받는다.
	//- 플레이어가 조커를 뽑지 못했다면 다음 게임을 시작하거나 배팅 금액의 2배를 추가로 지불하고 한번 더 선택할 수 있다.
	//*/
	//
	//int main()
	//{
	//	const int StartMoney = 10000;
	//	int Money = StartMoney;
	//	std::random_device RandomCard;
	//	std::mt19937 CardEngine(RandomCard());
	//	std::uniform_int_distribution<int> CardDist(1, 11); // A~K 
	//	
	//	while (Money > 100)
	//	{
	//		int BettingMoney = 0;
	//		printf("배팅 금액을 입력하세요.: ");
	//		std::cin >> BettingMoney;
	//
	//		if (BettingMoney < 100)
	//		{
	//			printf("100이상 베팅 하십시오.\n");
	//			continue;
	//		}
	//		else if (BettingMoney > Money)
	//		{
	//			printf("소지금보다 많이 걸수 없습니다.");
	//			continue;
	//		}
	//		else 
	//		{
	//			Money = Money - BettingMoney;
	//		}
	//
	//		int Card1 = CardDist(CardEngine);
	//		int Card2 = CardDist(CardEngine);
	//		while (Card2 == Card1)
	//		{
	//			Card2 = CardDist(CardEngine);
	//		}
	//		//int Joker = 0;
	//
	//		std::uniform_int_distribution<int> PositionDist(1, 3);       //조커가 들어갈 슬롯
	//		int JokerPosition = PositionDist(CardEngine);                //실제 조커 슬롯 번호를 랜덤 뽑기
	//		std::uniform_int_distribution<int> CardPositionDist(0, 1);   //두 일반 카드 순서 랜덤하게
	//		int CardPosition = CardPositionDist(CardEngine);             //0이면 Card1 먼저, 1이면 Card2 먼저
	//		int Slot1 = 0;
	//		int Slot2 = 0;
	//		int Slot3 = 0;
	//		if (JokerPosition == 1)
	//		{
	//			Slot1 = 0;               // 조커
	//			if (CardPosition == 0)
	//			{
	//				Slot2 = Card1;
	//				Slot3 = Card2;
	//			}
	//			else
	//			{
	//				Slot2 = Card2;
	//				Slot3 = Card1;
	//			}
	//		}
	//		else if (JokerPosition == 2)
	//		{
	//			Slot2 = 0;  
	//			if (CardPosition == 0)
	//			{
	//				Slot1 = Card1;
	//				Slot3 = Card2;
	//			}
	//			else
	//			{
	//				Slot1 = Card2;
	//				Slot3 = Card1;
	//			}
	//		}
	//		else // JokerPosition == 3
	//		{
	//			Slot3 = 0;  
	//			if (CardPosition == 0)
	//			{
	//				Slot1 = Card1;
	//				Slot2 = Card2;
	//			}
	//			else
	//			{
	//				Slot1 = Card2;
	//				Slot2 = Card1;
	//			}
	//		}
	//
	//		int PlayerChoice = 0;
	//		printf("카드를 선택하세요. 1.첫번째 카드, 2.두번째 카드, 3.세번째 카드\n"); 
	//		std::cin >> PlayerChoice;
	//	
	//		int ChoiceValue = 0;
	//		if (PlayerChoice == 1)
	//			ChoiceValue = Slot1;
	//		else if (PlayerChoice == 2)
	//			ChoiceValue = Slot2;
	//		else if (PlayerChoice == 3)
	//			ChoiceValue = Slot3;
	//		else
	//		{
	//			printf("잘못된 입력입니다. 이번 판은 무효이며 베팅액을 반환합니다.\n");
	//			Money = Money + BettingMoney;   // 환불
	//			continue;                       // 다음 라운드
	//		}
	//
	//		if (ChoiceValue == 0)               // 0번을 조커로 했음
	//		{
	//			printf("승리! 조커를 뽑았습니다. ");
	//			Money = Money + (BettingMoney * 2);
	//			printf("현재 금액 : %d\n", Money);
	//			continue;
	//		}
	//		else
	//		{
	//			printf("아쉽습니다. 조커가 아닙니다. (당신이 뽑은 카드: %d)\n", ChoiceValue);
	//		}
	//
	//		int PlayerRetry = 0;
	//		printf("배팅 금액의 2배를 추가로 지불(%d)하고 한번 더 선택하시겠습니까? (예: 1, 아니오: 0):\n", BettingMoney * 2);
	//		std::cin >> PlayerRetry;
	//				
	//		if (PlayerRetry == 1)
	//		{
	//			if (Money < BettingMoney * 2)  // 돈 확인
	//			{
	//				printf("소지금이 부족하여 재도전을 할 수 없습니다.\n");
	//				printf("현재 금액: %d\n", Money);
	//				continue;
	//			}
	//			else
	//			{
	//				Money = Money - (BettingMoney * 2);    //돈 차감
	//			}
	//
	//			int RetrySlot = 0;
	//			printf("남은 두 카드 중 하나를 고르세요. (1.첫번째 카드, 2.두번째 카드): \n");
	//			std::cin >> RetrySlot;
	//
	//			int InputOK = 1;                // 입력 오류 확인 (1정상, 0잘못됨)
	//			int ChoiceValue2 = 0;           // 두 번째로 뽑은 카드 값
	//
	//			if (PlayerChoice == 1) 			// 처음 고른 카드 제외하고 남은 두 카드
	//			{
	//				if (RetrySlot == 1)
	//					ChoiceValue2 = Slot2;   // 남은 2,3
	//				else if (RetrySlot == 2)
	//					ChoiceValue2 = Slot3;
	//				else
	//					InputOK = 0;
	//			}
	//			else if (PlayerChoice == 2)
	//			{
	//				if (RetrySlot == 1)
	//					ChoiceValue2 = Slot1;   // 남은 1,3
	//				else if (RetrySlot == 2)
	//					ChoiceValue2 = Slot3;
	//				else
	//					InputOK = 0;
	//			}
	//			else // PlayerChoice == 3
	//			{
	//				if (RetrySlot == 1)
	//					ChoiceValue2 = Slot1;   // 남은 1,2
	//				else if (RetrySlot == 2)
	//					ChoiceValue2 = Slot2;
	//				else
	//					InputOK = 0;
	//			}
	//
	//			if (InputOK == 0)
	//			{
	//				printf("잘못된 입력입니다. 재도전은 무효 처리됩니다.\n");
	//				printf("현재 금액: %d\n", Money);  
	//				continue;                           
	//			}
	//			else if (ChoiceValue2 == 0)
	//			{
	//				Money += (BettingMoney * 2);
	//				printf("재도전 성공! 조커를 뽑았습니다. (지급: %d)\n", BettingMoney * 2);
	//				printf("현재 금액: %d\n", Money);
	//				continue;
	//			}
	//			else
	//			{
	//				printf("재도전 실패! 조커가 아니었습니다. (당신이 뽑은 카드: %d)\n", ChoiceValue2);
	//				printf("현재 금액: %d\n", Money);
	//				continue;
	//			}
	//		}
	//		else
	//		{
	//			printf("재도전을 하지 않습니다.\n");
	//			printf("현재 금액: %d\n", Money);
	//			continue;
	//		}
	//	}
	//
	//	return 0;
	//}


	///*
	//시작 금액 10000
	//한판에 무조건 최소 100 배팅해야 함. 만약 소지금액이 100 이하일 경우 게임 종료.
	//딜러는 A~K까지의 트럼프 카드 중 2장을 중복없이 선택하고 조커 카드가 추가된다.
	//플레이어는 딜러의 카드 중 한장을 선택한다.
	//만약 플레이어가 조커를 뽑있다면 플레이어의 승리. 배팅 금액의 2배를 받는다.
	//플레이어가 조커를 뽑지 못했다면 다음 게임을 시작하거나 배팅 금액의 2배를 추가로 지불하고 한번 더 선택할 수 있다.
	//*/
	//
	//	enum Card
	//	{
	//		CardA = 0,
	//		Card2,
	//		Card3,
	//		Card4,
	//		Card5,
	//		Card6,
	//		Card7,
	//		Card8,
	//		Card9,
	//		Card10,
	//		CardJ,
	//		CardQ,
	//		CardK,
	//		CardJoker,
	//		NumOfCards
	//	};
	//
	//	int Money = 10000;
	//	const int MinimumBet = 100;
	//
	//	while (Money >= MinimumBet)
	//	{
	//		int CurrentBet = MinimumBet;
	//
	//		printf("배팅을 해주세요 (100~%d) : ", Money);
	//		std::cin >> CurrentBet;
	//		printf("%d원을 배팅했습니다.\n", CurrentBet);
	//
	//		Money -= CurrentBet;
	//
	//		// 배팅을 안하고 있다.
	//
	//		int Dealer1 = rand() % CardJoker;
	//		int Dealer2 = -1;
	//		do
	//		{
	//			Dealer2 = rand() % CardJoker;
	//		} while (Dealer2 == Dealer1);
	//		int Dealer3 = -1;
	//		do
	//		{
	//			Dealer3 = rand() % CardJoker;
	//		} while (Dealer3 == Dealer1 || Dealer3 == Dealer2);
	//
	//		int JokerIndex = rand() % 3;
	//		switch (JokerIndex)
	//		{
	//		case 0:
	//			Dealer1 = CardJoker;
	//			break;
	//		case 1:
	//			Dealer2 = CardJoker;
	//			break;
	//		case 2:
	//			Dealer3 = CardJoker;
	//			break;
	//		default:
	//			// 절대 들어오면 안된다.
	//			break;
	//		}
	//
	//		printf("카드를 선택하세요 (0, 1, 2) : ");
	//		int PlayerInput = 0;
	//		std::cin >> PlayerInput;
	//
	//		bool PlayerWin = false;
	//		printf("플레이어는 %d를 선택했습니다.\n", PlayerInput);
	//		switch (PlayerInput)
	//		{
	//		case 0:
	//			if (Dealer1 == CardJoker)
	//			{
	//				// 발견함
	//				PlayerWin = true;
	//			}
	//			break;
	//		case 1:
	//			if (Dealer2 == CardJoker)
	//			{
	//				// 발견함
	//				PlayerWin = true;
	//			}
	//			break;
	//		case 2:
	//			if (Dealer3 == CardJoker)
	//			{
	//				// 발견함
	//				PlayerWin = true;
	//			}
	//			break;
	//		default:
	//			// 절대 들어오면 안된다.
	//			break;
	//		}
	//
	//		if (PlayerWin)
	//		{
	//			Money += CurrentBet * 2;
	//			printf("조커를 뽑았습니다. 당신의 현재 금액은 %d입니다.\n", Money);
	//		}
	//		else
	//		{
	//			printf("당신이 뽑은 카드는 조커가 아닙니다.\n");
	//
	//			if (Money >= CurrentBet * 2)
	//			{
	//				printf("추가 도전 하시겠습니까 ? (0:yes, 1 : no) : ");
	//				int Select = -1;
	//				std::cin >> Select;
	//				if (Select == 0)
	//				{
	//					Money -= CurrentBet * 2;
	//					CurrentBet *= 3;
	//					int PlayerSecondInput = -1;
	//					switch (PlayerInput)
	//					{
	//					case 0:
	//					{
	//						do
	//						{
	//							printf("남은 카드 중 하나를 선택하세요 (1,2) : ");
	//							std::cin >> PlayerSecondInput;
	//						} //while (!(PlayerSecondInput == 1 || PlayerSecondInput == 2));
	//						while (PlayerSecondInput != 1 && PlayerSecondInput != 2);
	//					}
	//					break;
	//					case 1:
	//					{
	//						do
	//						{
	//							printf("남은 카드 중 하나를 선택하세요 (0,2) : ");
	//							std::cin >> PlayerSecondInput;
	//						} while (PlayerSecondInput != 0 && PlayerSecondInput != 2);
	//					}
	//					break;
	//					case 2:
	//					{
	//						do
	//						{
	//							printf("남은 카드 중 하나를 선택하세요 (0,1) : ");
	//							std::cin >> PlayerSecondInput;
	//						} while (PlayerSecondInput != 0 && PlayerSecondInput != 1);
	//					}
	//					break;
	//					default:
	//						// 절대 들어오면 안된다.
	//						break;
	//					}
	//
	//					printf("플레이어는 두번째로 %d를 선택했습니다.\n", PlayerSecondInput);
	//					switch (PlayerSecondInput)
	//					{
	//					case 0:
	//						if (Dealer1 == CardJoker)
	//						{
	//							// 발견함
	//							PlayerWin = true;
	//						}
	//						break;
	//					case 1:
	//						if (Dealer2 == CardJoker)
	//						{
	//							// 발견함
	//							PlayerWin = true;
	//						}
	//						break;
	//					case 2:
	//						if (Dealer3 == CardJoker)
	//						{
	//							// 발견함
	//							PlayerWin = true;
	//						}
	//						break;
	//					default:
	//						// 절대 들어오면 안된다.
	//						break;
	//					}
	//
	//					if (PlayerWin)
	//					{
	//						Money += CurrentBet * 2;
	//						printf("조커를 뽑았습니다. 당신의 현재 금액은 %d입니다.\n", Money);
	//					}
	//					else
	//					{
	//						printf("당신의 패배입니다.\n");
	//					}
	//				}
	//				else
	//				{
	//					printf("당신의 패배입니다.\n");
	//				}
	//			}
	//			else
	//			{
	//				printf("당신의 패배입니다.\n");
	//			}
	//		}
	//	}
	//}
}


void Day20250908_Practice1()
{

		////1. 배열 만들고 초기화 해보기
		//int Numbers[3] = { 5, 8, 3 };


		////2.배열의 모둔 요소의 값을 더하고 평균 구하기
		//int Sum = 0;
		//float Average = 0.0f;
		//int ArrayCount = static_cast<int>(sizeof(Numbers) / sizeof(Numbers[0]));
		//for (int i = 0; i < ArrayCount; i++)
		//{
		//	Sum += Numbers[i];
		//}
		//Average = Sum / static_cast<float>(ArrayCount);
		//printf("평균: %.2f\n", Average);

		////3. 배열의 모든 요소 중 최대값과 최소값 구하기
		//int MaxNumber = INT_MIN;
		//int MinNumber = INT_MAX;
		//for (int i = 0; i < ArrayCount; i++)
		//{
		//	if (MaxNumber < Numbers[i])
		//	{
		//		MaxNumber = Numbers[i];
		//	}
		//	if (MinNumber > Numbers[i])
		//	{
		//		MinNumber = Numbers[i];
		//	}
		//}
}


void Day20250908_Practice2()
{

	////6면체 주사위를 100만번 던져서 각 눈의 수가 몇번 나왔는지 카운팅하기
	////6면체 주사위를 돌리는 함수 만들기
	//printf("\n\n\n\n\n\n\n\n\n\n");
	//const int TestCount = 1000000;
	//int Counters[6] = { 0 };
	//for (int i = 0; i < TestCount; i++)
	//{
	//	Counters[RollDice() - 1]++;
	//}
	//printf("최종 결과 : ");
	//for (auto count : Counters)
	//{
	//	printf("%d ", count);
	//}
	//printf("\n");
}
/*
   내가 만든거

	6면체 주사위를 100만번 던져서 각 눈의 수가 몇번 나왔는지 카운팅하기
	- 6면체 주사위를 돌리는 함수 만들기
	

		int Count[6] = { 0 };

		for (int i = 0; i < 1000000; i++)
		{
			int result = rand() % 6 + 1;
			Count[result - 1]++;
		}
		for (int i = 0; i < 6; i++)
		{
			printf("%d의 개수: %d\n", i + 1, Count[i]);
		}
}
*/

void Reverse(int* Array, int Size)
{
	int HalfSize = Size / 2;
	for (int i = 0; i < HalfSize; i++)
	{
		int temp = Array[i];
		Array[i] = Array[Size - 1 - i];
		Array[Size - 1 - i] = temp;
	}
}
void Day20250908_Practice3()
{
//배열에 저장된 값을 거꾸로 뒤집는 함수 만들기
//파라메터 int Array[], int Size
	//int Array[10] = { 1,2,3,4,5,6,7,8,9,0 };

	//printf("Array : ");
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d ", Array[i]);
	//}
	//printf("\n");
	//Reverse(Array, 10);
	//printf("Array(Reverse) : ");
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d ", Array[i]);
	//}
	//printf("\n");
}
void Day20250908_Practice4()
{
	/*
	* 로또 번호 생성기
	- 전체 숫자 범위: 1번부터 45번까지.
	- 맞춰야 하는 숫자 개수: 6개.
	*/
	//const int MaxNumber = 45;
	//int Array[MaxNumber];
	//for (int i = 0; i < MaxNumber; i++)
	//{
	//	Array[i] = i + 1;
	//}

	//Shuffle(Array, MaxNumber);

	//printf("로또 번호는 ");
	//const int PickCount = 6;
	//for (int i = 0; i < PickCount; i++)
	//{
	//	printf("%d ", Array[i]);
	//}
	//printf("입니다.\n");

	/*
		내가 짠거
			int Array[45] = { 0 };
			for (int i = 0; i < 45; i++)
			{
				Array[i] = i + 1;
			}
			Shuffle(Array, 45);
			for (int i = 0; i < 6; i++)
			{
				printf("%d ", Array[i]);
			}
			printf("\n");
	*/
}

void Day20250908_Practice5()
{
	/*
	*	- 2차원 배열을 활용하여 텍스트 기반 미로 탈출 게임을 구현.
		- 미로의 구성
			- 10행 20열의 2차원 배열
			- 저장 방식
				- 길(0): '. '으로 표시
				- 벽(1): '# '으로 표시
				- 시작점(2): 'S '로 표시
				- 출구(3): 'E '로 표시
			- 미로 코드

				```cpp
				// 미로 크기
				const int MazeRows = 10;
				const int MazeCols = 20;

				// 미로 배열
				int Maze[MazeRows][MazeCols] =
				{
					{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
					{1,2,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,1,0,1},
					{1,1,1,1,0,1,0,1,1,0,1,0,1,1,0,1,0,1,0,1},
					{1,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1},
					{1,0,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1},
					{1,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1},
					{1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1},
					{1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,3,1},
					{1,0,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1},
					{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
				};
				```

		- 이동 입력 처리
			- w(W): 위, s(S): 아래, a(A): 왼쪽, d(D): 오른쪽
			- 대소문자 구분 없이 처리
		- 플레이어가 출구에 도착하면 종료
			- 플레이어는 ‘P ‘로 표시
		- 게임 화면은 다음과 같은 양식을 따른다.

			```cpp
			=== 텍스트 미로 탈출 게임 ===
			[미로 화면 출력]
			이동할 수 있는 방향을 선택하세요 (w: 위, s: 아래, a: 왼쪽, d: 오른쪽):
			w(↑) s(↓) a(←) d(→)
			방향 입력:
			```
	*/


//	int PlayerX = 0;
//	int PlayerY = 0;
//	FindStartPosition(PlayerX, PlayerY);
//
//	printf("~~ 미로 탈출 게임 ~~\n");
//
//	while (true)
//	{
//		PrintMaze(PlayerX, PlayerY);
//
//		if (IsEnd(PlayerX, PlayerY))
//		{
//			printf("축하합니다! 미로를 탈출했습니다!\n");
//			break;
//		}
//
//		int MoveFlags = PrintAvailableMoves(PlayerX, PlayerY);
//		MoveDirection Direction = GetMoveInput(MoveFlags);
//		switch (Direction)
//		{
//		case DirUp:
//			PlayerY--;
//			break;
//		case DirDown:
//			PlayerY++;
//			break;
//		case DirLeft:
//			PlayerX--;
//			break;
//		case DirRight:
//			PlayerX++;
//			break;
//		case DirNone:
//		default:
//			// 있을 수 없음
//			break;
//		}
//	}
//
//}
//
//void PrintMaze(int PlayerX, int PlayerY)
//{
//	for (int y = 0; y < MazeHeight; y++)
//	{
//		for (int x = 0; x < MazeWidth; x++)
//		{
//			if (PlayerX == x && PlayerY == y)
//			{
//				printf("P ");
//			}
//			else if (Maze[y][x] == Wall)
//			{
//				printf("# ");
//			}
//			else if (Maze[y][x] == Path)
//			{
//				printf(". ");
//			}
//			else if (Maze[y][x] == Start)
//			{
//				printf("S ");
//			}
//			else if (Maze[y][x] == End)
//			{
//				printf("E ");
//			}
//			else
//			{
//				// 절대 들어오면 안되는 곳 == 맵 데이터가 잘못된 것
//			}
//		}
//		printf("\n");
//	}
//}
//
//void FindStartPosition(int& OutStartX, int& OutStartY)
//{
//	for (int y = 0; y < MazeHeight; y++)
//	{
//		for (int x = 0; x < MazeWidth; x++)
//		{
//			if (Maze[y][x] == Start)
//			{
//				OutStartX = x;
//				OutStartY = y;
//				return;
//			}
//		}
//	}
//	OutStartX = 0;
//	OutStartY = 0;
//}
//
//int PrintAvailableMoves(int PlayerX, int PlayerY)
//{
//	int MoveFlags = DirNone;
//
//	printf("이동할 수 있는 방향을 선택하세요 (w:위 a:왼쪽 s:아래쪽 d:오른쪽):\n");
//	if (!IsWall(PlayerX, PlayerY - 1))
//	{
//		printf("W(↑) ");
//		MoveFlags |= DirUp;
//	}
//	if (!IsWall(PlayerX, PlayerY + 1))
//	{
//		printf("S(↓) ");
//		MoveFlags |= DirDown;
//	}
//	if (!IsWall(PlayerX - 1, PlayerY))
//	{
//		printf("A(←) ");
//		MoveFlags |= DirLeft;
//	}
//	if (!IsWall(PlayerX + 1, PlayerY))
//	{
//		printf("D(→) ");
//		MoveFlags |= DirRight;
//	}
//	printf("\n");
//
//	return MoveFlags;
//}
//
//bool IsWall(int X, int Y)
//{
//	bool isWall = false;
//	if (Y < 0 || Y >= MazeHeight ||
//		X < 0 || X >= MazeWidth ||
//		Maze[Y][X] == Wall)
//		isWall = true;
//	return isWall;
//}
//
//bool IsEnd(int X, int Y)
//{
//	return Maze[Y][X] == End;
//}
//
//MoveDirection GetMoveInput(int MoveFlags)
//{
//	char InputChar = 0;
//	MoveDirection Direction = DirNone;
//
//	while (true)
//	{
//		printf("방향을 입력하세요 : ");
//		std::cin >> InputChar;
//
//		if ((InputChar == 'w' || InputChar == 'W')
//			&& (MoveFlags & DirUp) /*!= 0*/)
//		{
//			Direction = DirUp;
//			break;
//		}
//		if ((InputChar == 's' || InputChar == 'S')
//			&& (MoveFlags & DirDown) /*!= 0*/)
//		{
//			Direction = DirDown;
//			break;
//		}
//		if ((InputChar == 'a' || InputChar == 'A')
//			&& (MoveFlags & DirLeft) /*!= 0*/)
//		{
//			Direction = DirLeft;
//			break;
//		}
//		if ((InputChar == 'd' || InputChar == 'D')
//			&& (MoveFlags & DirRight) /*!= 0*/)
//		{
//			Direction = DirRight;
//			break;
//		}
//
//		printf("잘못된 입력입니다. 이동할 수 있는 방향 중에서 선택하세요.\n");
//	}
//
//	return Direction;
	
	/* 
	내가 짠거
	const int MazeHeight = 10;
	const int MazeWidth = 20;

	// 미로 배열 (0:길, 1:벽, 2:시작, 3:출구)
	int Maze[MazeHeight][MazeWidth] =
	{
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,2,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,1,0,1},
		{1,1,1,1,0,1,0,1,1,0,1,0,1,1,0,1,0,1,0,1},
		{1,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1},
		{1,0,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1},
		{1,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1},
		{1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1},
		{1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,3,1},
		{1,0,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
	};


	    // 플레이어 시작점 (2)
		int PlayerX = 1;
		int PlayerY = 1;

		while (true)
		{
			// 미로 변신
			for (int y = 0; y < MazeHeight; y++)
			{
				for (int x = 0; x < MazeWidth; x++)
				{
					if (x == PlayerX && y == PlayerY)
					{
						printf("P ");          // 플레이어
					}
					else if (Maze[y][x] == 0)  // 길
					{
						printf(". ");
					}
					else if (Maze[y][x] == 1)  // 벽
					{
						printf("# ");
					}
					else if (Maze[y][x] == 2)  // 시작점
					{
						printf("S ");
					}
					else if (Maze[y][x] == 3)  // 출구
					{
						printf("E ");
					}
				}
				printf("\n");
			}
			// 이동
			char Input = 0;
			printf("이동할 수 있는 방향을 선택하세요 (w: 위, s: 아래, a: 왼쪽, d: 오른쪽): \n");
			printf("방향 입력: ");
			std::cin >> Input;

			int PlayerNewX = PlayerX;  // 바로 PlayerX로 하면 벽에 끼어서 되돌리는 코드 또 넣어야 됨.
			int PlayerNewY = PlayerY;
			if
				(Input == 'w' || Input == 'W')
				PlayerNewY--;
			else if
				(Input == 's' || Input == 'S')
				PlayerNewY++;
			else if
				(Input == 'a' || Input == 'A')
				PlayerNewX--;
			else if
				(Input == 'd' || Input == 'D')
				PlayerNewX++;
			// 이동 벽 확인 0 이면 가고 1이면 안감
			if (PlayerNewX >= 0 && PlayerNewX < MazeWidth && PlayerNewY >= 0 && PlayerNewY < MazeHeight)
			{
				if (Maze[PlayerNewY][PlayerNewX] != 1) // 벽이 아니면 이동
				{
					PlayerX = PlayerNewX;
					PlayerY = PlayerNewY;
				}
			}
			// 출구
			if (Maze[PlayerY][PlayerX] == 3)  // 아마 플레이어 위치를 임의로 정해서 그런듯
			{
				printf("축하합니다! 출구에 도착했습니다!\n");
				break;
			}
		}
	*/
}


//Day20250909_Practice1
void PointerParameter(int* pNumber)
{
	(*pNumber) = (*pNumber) * 2;  // 입력받은 주소에 있는 int 값을 2배로 만들기
}
void TestPointer(int* pInt, float pFloat)
{
	(*pInt) += 3;
	(pFloat) *= 0.5f;  // (pFloat) /= 2;  *과 / 중에 선택을 할 수 있는 상황이면 *가 성능상 유리하다.
}
void Day20250909_Practice1()
{
	//// 간단실습1
	//// Number라는 변수를 하나 선언하고 포인터 변수 p에 Number의 주소를 저장하기
	//// p를 이용해서 Number의 값을 변경 시키기

	//float Number = 123.0f;
	//int Number2 = 10;
	//float* p = nullptr;    // p는 완전히 비어있다.
	//p = &Number;
	////p = &Number2;   //int는 안된다. 데이터 타입이 같아야 함.

	//(*p) = 100.0f;

	//PointerParameter(&Number2);

	//// 간단실습2
	//// int*와 float*를 파라메터로 받은 함수 만들기
	//// int*로 받은 값은 3 더하기, float*로 받은 값은 절반으로 만들기
}
void Day20250909_Practice2()
{
    ////간단 실습
	////1. int 배열 할당받기 (첫 할당은 3개만)
	////2. 숫자를 입력받을 때마다 추가하기
	//const int ExitInput = -1;
	//const int StartSize = 3;

	//int* Array = new int[StartSize];
	//for (int i = 0; i < StartSize; i++)
	//{
	//	Array[i] = ExitInput;
	//}

	//int CurrentIndex = 0;
	//int CurrentSize = StartSize;
	//int InputNumber = 0;

	//while (InputNumber != ExitInput)
	//{
	//	printf("숫자 입력: ");
	//	std::cin >> InputNumber;

	//	Array[CurrentIndex] = InputNumber;
	//	CurrentIndex++;

	//	if (CurrentIndex >= CurrentSize)
	//	{
	//		int* newArray = new int[CurrentSize + 1];
	//		for (int i = 0; i < CurrentSize; i++)
	//		{
	//			newArray[i] = Array[i];
	//		}
	//		newArray[CurrentSize] = ExitInput;

	//		delete[] Array;
	//		Array = newArray;
	//		CurrentSize++;
	//	}
	//	for (int i = 0; i < CurrentSize; i++)
	//	{
	//		printf("%d ", Array[i]);
	//	}
	//	printf("\n");
	//}
	//delete[] Array;
	//Array = nullptr;
}
void Day20250909_Practice3()
{
	///*
	//	1. 가로 세로를 입력받아 배열을 생성하고 배열의 안을 0부터 1씩 증가하는 값으로 채우고 출력하기
	//	ex) 가로5 세로4
	//	0 1 2 3 4
	//	5 6 7 8 9
	//	10 11 12 13 14
	//	15 16 17 18 19
	//*/

	//int Width = 0;
	//int Height = 0;
	//printf("가로, 세로를 입력하세요: ");
	//std::cin >> Width >> Height;
	//int* Array = new int[Width * Height];

	//for (int y = 0; y < Height; y++)
	//{
	//	for (int x = 0; x < Width; x++)
	//	{
	//		Array[(y * Width) + x] = (y * Width) + x;
	//		printf("%d ", Array[y * Width + x]);
	//	}
	//	printf("\n");
	//}
}
void Day20250909_Practice4()
{
	///*
	//	3. 하이 로우
	//	   -컴퓨터가 1~100 사이의 임의의 숫자를 선택하고,
	//	   -사용자가 맞출 때까지 입력을 받아 "더 높게", "더 낮게" 등의 힌트를 제공하는 게임
	//	   -5번안에 맞춰야 승리
	//     ++ 하이로우 수정하기
	//	   -게임이 종료되었을 때 이때까지 플레이어가 입력한 모든 수를 출력해서 보여주기
	// */
	//
	//	int RandomNumber = rand() % 100 + 1;
	//	int PlayerNumber = 0;
	//	int CountDown = 5;
	//
	//	int* Array = new int[CountDown];
	//	int ArrayInPut = 0;
	//
	//	while (CountDown > 0)
	//	{
	//		int PlayerNumber = 0;
	//
	//		printf("1~100 사이의 숫자를 예상해 보세요 : ");
	//		std::cin >> PlayerNumber;
	//
	//		Array[ArrayInPut] = PlayerNumber;
	//		ArrayInPut++;
	//
	//		if (PlayerNumber < RandomNumber)
	//		{
	//			printf("더 큰 수를 찍어보세요\n");
	//		}
	//		else if (PlayerNumber > RandomNumber)
	//		{
	//			printf("더 작은 수를 찍어보세요\n");
	//		}
	//		else
	//		{
	//			printf("정답입니다!\n찾는 수는 %d였습니다.\n", RandomNumber);
	//			break;
	//		}
	//		CountDown--;
	//		printf("남은 회수는 %d번 입니다.\n", CountDown);
	//	}
	//	if (CountDown <= 0)
	//	{
	//		printf("실패했습니다.\n");
	//	}
	//
	//	printf("입력한 숫자: \n");
	//	for (int i = 0; i < ArrayInPut; i++)
	//	{
	//		printf("%d ", Array[i]);
	//	}
	//
	//	delete[] Array;
	//	Array = nullptr;
	//}
}
void Day20250909_Practice5()
{
 //   /*
 //      3. 미로 탈출 게임 수정하기
 //   	- 이동했을 때 일정확률(20 %)로 전투가 발생한다.
 //   	- 이동했을 때 일정확률(10 %)로 플레이어 HP가 회복된다.
 //   	- 두 이벤트는 중복으로 발생하지 않는다.
 //   */

	//std::random_device Random;
	//std::mt19937 RandomEngine(Random());
	//std::uniform_int_distribution<int> DamageDist(5, 15);
	//std::uniform_int_distribution<int> PercentDist(1, 100); // 확률

	//enum EventType
	//{
	//	Battle = 0,
	//	Heal = 1,
	//	EventNone = 2,
	//};

	//EventType GetMoveEvent()
	//{
	//	int RandomNumber = PercentDist(RandomEngine);

	//	if (RandomNumber <= 20)
	//		return Battle;
	//	else if (RandomNumber <= 30)
	//		return Heal;
	//	else
	//		return EventNone;
	//}

	//void RunBattle(int& PlayerHp)
	//{
	//	const int StartHp = 100;
	//	int EnemyHp = StartHp;

	//	while (PlayerHp > 0 && EnemyHp > 0)
	//	{
	//		int PlayerDamage = DamageDist(RandomEngine);
	//		int CriticalDamage = PercentDist(RandomEngine);  // 크리티컬 데미지

	//		if (CriticalDamage <= 10)
	//		{
	//			PlayerDamage = PlayerDamage * 2;
	//			printf("플레이어 크리티컬 공격!\n");
	//		}
	//		else
	//		{
	//			printf("플에이어 공격!\n");
	//		}
	//		EnemyHp = EnemyHp - PlayerDamage;

	//		if (EnemyHp <= 0)
	//		{
	//			printf("적에게 %d 데미지 -> 적 체력: 0\n", PlayerDamage);
	//			break;
	//		}
	//		else
	//		{
	//			printf("적에게 %d 데미지 -> 적 체력: %d\n", PlayerDamage, EnemyHp);
	//		}

	//		//적 턴
	//		int EnemyDamage = DamageDist(RandomEngine);
	//		int EnemyCritical = PercentDist(RandomEngine);

	//		if (EnemyCritical <= 10)
	//		{
	//			EnemyDamage = EnemyDamage * 2;
	//			printf("적 크리티컬 공격! ");
	//		}
	//		else
	//		{
	//			printf("적 공격! ");
	//		}
	//		PlayerHp = PlayerHp - EnemyDamage;

	//		if (PlayerHp <= 0)
	//		{
	//			printf("플레이어에게 %d 데미지 → 플레이어 HP: 0\n", EnemyDamage);
	//			break;
	//		}
	//		else
	//		{
	//			printf("플레이어에게 %d 데미지 → 플레이어 HP: %d\n", EnemyDamage, PlayerHp);
	//		}
	//	}

	//	if (PlayerHp > 0 && EnemyHp <= 0)
	//	{
	//		printf("플레이어 승리!");
	//	}
	//	else if (EnemyHp > 0 && PlayerHp <= 0)   // 중복 없애
	//	{
	//		printf("적 승리!\n");
	//	}
	//}

	//int main()
	//{
	//	const int MazeHeight = 10;
	//	const int MazeWidth = 20;

	//	// 미로 배열 (0:길, 1:벽, 2:시작, 3:출구)
	//	int Maze[MazeHeight][MazeWidth] =
	//	{
	//		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	//		{1,2,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,1,0,1},
	//		{1,1,1,1,0,1,0,1,1,0,1,0,1,1,0,1,0,1,0,1},
	//		{1,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1},
	//		{1,0,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1},
	//		{1,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1},
	//		{1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1},
	//		{1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,3,1},
	//		{1,0,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1},
	//		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
	//	};

	//	// 플레이어 시작점 
	//	int PlayerX = 0;
	//	int PlayerY = 0;

	//	for (int y = 0; y < MazeHeight; y++)
	//	{
	//		for (int x = 0; x < MazeWidth; x++)
	//		{
	//			if (Maze[y][x] == 2)
	//			{
	//				PlayerX = x;
	//				PlayerY = y;
	//			}
	//		}
	//	}
	//	while (true)
	//	{
	//		// 미로 변신
	//		for (int y = 0; y < MazeHeight; y++)
	//		{
	//			for (int x = 0; x < MazeWidth; x++)
	//			{
	//				if (x == PlayerX && y == PlayerY)
	//				{
	//					printf("P ");          // 플레이어
	//				}
	//				else if (Maze[y][x] == 0)  // 길
	//				{
	//					printf(". ");
	//				}
	//				else if (Maze[y][x] == 1)  // 벽
	//				{
	//					printf("# ");
	//				}
	//				else if (Maze[y][x] == 2)  // 시작점
	//				{
	//					printf("S ");
	//				}
	//				else if (Maze[y][x] == 3)  // 출구
	//				{
	//					printf("E ");
	//				}
	//			}
	//			printf("\n");
	//		}
	//		// 이동
	//		char Input = 0;
	//		printf("이동할 수 있는 방향을 선택하세요 (w: 위, s: 아래, a: 왼쪽, d: 오른쪽): \n");
	//		printf("방향 입력: ");
	//		std::cin >> Input;

	//		int PlayerNewX = PlayerX;  // 바로 PlayerX로 하면 벽에 끼어서 되돌리는 코드 또 넣어야 됨.
	//		int PlayerNewY = PlayerY;
	//		if
	//			(Input == 'w' || Input == 'W')
	//			PlayerNewY--;
	//		else if
	//			(Input == 's' || Input == 'S')
	//			PlayerNewY++;
	//		else if
	//			(Input == 'a' || Input == 'A')
	//			PlayerNewX--;
	//		else if
	//			(Input == 'd' || Input == 'D')
	//			PlayerNewX++;
	//		// 이동 벽 확인 0 이면 가고 1이면 안감
	//		if (PlayerNewX >= 0 && PlayerNewX < MazeWidth &&
	//			PlayerNewY >= 0 && PlayerNewY < MazeHeight)
	//		{
	//			if (Maze[PlayerNewY][PlayerNewX] != 1)   // 벽이 아니면 이동
	//			{
	//				PlayerX = PlayerNewX;
	//				PlayerY = PlayerNewY;
	//			}
	//			//이벤트
	//			EventType Result = GetMoveEvent();
	//			int PlayerHp = 100;

	//			if (Result == Battle)
	//			{
	//				printf("전투 발생!\n");
	//				RunBattle(PlayerHp);                 // 전투 시작
	//				if (PlayerHp <= 0)
	//				{
	//					printf("게임 오버!\n");
	//					break;
	//				}
	//			}
	//			else if (Result == Heal)
	//			{
	//				int RecoverHp = 30;                    // 고정 회복
	//				PlayerHp += RecoverHp;
	//				if (PlayerHp > 100)
	//					PlayerHp = 100;                  // 최대치 보정
	//				printf("체력 회복! +%d → 현재 체력: %d/100\n", RecoverHp, PlayerHp);
	//			}
	//			else
	//			{
	//				printf("아무 일도 없음!\n");
	//			}
	//		}
	//		// 출구
	//		if (Maze[PlayerY][PlayerX] == 3)  // 아마 플레이어 위치를 임의로 정해서 그런듯
	//		{
	//			printf("축하합니다! 출구에 도착했습니다!\n");
	//			break;
	//		}
	//	}
	//	return 0;
	//}
}

void Day20250910_파싱()
{
//#include <direct.h> //추가
//char Working[256];
//if (_getcwd(Working, 256) != nullptr)
//{
//	printf("작업 디렉토리 : %s\n", Working);
//}
//
////파일 읽기
//ReadFile();
//void ReadFile()
//{
//	//#include <fstream>	#include <string> 필요
//	const char* FilePath = ".\\Data\\TestData.txt";
//
//	std::ifstream InputFile(FilePath);
//	if (!InputFile.is_open())	// 파일이 열렸는지 확인하는 함수
//	{
//		printf("파일을 열 수 없습니다.\n");
//		printf("[%s] 경로를 확인하세요.\n", FilePath);
//		return;
//	}
//
//	std::string FileContents(
//		(std::istreambuf_iterator<char>(InputFile)),
//		std::istreambuf_iterator<char>());	//InputFile에 있는 글자들을 모두 읽어서 FileContents에 저장하기
//
//	printf("파일 내용은 다음과 같습니다.\n");
//	printf("%s\n", FileContents.c_str());	// FileContents안에 있는 문자열을 const char*로 돌려주는 함수
//}
//
//void TestString()
//{
//	//#include <string>
//	std::string str1 = "Hello";
//	std::string str2("World");	// str1보다 이쪽이 더 바람직하다
//
//	const char* Temp1 = "Hello";
//	char Temp2[32] = { 0 };
//	//Temp2 = Temp1;
//	//char* Temp3 = Temp1;
//
//	std::string str3 = str1;		// 복사
//	size_t Length = str3.length();	// 길이 확인
//	//int Size = Length;	// 크기가 안맞아서 짤릴 수 있다.
//	Length = str3.size();
//
//	std::string str4 = str1 + " " + str2;	// str4 = "Hello World", + 방식은 성능에 문제가 있을 수 있다.
//	str4 += "!";
//
//	if (str1 == str2)
//	{
//
//	}
//	if (str1 != str2)
//	{
//
//	}
//	if (str1 > str2)	// 사전 순서대로 비교
//	{
//
//	}
//
//	size_t Position = str1.find('e');
//	// 발견을 못했으면 std::string::npos 리턴
//	Position = str1.find('e', Position + 1);	// 두번째 e를 찾을 때(첫번째 e가 발견되었다는 전제하에)
//
//	str1[1] = 'E';	// 특정 위치의 글자에 접근하기. 인덱스 범위 확인을 안함. 런타임 에러가 뜰 수 있음
//	//str1[10] = 'E';	// 터짐
//	str1.at(1) = 'E';	// 안전하게 접근
//
//	str1.c_str();	// C스타일 문자열 접근하기
 }

void Day20250910_Practice1()
{
	    //int main()
		//{
		//	char HelloString[14];
		//	HelloString[0] = 'H';
		//	HelloString[1] = 'e';
		//	HelloString[2] = 'l';
		//	HelloString[3] = 'l';
		//	HelloString[4] = 'o';
		//	HelloString[5] = ' ';
		//	HelloString[6] = 'W';
		//	HelloString[7] = 'o';
		//	HelloString[8] = 'r';
		//	HelloString[9] = 'l';
		//	HelloString[10] = 'd';
		//	HelloString[11] = '!';
		//	HelloString[12] = '\n';
		//	HelloString[13] = '\0';
		//	//char HelloString[] = { 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\n' };
		//	//char HelloString[] = "Hello World!\n";
		//
		//	printf("%s", HelloString);	// 문자열 출력하기
		//
		//	HelloString[5] = '\0';
		//	printf("%s", HelloString);	// Hello만 출력됨
		//
		//
		//
		//
		//	// 간단 실습
		//	// HelloString에서 'e'가 몇번째에 있는지 출력해보기
		//	//int Index = 0;
		//	//char Target = 'e';
		//	//bool IsFind = false;
		//	//while (HelloString[Index] != '\0')
		//	//{
		//	//	if (HelloString[Index] == Target)
		//	//	{
		//	//		IsFind = true;
		//	//		break;
		//	//	}
		//	//	Index++;
		//	//}
		//	//if (IsFind)
		//	//{
		//	//	printf("[%c]는 %d번 인덱스에 있습니다.\n", Target, Index);
		//	//}
		//	//else
		//	//{
		//	//	printf("[%c]는 찾을 수 없습니다.\n", Target);
		//	//}
		//
		//	char Target = 'e';
		//	int Index = FindCharIndex(HelloString, Target);
		//	if (Index >= 0)
		//	{
		//		printf("[%c]는 %d번 인덱스에 있습니다.\n", Target, Index);
		//	}
		//	else
		//	{
		//		printf("[%c]는 찾을 수 없습니다.\n", Target);
		//	}
		//}
		//
		//int FindCharIndex(const char* TargetString, const char TargetCharacter)
		//{
		//	int Index = 0;
		//	bool IsFind = false;
		//	while (TargetString[Index] != '\0')
		//	{
		//		if (TargetString[Index] == TargetCharacter)
		//		{
		//			IsFind = true;
		//			break;
		//		}
		//		Index++;
		//	}
		//
		//	if (!IsFind)
		//	{
		//		Index = -1;
		//	}
		//	return Index;
		//}
}
void Day20250910_Practice2()
{
/*
	char HelloString[14];
	HelloString[0] = 'H';
	HelloString[1] = 'e';
	HelloString[2] = 'l';
	HelloString[3] = 'l';
	HelloString[4] = 'o';
	HelloString[5] = ' ';
	HelloString[6] = 'W';
	HelloString[7] = 'o';
	HelloString[8] = 'r';
	HelloString[9] = 'l';
	HelloString[10] = 'd';
	HelloString[11] = '!';
	HelloString[12] = '\n';
	HelloString[13] = '\0';
	//char HelloString[] = { 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\n' };
	//char HelloString[] = "Hello World!\n";

	printf("%s", HelloString);	// 문자열 출력하기

	HelloString[5] = '\0';
	printf("%s", HelloString);	// Hello만 출력됨

	// 간단 실습
	// HelloString에서 'e'가 몇번째에 있는지 출력해보기

	printf("\n\n\n\n\n\n\n\n\n\n\n");
	//int Index = 0;
	//char Target = 'e';
	//bool IsFind = false;
	//while (HelloString[Index] != '\0')
	//{
	//	if (HelloString[Index] == Target)
	//	{
	//		IsFind = true;
	//		break;
	//	}
	//	Index++;
	//}
	//if (IsFind)
	//{
	//	printf("[%c]는 %d번 인덱스에 있습니다.\n", Target, Index);
	//}
	//else
	//{
	//	printf("[%c]는 찾을 수 없습니다.\n", Target);
	//}

	char Target = 'e';
	int Index = FindCharIndex(HelloString, Target);
	if (Index >= 0)
	{
		printf("[%c]는 %d번 인덱스에 있습니다.\n", Target, Index);
	}
	else
	{
		printf("[%c]는 찾을 수 없습니다.\n", Target);
	}

	// 실습
	// 1. 문자열의 길이를 측정하는 함수 만들기
	// int MyStringLength(const char* Target);
	const char* TestString = "Hello";
	int Length = MyStringLength(TestString);
	printf("\n\n문자열 길이 측정\n");
	printf("[%s]의 길이는 %d입니다.", TestString, Length);

	// 2. 문자열을 복사하는 함수 만들기
	// void MyStringCopy(const char* Source, char* Destination);
	char Destination[256] = { 0 };	// 크기는 그냥 충분하다고 가정
	char* Destination2 = new char[MyStringLength(TestString) + 1];	// +1은 '\0'용 공간
	MyStringCopy(TestString, Destination2);
	printf("\n\n문자열 복사하기\n");
	printf("Source\t\t: %s\n", TestString);
	printf("Destination\t: %s\n", Destination2);
	delete[] Destination2;
	Destination2 = nullptr;

	// 3. 문자열을 합치는 함수 만들기(Source 뒤에 Destination의 내용을 붙이기)
	//	void MyStringCat(char* Source, const char* Destination);
	printf("\n\n문자열 합치기\n");
	char TestSource[32] = "Hello";
	printf("원본 : %s\n", TestSource);
	MyStringCat(TestSource, " World!");
	printf("결과 : %s\n", TestSource);


    //4. 문자열 두개를 비교하는 함수 만들기
    //리턴 값이 두 문자열이 같으면 0, 첫번째가 작으면 음수, 두번째가 작으면 양수
    //int MyStringCompare(const char* String1, const char* string2);
      int MyStringCompare(const char* String1, const char* String2)
    	{

		int Index = 0;

		while (String1[Index] != '\0' && String2[Index] != '\0')
		{
			if (String1[Index] != String2[Index])
			{
				break;
			}
			Index++;
		}
		// 둘 다 \0 가 되었다.        -> 둘의 길이가 같고 안의 글자들도 같았다.
		// 하나만 \0 가 되었다.       -> 둘의 길이가 다르다. -> 서로 다르다.
		// 중간에 다른 곳이 있었다.   -> 서로 다르다.
		return String1[Index] - String2[Index];
	 }
	//printf("car , cat %d", MyStringCompare("car", "cat\n"));
	//printf("apple, banana %d", MyStringCompare("apple", "banana\n"));


	//5. 문자열을 입력 받아 정수를 리턴하는 함수 만들기
	int MyAtoI(const char* Source)
	{
		int Index = 0;
		int Result = 0;
		while (Source[Index] != '\0')
		{
			Result = Result * 10 + (Source[Index] - '0');
			Index++;
		}
		return Result;
	}
	const int Size = 32;
	char InputString[Size];
	std::cin.getline(InputString, Size);
	int Number = MyAtoI(InputString);
	printf("입력된 숫자는 %d입니다.", Number);


	//6. 문자열을 입력 받아 실수를 리턴하는 함수 만들기
	float MyAtoF(const char* Source)
	{
		int Index = 0;
		float Result = 0.0f;

		while (Source[Index] != '\0')
		{
			Result = Result * 10.0f + (Source[Index] - '0');
			Index++;
		}
		return Result;
	}

	int main()
	{
		const int Size = 32;
		char InputString[Size];
		std::cin.getline(InputString, Size);
		float Number = MyAtoF(InputString);
		printf("입력된 숫자는 %.4f입니다.", Number);

		return 0;
	}

	const int Size = 32;
	char InputString[Size];
	printf("\n\n문장을 입력하세요 : ");
	std::cin.getline(InputString, Size);
	printf("입력된 문장은 [%s]입니다.\n", InputString);

	// 간단 실습
	// ,뒤에 있는 영어 알파벳은 모두 대문자이어야 한다.
	// 입력문장 예시 : "Hello,World!"
	// 출력문장 예시 : "Hello,WORLD!"
	SimpleParser(InputString, ',');
	printf("파싱된 문장은 [%s]입니다.\n", InputString);
}

int FindCharIndex(const char* TargetString, const char TargetCharacter)
{
	int Index = 0;
	bool IsFind = false;
	while (TargetString[Index] != '\0')
	{
		if (TargetString[Index] == TargetCharacter)
		{
			IsFind = true;
			break;
		}
		Index++;
	}

	if (!IsFind)
	{
		Index = -1;
	}
	return Index;
}

int MyStringLength(const char* Target)
{
	int Length = 0;
	while (Target[Length] != '\0')
	{
		Length++;
	}
	return Length;
}

void MyStringCopy(const char* Source, char* Destination)
{
	int Index = 0;
	while (Source[Index] != '\0')
	{
		Destination[Index] = Source[Index];
		Index++;
	}
	Destination[Index] = '\0';
}

void MyStringCat(char* Source, const char* Destination)
{
	int SourceLast = MyStringLength(Source);
	int Index = 0;
	while (Destination[Index] != '\0')
	{
		Source[SourceLast + Index] = Destination[Index];
		Index++;
	}
	Source[SourceLast + Index] = '\0';
}

void SimpleParser(char* Source, const char Delimiter)
{
	int CommaIndex = FindCharIndex(Source, Delimiter); // (InputString, ',');
	char* AfterComma = Source + CommaIndex + 1;
	const int ToUpperGap = 'a' - 'A';
	while ((*AfterComma) != '\0')
	{
		if ((*AfterComma) >= 'a' && (*AfterComma) <= 'z')
		{
			(*AfterComma) -= ToUpperGap;
		}
		AfterComma++;
	}
}
*/
}

void Day20250910_Practice3()
{

}
void Day20250910_Practice4()
{

}
void Day20250910_Practice5() {

}
void Day20250910_Practice6() {

}
void Day20250910_Practice7() {

}
void Day20250910_Practice8() {

}
void Day20250910_Practice9() {

}