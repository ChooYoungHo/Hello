#include "Day2025.09.12_Struct.h"

/*
구조체(Struct)
   - 여러 종류의 데이터타입을 하나로 묶을 때 사용
   - 프로그램의 코드의 가독성과 유지 보수성을 향상시켜 준다.
	  Struct Enemy
	  {
		 std::string Name;
		 float Health;
		 float AttackPower;
		 int DropGold;
	  }
	  Enemy goblin;      // 적 하나에 대한 정보 만들기
	  Enemy goblins[3];  // 적 3마리에 대한 정보 만들기

   - 구조체 동적 할당하는 법
	  Enemy* pGoblin = new Enemy(); // 구조체는 () 넣어야 된다. 새 적을 동적할당 받음
	  delete pGoblin;               // 동적할당 받을 것을 해제
	  pGoblin = nullptr;

   - 구조체 데이터 접근법
	  - 일반적인 경우 점(.) 연산자 사용
		 goblin.Name = "고블린";
		 goblin.Health = 20;
	  - 포인터 변수인 경우 화살표(->)연산자 사용
		 pGoblin->AttackPower = 5.0f;
		 pGoblin->DropGold = 100;
*/
/*
struct Enemy
{
	// 맴버 변수들
	std::string Name = "고블린";
	float Health = 100.0f;
	float AttackPower = 10.0f;
	int DropGold = 100;
};
*/

void Day20250912_Struct()
{
	//1. 고블린 동적할당 받아보기(맴버 변수 4개도 조절하기)
	//2. 다른 구조체 만들어보기(ex:아이템, 무기, 방어구)

	Enemy Goblin;
	Goblin.Name = "고블린1호";
	printf("이름 : %s\n", Goblin.Name.c_str());
	printf("생명력 : %.1f\n", Goblin.Health);
	printf("공격력 : %.1f\n", Goblin.AttackPower);
	printf("보상 : %d Gold\n", Goblin.DropGold);

	// 1. 고블린 동적할당 받아보기(맴버 변수 4개도 조절하기)
	Enemy* pGoblin = new Enemy();
	pGoblin->Name = "고블린2호";
	pGoblin->Health = static_cast<float>(rand() % 100 + 50);	// 50~150
	pGoblin->AttackPower = static_cast<float>(rand() % 10 + 5);	// 5~15
	pGoblin->DropGold = static_cast<int>(pGoblin->Health * pGoblin->AttackPower);
	PrintEnemy(pGoblin);
	delete pGoblin;
	pGoblin = nullptr;

	// 2. 다른 구조체 만들어보기(ex:아이템, 무기, 방어구)
	Weapon Sword;
	Sword.Name = "강철검";
	Sword.Desc = "튼튼하다.";
	Sword.AttackPower = 15.0f;
	Sword.Price = 200;

	//Enemy Goblins[3];
	Enemy* Goblins = nullptr;
	Goblins = new Enemy[3];
	for (int i = 0; i < 3; i++)
	{
		// std::to_string : 문자열이 아닌것을 string으로 변경해주는 함수.
		Goblins[i].Name = "고블린" + std::to_string(i + 1) + "호";  
		PrintEnemy(&Goblins[i]);
	}
	delete[] Goblins;
	Goblins = nullptr;

	Enemy NamedGoblin("보스 고블린");
	PrintEnemy(&NamedGoblin);

	Enemy* pModiGoblin = new Enemy("모디 고블린", 5.0f);
	PrintEnemy(pModiGoblin);
	delete pModiGoblin;
	pModiGoblin = nullptr;

	Enemy CopyGoblin(NamedGoblin);	// 복사 생성자
	PrintEnemy(&CopyGoblin);
}


void Day20250912_OperatorOverloading()
{
	Enemy Goblin1("고블린1호");
	Enemy Goblin2("고블린2호");

	Enemy FusionGoblin = Goblin1 + Goblin2;
	PrintEnemy(&FusionGoblin);
}

void PrintEnemy(const Enemy* pEnemy)
{
	printf("이름 : %s\n", pEnemy->Name.c_str());
	printf("생명력 : %.1f\n", pEnemy->Health);
	printf("공격력 : %.1f\n", pEnemy->AttackPower);
	printf("보상 : %d Gold\n", pEnemy->DropGold);
}




void TestPosition()
{
	Position p1(2, 3);
	Position p2(5, 1);
	Position sum = p1 + p2;   // sum.x == 7, sum.y == 4
	Position diff = p1 - p2;  // diff.x == -3, diff.y == 2 
	printf("p1 : (%d, %d)\n", p1.x, p1.y);
	printf("p2 : (%d, %d)\n", p2.x, p2.y);
	printf("sum : (%d, %d)\n", sum.x, sum.y);
	printf("diff : (%d, %d)\n", diff.x, diff.y);
}



