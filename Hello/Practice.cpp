#include <iostream>
#include <stdio.h>
#include <random>
#include "Practice.h"

void TestClass::TestFunc()
{
	// 동작 구현
}

void Practice20250904()
{
	//공포게임의 인벤토리를 비트플래그로 표현하기
	//아이템 종류를 나타내는 enum을 만들고
	//특정 아이템을 추가하고 삭제하는 예시 보여주기
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


void Practice20250908()
{
	//int main()
	//{
	//	//1. 배열 만들고 초기화 해보기
	//	int Numbers[3] = { 5, 8, 3 };

	//	//2.배열의 모둔 요소의 값을 더하고 평균 구하기
	//	int Sum = 0;
	//	float Average = 0.0f;
	//	int ArrayCount = static_cast<int>(sizeof(Numbers) / sizeof(Numbers[0]));
	//	for (int i = 0; i < ArrayCount; i++)
	//	{
	//		Sum += Numbers[i];
	//	}
	//	Average = Sum / static_cast<float>(ArrayCount);
	//	printf("평균: %.2f\n", Average);

	//	//3. 배열의 모든 요소 중 최대값과 최소값 구하기
	//	int MaxNumber = INT_MIN;
	//	int MinNumber = INT_MAX;
	//	for (int i = 0; i < ArrayCount; i++)
	//	{
	//		if (MaxNumber < Numbers[i])
	//		{
	//			MaxNumber = Numbers[i];
	//		}
	//		if (MinNumber > Numbers[i])
	//		{
	//			MinNumber = Numbers[i];
	//		}
	//	}
	//	return 0;
	//}
}