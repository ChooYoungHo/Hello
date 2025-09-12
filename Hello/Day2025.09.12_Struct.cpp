#include "Day2025.09.12_Struct.h"

/*
����ü(Struct)
   - ���� ������ ������Ÿ���� �ϳ��� ���� �� ���
   - ���α׷��� �ڵ��� �������� ���� �������� ������ �ش�.
	  Struct Enemy
	  {
		 std::string Name;
		 float Health;
		 float AttackPower;
		 int DropGold;
	  }
	  Enemy goblin;      // �� �ϳ��� ���� ���� �����
	  Enemy goblins[3];  // �� 3������ ���� ���� �����

   - ����ü ���� �Ҵ��ϴ� ��
	  Enemy* pGoblin = new Enemy(); // ����ü�� () �־�� �ȴ�. �� ���� �����Ҵ� ����
	  delete pGoblin;               // �����Ҵ� ���� ���� ����
	  pGoblin = nullptr;

   - ����ü ������ ���ٹ�
	  - �Ϲ����� ��� ��(.) ������ ���
		 goblin.Name = "���";
		 goblin.Health = 20;
	  - ������ ������ ��� ȭ��ǥ(->)������ ���
		 pGoblin->AttackPower = 5.0f;
		 pGoblin->DropGold = 100;
*/
/*
struct Enemy
{
	// �ɹ� ������
	std::string Name = "���";
	float Health = 100.0f;
	float AttackPower = 10.0f;
	int DropGold = 100;
};
*/

void Day20250912_Struct()
{
	//1. ��� �����Ҵ� �޾ƺ���(�ɹ� ���� 4���� �����ϱ�)
	//2. �ٸ� ����ü ������(ex:������, ����, ��)

	Enemy Goblin;
	Goblin.Name = "���1ȣ";
	printf("�̸� : %s\n", Goblin.Name.c_str());
	printf("����� : %.1f\n", Goblin.Health);
	printf("���ݷ� : %.1f\n", Goblin.AttackPower);
	printf("���� : %d Gold\n", Goblin.DropGold);

	// 1. ��� �����Ҵ� �޾ƺ���(�ɹ� ���� 4���� �����ϱ�)
	Enemy* pGoblin = new Enemy();
	pGoblin->Name = "���2ȣ";
	pGoblin->Health = static_cast<float>(rand() % 100 + 50);	// 50~150
	pGoblin->AttackPower = static_cast<float>(rand() % 10 + 5);	// 5~15
	pGoblin->DropGold = static_cast<int>(pGoblin->Health * pGoblin->AttackPower);
	PrintEnemy(pGoblin);
	delete pGoblin;
	pGoblin = nullptr;

	// 2. �ٸ� ����ü ������(ex:������, ����, ��)
	Weapon Sword;
	Sword.Name = "��ö��";
	Sword.Desc = "ưư�ϴ�.";
	Sword.AttackPower = 15.0f;
	Sword.Price = 200;

	//Enemy Goblins[3];
	Enemy* Goblins = nullptr;
	Goblins = new Enemy[3];
	for (int i = 0; i < 3; i++)
	{
		// std::to_string : ���ڿ��� �ƴѰ��� string���� �������ִ� �Լ�.
		Goblins[i].Name = "���" + std::to_string(i + 1) + "ȣ";  
		PrintEnemy(&Goblins[i]);
	}
	delete[] Goblins;
	Goblins = nullptr;

	Enemy NamedGoblin("���� ���");
	PrintEnemy(&NamedGoblin);

	Enemy* pModiGoblin = new Enemy("��� ���", 5.0f);
	PrintEnemy(pModiGoblin);
	delete pModiGoblin;
	pModiGoblin = nullptr;

	Enemy CopyGoblin(NamedGoblin);	// ���� ������
	PrintEnemy(&CopyGoblin);
}


void Day20250912_OperatorOverloading()
{
	Enemy Goblin1("���1ȣ");
	Enemy Goblin2("���2ȣ");

	Enemy FusionGoblin = Goblin1 + Goblin2;
	PrintEnemy(&FusionGoblin);
}

void PrintEnemy(const Enemy* pEnemy)
{
	printf("�̸� : %s\n", pEnemy->Name.c_str());
	printf("����� : %.1f\n", pEnemy->Health);
	printf("���ݷ� : %.1f\n", pEnemy->AttackPower);
	printf("���� : %d Gold\n", pEnemy->DropGold);
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



