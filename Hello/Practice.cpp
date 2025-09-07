#include <iostream>
#include <stdio.h>
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

}
