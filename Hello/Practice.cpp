#include <iostream>
#include <stdio.h>
#include <random>
#include "Practice.h"

void TestClass::TestFunc()
{
	// ���� ����
}

void Practice20250904()
{
	//���������� �κ��丮�� ��Ʈ�÷��׷� ǥ���ϱ�
	//������ ������ ��Ÿ���� enum�� �����
	//Ư�� �������� �߰��ϰ� �����ϴ� ���� �����ֱ�
	// �ι��丮 ���� ����ϱ� (�κ��丮�� ��Ʈ���뿡 ���� ���)
	// 1�� : ������ �߰�, 2�� : ������ ������, 3�� : ����
	// �̹� �ִ� �������� �߰��Ϸ����ϸ� "�̹� �ִ� �������Դϴ�." ���
	// ���� �������� ���������ϸ� "���� �������Դϴ�." ���

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
	//	//Inventory = 0b1111;  //  �׽�Ʈ �ڵ�
	//
	//	int PlayerSelect = -1;
	//
	//	while (PlayerSelect != 3)
	//	{
	//		printf("� ���� �ұ�� [1:������ �߰�, 2: ������ ����, 3. ����]: ");
	//		std::cin >> PlayerSelect;
	//
	//		switch (PlayerSelect)
	//		{
	//		case 1:
	//		{
	//			printf("� �������� �߰� �ұ��?: [0:����, 1:ǻ��, 2:å, 3:����]: ");
	//			int AddItem = 0;
	//			std::cin >> AddItem;
	//			Inventory |= (1 << AddItem);
	//		}
	//		break;
	//		case 2:
	//		{
	//			printf("� �������� �߰� �ұ��?: [0:����, 1:ǻ��, 2:å, 3:����]: ");
	//			int RemoveItem = 0;
	//			std::cin >> RemoveItem;
	//			Inventory &= (~(1 << RemoveItem));
	//		}
	//		break;
	//		case 3:
	//			continue;
	//		default:
	//			//���� ����ϱ�
	//			break;
	//		}
	//	}
	//
	//	printf("�κ��丮 : ");    // �κ��丮 ���� ���
	//	if ((Inventory & Key) != 0)  // �������� �ִ°�
	//	{
	//		printf("���� ");
	//	}
	//	if ((Inventory & Fuse) != 0)  
	//	{
	//		printf("ǻ�� ");
	//	}
	//	if ((Inventory & Book) != 0) 
	//	{
	//		printf("å ");
	//	}if ((Inventory & Note) != 0)  
	//	{
	//		printf("���� ");
	//	}
	//}


	//���� �κ��丮//

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
	//		printf("1�� : ������ �߰�, 2�� : ������ ������, 3�� : ����\n");
	//		std::cin >> Select;
	//		if (Select == 1)
	//		{
	//			int AddItem = 0;
	//			printf("�߰��� ������ ���� (1: Gun, 2: Bullet, 3: Sword, 4: Shield) : ");
	//			std::cin >> AddItem;
	//			if (AddItem == 1)
	//			{
	//				if ((Inventory & Item::Gun) != 0)
	//				{
	//					printf("�̹� �ִ� �������Դϴ�.\n");
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
	//					printf("�̹� �ִ� �������Դϴ�.\n");
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
	//					printf("�̹� �ִ� �������Դϴ�.\n");
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
	//					printf("�̹� �ִ� �������Դϴ�.\n");
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
	//			printf("���� ������ ���� (1: Gun, 2: Bullet, 3: Sword, 4: Shield) : ");
	//			std::cin >> RemoveItem;
	//			if (RemoveItem == 1)
	//			{
	//				if ((Inventory & Item::Gun) == 0)
	//				{
	//					printf("���� �������Դϴ�.\n");
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
	//					printf("���� �������Դϴ�.\n");
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
	//					printf("���� �������Դϴ�.\n");
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
	//					printf("���� �������Դϴ�.\n");
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
	9/4 �ǽ�
	�ֻ��� ���� �����
	�ʱ� ����
	�÷��̾�� ��ǻ�� ��� ���� �ݾ�(��: 10000��)���� �����Ѵ�.
	1�� �ֻ��� ������
	���� ���� ��, �÷��̾�� ��ǻ�Ͱ� ���� �ֻ���(1~6)�� �� �� ������.
	���� �ֻ��� ����� �����Ѵ�.
	����
	���� �ǿ��� �� ���� ���� �ݾ��� �����Ѵ�.
	������ ���� �ݾ��� �� ��� ����� ���� ���� �ݾ� �����̾�� �Ѵ�.
	���� �ݾ��� �� ��� ��ο��Լ� �����ȴ�.
	2�� �ֻ��� ������
	�ٽ� �÷��̾�� ��ǻ�Ͱ� ���� �ֻ����� �� ���� ������.
	(1��+2��) �ֻ����� ���� ����Ѵ�.
	���� ���� �� �ݾ� ����
	���� �� ū ���� ���� �ݾ��� ����(��, 2�����ñݾ�)�� ��� ��������.
	������ ��� ���� �ݾ��� �״�� ��ȯ�Ѵ�.
	���� �� ����
	�������� 0 ������ ���� ������ ���� ����.



	9/4
	Ȧ¦ ����
	�ʱ� �ݾ� �� ����
	�÷��̾�� �⺻�� 100������ ������ �����Ѵ�.
	Ȧ¦ ����
	�÷��̾ 1(Ȧ) �Ǵ� 2(¦)�� �����Ѵ�.
	��� ����
	��ǻ�Ͱ� �������� 1(Ȧ) �Ǵ� 2(¦)�� �����Ѵ�.
	�÷��̾��� ���ð� ����� ��ġ�ϸ� �¸�(�̱�� ���ñ��� 2�� ȹ��), �ٸ��� �й�(���ñ� ���� ����).
	���� ���� ����
	�¸� �� �÷��̾�� �� ���� �� �ϳ��� ����:
	(A) �̱� �ݾ��� ��� �ٽ� �� ���� ���� (���� ����)
	(B) �̱� �ݾ��� ���, �ٽ� 100������ ���� ���� ����
	���� ���� ����
	�÷��̾ �������� 100�� �̸��� ��� ���� ����.
	*/
}




void Practice20250905()
{

/*
//1. Ư�� �������� ������ ���� �����ϴ� �Լ�
//- int �Ķ���Ͱ� 2��
//- int ����
int main()
{
	int num = Random(1, 10); // 1~10 ���� ����
	printf("���� ����: %d\n", num);

	return 0;
   }
*/

/*
//2. ������� ���̸� �Է��� �ּ��� : �� �� ������� 00�� �Դϴ١�
//- int �Ķ���� 1��
int main()
{
	int Age = 0;
	std::printf("����� ���̸� �Է��� �ּ��� : ");
	std::cin >> Age;
	std::printf("����� %d�� �Դϴ�\n", Age);

	return 0;
}
*/

/*
//3. ���� �������� �Է� �ް� ���� ���ϱ�
//- float �Ķ���� 1��
//- float ����
int main()
{
	float Radius = 0.0f;
	std::printf("���� �������� �Է��� �ּ���: ");
	std::cin >> Radius;

	float Area = CircleArea(Radius);
	std::printf("���� ���̴� %.2f�Դϴ�\n", Area);

	return 0;
}
*/

/*
//4. ���ڸ� �Է¹޾� Ȧ������ ¦������ �Ǵ��ϴ� �Լ�
//- int �Ķ���� 1��
//- bool ����(true�� Ȧ��, false�� ¦��)
int main()
{
	int Number = 0;
	std::printf("���ڸ� �Է��� �ּ���: ");
	std::cin >> Number;

	if (IsOdd(Number)) {
		std::printf("%d�� Ȧ���Դϴ�.\n", Number);
	}
	else {
		std::printf("%d�� ¦���Դϴ�.\n", Number);
	}

	return 0;
}
*/

//5. ���� �з� �Լ�(A~F)
//- int �Ķ���� 1��
//- int ����(enum��)

/*
int main()
{
	int Score = 0;
	std::printf("������ �Է��� �ּ���: ");
	std::cin >> Score;

	Grade InputGrade = GetGrade(Score);

	switch (InputGrade)
	{
	case A:
	{
		printf("���: A\n");
		break;
	}
	case B:
	{
		printf("���: B\n");
		break;
	}
	case C:
	{
		printf("���: C\n");
		break;
	}
	case D:
	{
		printf("���: D\n");
		break;
	}
	case F:
	{
		printf("���: F\n");
		break;
	}
	return 0;
	}
}
*/

//6. ������ ����, ������ ����, ������ ��ۿ� �Լ� �� 3��
//- ��Ʈ �÷��� �κ��丮 �ڵ� ����
//- int �Ķ���� �ΰ�(Inventory, ��Ʈ�÷��׿� enum)

/*
int main()
{
	int Inventory = 0; // �ʱ�ȭ

	Inventory = AddItem(Inventory, Item::Key);
	printf("���� �κ��丮: %d\n", Inventory);

	Inventory = AddItem(Inventory, Item::Fuse);
	printf("���� �κ��丮: %d\n", Inventory);

	Inventory = RemoveItem(Inventory, Item::Key);
	printf("���� �κ��丮: %d\n", Inventory);

	Inventory = ToggleItem(Inventory, Item::Book);
	printf("���� �κ��丮: %d\n", Inventory);

	Inventory = ToggleItem(Inventory, Item::Book);
	printf("���� �κ��丮: %d\n", Inventory);

	return 0;
}
*/

//7. �Ƕ�̵� ��� �Լ�
//- int �Ķ���� 1��


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
	printf("�Ƕ�̵� ���� �Է�: ");
	std::cin >> Height;

	Pyramid(Height);
}
*/

/*
���ø� �Լ� �����
�Ķ���� 2��
���� : �Ķ���� �� ���� �� ����
Max
�Ķ���� 2��
���� : �Ķ���� �� ū �� ����
Clamp
�Ķ���� 3��(value, min, max)
����
value���� min���� ������ min
value���� max���� ũ�� max
value���� min�� max ���̸� value
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
	//����Լ��� �̿��ؼ� ���丮�� ���� ����� �Լ� �����
	//5���丮�� = 5 * 4 * 3 * 2 * 1
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
        1. Ư�� �������� ������ ���� �����ϴ� �Լ�
        - int �Ķ���Ͱ� 2��
        - int ����
        2. ������� ���̸� �Է��� �ּ��� : �� �� ������� 00�� �Դϴ١�
        - int �Ķ���� 1��
        3. ���� �������� �Է� �ް� ���� ���ϱ�
        - float �Ķ���� 1��
        - float ����
        4. ���ڸ� �Է¹޾� Ȧ������ ¦������ �Ǵ��ϴ� �Լ�
        - int �Ķ���� 1��
        - bool ����(true�� Ȧ��, false�� ¦��)
        5. ���� �з� �Լ�(A~F)
        - int �Ķ���� 1��
        - int ����(enum��)
        6. ������ ����, ������ ����, ������ ��ۿ� �Լ� �� 3��
        - ��Ʈ �÷��� �κ��丮 �ڵ� ����
        - int �Ķ���� �ΰ�(Inventory, ��Ʈ�÷��׿� enum)
        7. �Ƕ�̵� ��� �Լ�
        - int �Ķ���� 1��
    */
}

void Practice20250906()
{
	//3���� �Ķ���͸� �޾� ��հ��� �����ϴ� �Լ� �����
	//int main()
	//{
	//	float Number1 = 0.0f;
	//	float Number2 = 0.0f;
	//	float Number3 = 0.0f;
	//	std::cin >> Number1 >> Number2 >> Number3;
	//
	//	float Result = Average(Number1, Number2, Number3);
	//	printf("��հ�: %.2f\n", Result);
	//	return 0;
	//}


	//2. ������ ������ �Է� �޾� ���ΰ� ���ϴ� �Լ� �����
	//int main()
	//{
	//	float Price = 0.0f;
	//	float DiscountRate = 0.0f;
	//	std::printf("������ �������� �Է��� �ּ���: ");
	//	std::cin >> Price >> DiscountRate;
	//	std::printf("���ΰ�: %d\n", DiscountedPrice(Price, DiscountRate));
	//	return 0;
	//}


	////3. �ֻ����� ���� ����� �����ϴ� �Լ� �����
	//int main()
	//{
	//	int DiceResult = RollDice();
	//	printf("�ֻ��� ���: %d\n", DiceResult);
	//	return 0;
	//}


	//4. ������ �ָ� ����(A~F)�� �ִ� �Լ� �����
	//int main()
	//{
	//	int Score = 0;
	//	printf("���� �Է��ϼ���: ");
	//	std::cin >> Score;	
	//
	//	char Grade = GetGrade(Score);
	//	printf("����: %c\n", Grade);
	//	return 0;
	//}


	///*
	//���ø� �Լ� �����
	//- Min
	//�Ķ���� 2��
	//���� : �Ķ���� �� ���� �� ����
	//- Max
	//�Ķ���� 2��
	//���� : �Ķ���� �� ū �� ����
	//- Clamp
	//�Ķ���� 3��(value, min, max)
	//����
	//value���� min���� ������ min
	//value���� max���� ũ�� max
	//value���� min�� max ���̸� value
	//*/
	//int main()
	//{
	//	printf("Min: %d\n", Min(3, 7));
	//	printf("Max: %d\n", Max(3, 7));
	//	printf("Clamp: %d\n", Clamp(10, 0, 5));
	//
	//	return 0;
	//}


	////1. �ڸ��� �и��ϱ�(�Է��� �ڸ� �� ���� ����) - �� �ڸ��� ���� ���ؼ� ����ϱ�
	//int main()
	//{
	//	int InputNumber;
	//	std::cin >> InputNumber;
	//
	//	int Sum = 0;
	//	while (InputNumber > 0)
	//	{
	//		Sum = Sum + InputNumber % 10; // ���� �ڸ� �� ���ϱ�
	//		InputNumber = InputNumber / 10;       // ���� �ڸ� �� ����
	//	}
	//	printf("�ڸ����� ��: %d\n", Sum);
	//	return 0;
	//}
	//
	//
	//
	////2. ��� �Լ��� �̿��Ͽ� 10������ �Է¹޾� 2������ ����ϴ� �Լ� �����
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
	//	printf("10������ �Է��ϼ���: ");
	//	std::cin >> Number;
	//
	//	printf("2����: ");
	//	Binary(Number);
	//	printf("\n");
	//
	//	return 0;
	//}
	//
	//
	///*
	//3. ���� �ӽ� ���� �����
	//- ���� �ݾ� 10000
	//- ���ǿ� ������  �ּ� 100 �����ؾ� ��.���� �����ݾ��� 100 ������ ��� ���� ����.
	//- ���� ���� 3���� ������ 50��� ���� �޴´�.
	//- ���� 777�̸� 10000�� ����
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
	//	while (Money > 100)  // �������� 100�����ϰ�� ���� ����
	//	{
	//		int BettingMoney = 0;
	//		printf("���� �ݾ� : %d\n", Money);
	//		printf("���� ������ �ݾ�(100�̻�): ");
	//		std::cin >> BettingMoney;
	//
	//		if (BettingMoney < 100)
	//		{
	//			printf("100�̻� �ٽ� �����ϼ���.\n");
	//			continue;
	//		}
	//		else if (BettingMoney > Money)
	//		{
	//			printf("�����ݺ��� ���� �� �� �����ϴ�.\n");
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
	//		printf("���� ���: %d %d %d\n", Slot1, Slot2, Slot3);
	//
	//		if (Slot1 == Slot2 && Slot2 == Slot3)
	//		{
	//			int RewardMoney = BettingMoney * 50;
	//			Money = Money + RewardMoney;
	//			printf("���� ���ڸ� �����̽��ϴ�. %d���� �����̽��ϴ�.\n", RewardMoney);
	//		}
	//		else if (Slot1 == 7 && Slot2 == 7 && Slot3 == 7)
	//		{
	//			int RewardMoney = BettingMoney * 10000;
	//			printf("����! 777�� �����̽��ϴ�!\n");
	//			Money = Money * RewardMoney;
	//		}
	//		else
	//		{
	//			printf("���� �����̽��ϴ�.\n");
	//		}
	//	}
	//	printf("���� ����! ���� �ݾ�: %d\n", Money);
	//
	//	return 0;
	//}
	//
	//
	///*
	//4. �÷��̾�� ���� ���� ���� �����
	//- HP�� 100���� ����
	//- ������ �� �� ���濡�� 5~15�� �������� �ش�.
	//- 10 % �� Ȯ���� ũ��Ƽ���� �߻��� 2���� �������� �ش�.
	//- ������ HP�� 0 ���ϰ� �Ǹ� �¸��Ѵ�.
	//*/
	//int main()
	//{
	//	const int StartHp = 100;
	//	int PlayerHp = StartHp;
	//	int EnemyHp = StartHp;
	//	std::random_device RandomDamage;
	//	std::mt19937 DamageEngine(RandomDamage());
	//	std::uniform_int_distribution<int> DamageDist(5, 15);
	//	std::uniform_int_distribution<int> CriticalDist(1, 100); // Ȯ��
	//
	//	while (PlayerHp > 0 && EnemyHp > 0)
	//	{
	//		int PlayerDamage = DamageDist(DamageEngine);
	//		int CriticalDamage = CriticalDist(DamageEngine);
	//
	//		if (CriticalDamage <= 10)
	//		{
	//			PlayerDamage = PlayerDamage * 2;
	//			printf("�÷��̾� ũ��Ƽ�� ����!\n");
	//		}
	//		else
	//		{
	//			printf("�ÿ��̾� ����!\n");
	//		}
	//		EnemyHp = EnemyHp - PlayerDamage;
	//		
	//        if (EnemyHp <= 0) 
	//		{
	//			printf("������ %d ������ -> �� ü��: 0\n", PlayerDamage);
	//			break; 
	//		}
	//		else 
	//		{
	//			printf("������ %d ������ -> �� ü��: %d\n", PlayerDamage, EnemyHp);
	//		}
	//
	//		//�� ��
	//		int EnemyDamage = DamageDist(DamageEngine);
	//		int EnemyCritical = CriticalDist(DamageEngine);
	//
	//		if (EnemyCritical <= 10) 
	//		{
	//			EnemyDamage = EnemyDamage * 2;
	//			printf("�� ũ��Ƽ�� ����! ");
	//		}
	//		else 
	//		{
	//			printf("�� ����! ");
	//		}
	//        PlayerHp = PlayerHp - EnemyDamage;
	//
	//		if (PlayerHp <= 0) 
	//		{
	//			printf("�÷��̾�� %d ������ �� �÷��̾� HP: 0\n", EnemyDamage);
	//			break; 
	//		}
	//		else 
	//		{
	//			printf("�÷��̾�� %d ������ �� �÷��̾� HP: %d\n", EnemyDamage, PlayerHp);
	//		}
	//	}
	//
	//	if (PlayerHp > 0 && EnemyHp <= 0)
	//	{
	//		printf("�÷��̾� �¸�!");
	//	}
	//	else if (EnemyHp > 0 && PlayerHp <= 0)   // �ߺ� ����
	//	{
	//		printf("�� �¸�!\n");
	//	}
	//	return 0;
	//}
	//
	//
	///*
	//5. ���� ��� �����
	//- ���� �ݾ� 10000
	//- ���ǿ� ������ �ּ� 100 �����ؾ� ��.���� �����ݾ��� 100 ������ ��� ���� ����.
	//- ������ A~K������ Ʈ���� ī�� �� 2���� �ߺ����� �����ϰ� ��Ŀ ī�尡 �߰��ȴ�.
	//- �÷��̾�� ������ ī�� �� ������ �����Ѵ�.
	//- ���� �÷��̾ ��Ŀ�� �̴ٸ� �÷��̾��� �¸�.���� �ݾ��� 2�踦 �޴´�.
	//- �÷��̾ ��Ŀ�� ���� ���ߴٸ� ���� ������ �����ϰų� ���� �ݾ��� 2�踦 �߰��� �����ϰ� �ѹ� �� ������ �� �ִ�.
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
	//		printf("���� �ݾ��� �Է��ϼ���.: ");
	//		std::cin >> BettingMoney;
	//
	//		if (BettingMoney < 100)
	//		{
	//			printf("100�̻� ���� �Ͻʽÿ�.\n");
	//			continue;
	//		}
	//		else if (BettingMoney > Money)
	//		{
	//			printf("�����ݺ��� ���� �ɼ� �����ϴ�.");
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
	//		std::uniform_int_distribution<int> PositionDist(1, 3);       //��Ŀ�� �� ����
	//		int JokerPosition = PositionDist(CardEngine);                //���� ��Ŀ ���� ��ȣ�� ���� �̱�
	//		std::uniform_int_distribution<int> CardPositionDist(0, 1);   //�� �Ϲ� ī�� ���� �����ϰ�
	//		int CardPosition = CardPositionDist(CardEngine);             //0�̸� Card1 ����, 1�̸� Card2 ����
	//		int Slot1 = 0;
	//		int Slot2 = 0;
	//		int Slot3 = 0;
	//		if (JokerPosition == 1)
	//		{
	//			Slot1 = 0;               // ��Ŀ
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
	//		printf("ī�带 �����ϼ���. 1.ù��° ī��, 2.�ι�° ī��, 3.����° ī��\n"); 
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
	//			printf("�߸��� �Է��Դϴ�. �̹� ���� ��ȿ�̸� ���þ��� ��ȯ�մϴ�.\n");
	//			Money = Money + BettingMoney;   // ȯ��
	//			continue;                       // ���� ����
	//		}
	//
	//		if (ChoiceValue == 0)               // 0���� ��Ŀ�� ����
	//		{
	//			printf("�¸�! ��Ŀ�� �̾ҽ��ϴ�. ");
	//			Money = Money + (BettingMoney * 2);
	//			printf("���� �ݾ� : %d\n", Money);
	//			continue;
	//		}
	//		else
	//		{
	//			printf("�ƽ����ϴ�. ��Ŀ�� �ƴմϴ�. (����� ���� ī��: %d)\n", ChoiceValue);
	//		}
	//
	//		int PlayerRetry = 0;
	//		printf("���� �ݾ��� 2�踦 �߰��� ����(%d)�ϰ� �ѹ� �� �����Ͻðڽ��ϱ�? (��: 1, �ƴϿ�: 0):\n", BettingMoney * 2);
	//		std::cin >> PlayerRetry;
	//				
	//		if (PlayerRetry == 1)
	//		{
	//			if (Money < BettingMoney * 2)  // �� Ȯ��
	//			{
	//				printf("�������� �����Ͽ� �絵���� �� �� �����ϴ�.\n");
	//				printf("���� �ݾ�: %d\n", Money);
	//				continue;
	//			}
	//			else
	//			{
	//				Money = Money - (BettingMoney * 2);    //�� ����
	//			}
	//
	//			int RetrySlot = 0;
	//			printf("���� �� ī�� �� �ϳ��� ������. (1.ù��° ī��, 2.�ι�° ī��): \n");
	//			std::cin >> RetrySlot;
	//
	//			int InputOK = 1;                // �Է� ���� Ȯ�� (1����, 0�߸���)
	//			int ChoiceValue2 = 0;           // �� ��°�� ���� ī�� ��
	//
	//			if (PlayerChoice == 1) 			// ó�� �� ī�� �����ϰ� ���� �� ī��
	//			{
	//				if (RetrySlot == 1)
	//					ChoiceValue2 = Slot2;   // ���� 2,3
	//				else if (RetrySlot == 2)
	//					ChoiceValue2 = Slot3;
	//				else
	//					InputOK = 0;
	//			}
	//			else if (PlayerChoice == 2)
	//			{
	//				if (RetrySlot == 1)
	//					ChoiceValue2 = Slot1;   // ���� 1,3
	//				else if (RetrySlot == 2)
	//					ChoiceValue2 = Slot3;
	//				else
	//					InputOK = 0;
	//			}
	//			else // PlayerChoice == 3
	//			{
	//				if (RetrySlot == 1)
	//					ChoiceValue2 = Slot1;   // ���� 1,2
	//				else if (RetrySlot == 2)
	//					ChoiceValue2 = Slot2;
	//				else
	//					InputOK = 0;
	//			}
	//
	//			if (InputOK == 0)
	//			{
	//				printf("�߸��� �Է��Դϴ�. �絵���� ��ȿ ó���˴ϴ�.\n");
	//				printf("���� �ݾ�: %d\n", Money);  
	//				continue;                           
	//			}
	//			else if (ChoiceValue2 == 0)
	//			{
	//				Money += (BettingMoney * 2);
	//				printf("�絵�� ����! ��Ŀ�� �̾ҽ��ϴ�. (����: %d)\n", BettingMoney * 2);
	//				printf("���� �ݾ�: %d\n", Money);
	//				continue;
	//			}
	//			else
	//			{
	//				printf("�絵�� ����! ��Ŀ�� �ƴϾ����ϴ�. (����� ���� ī��: %d)\n", ChoiceValue2);
	//				printf("���� �ݾ�: %d\n", Money);
	//				continue;
	//			}
	//		}
	//		else
	//		{
	//			printf("�絵���� ���� �ʽ��ϴ�.\n");
	//			printf("���� �ݾ�: %d\n", Money);
	//			continue;
	//		}
	//	}
	//
	//	return 0;
	//}


	///*
	//���� �ݾ� 10000
	//���ǿ� ������ �ּ� 100 �����ؾ� ��. ���� �����ݾ��� 100 ������ ��� ���� ����.
	//������ A~K������ Ʈ���� ī�� �� 2���� �ߺ����� �����ϰ� ��Ŀ ī�尡 �߰��ȴ�.
	//�÷��̾�� ������ ī�� �� ������ �����Ѵ�.
	//���� �÷��̾ ��Ŀ�� ���ִٸ� �÷��̾��� �¸�. ���� �ݾ��� 2�踦 �޴´�.
	//�÷��̾ ��Ŀ�� ���� ���ߴٸ� ���� ������ �����ϰų� ���� �ݾ��� 2�踦 �߰��� �����ϰ� �ѹ� �� ������ �� �ִ�.
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
	//		printf("������ ���ּ��� (100~%d) : ", Money);
	//		std::cin >> CurrentBet;
	//		printf("%d���� �����߽��ϴ�.\n", CurrentBet);
	//
	//		Money -= CurrentBet;
	//
	//		// ������ ���ϰ� �ִ�.
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
	//			// ���� ������ �ȵȴ�.
	//			break;
	//		}
	//
	//		printf("ī�带 �����ϼ��� (0, 1, 2) : ");
	//		int PlayerInput = 0;
	//		std::cin >> PlayerInput;
	//
	//		bool PlayerWin = false;
	//		printf("�÷��̾�� %d�� �����߽��ϴ�.\n", PlayerInput);
	//		switch (PlayerInput)
	//		{
	//		case 0:
	//			if (Dealer1 == CardJoker)
	//			{
	//				// �߰���
	//				PlayerWin = true;
	//			}
	//			break;
	//		case 1:
	//			if (Dealer2 == CardJoker)
	//			{
	//				// �߰���
	//				PlayerWin = true;
	//			}
	//			break;
	//		case 2:
	//			if (Dealer3 == CardJoker)
	//			{
	//				// �߰���
	//				PlayerWin = true;
	//			}
	//			break;
	//		default:
	//			// ���� ������ �ȵȴ�.
	//			break;
	//		}
	//
	//		if (PlayerWin)
	//		{
	//			Money += CurrentBet * 2;
	//			printf("��Ŀ�� �̾ҽ��ϴ�. ����� ���� �ݾ��� %d�Դϴ�.\n", Money);
	//		}
	//		else
	//		{
	//			printf("����� ���� ī��� ��Ŀ�� �ƴմϴ�.\n");
	//
	//			if (Money >= CurrentBet * 2)
	//			{
	//				printf("�߰� ���� �Ͻðڽ��ϱ� ? (0:yes, 1 : no) : ");
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
	//							printf("���� ī�� �� �ϳ��� �����ϼ��� (1,2) : ");
	//							std::cin >> PlayerSecondInput;
	//						} //while (!(PlayerSecondInput == 1 || PlayerSecondInput == 2));
	//						while (PlayerSecondInput != 1 && PlayerSecondInput != 2);
	//					}
	//					break;
	//					case 1:
	//					{
	//						do
	//						{
	//							printf("���� ī�� �� �ϳ��� �����ϼ��� (0,2) : ");
	//							std::cin >> PlayerSecondInput;
	//						} while (PlayerSecondInput != 0 && PlayerSecondInput != 2);
	//					}
	//					break;
	//					case 2:
	//					{
	//						do
	//						{
	//							printf("���� ī�� �� �ϳ��� �����ϼ��� (0,1) : ");
	//							std::cin >> PlayerSecondInput;
	//						} while (PlayerSecondInput != 0 && PlayerSecondInput != 1);
	//					}
	//					break;
	//					default:
	//						// ���� ������ �ȵȴ�.
	//						break;
	//					}
	//
	//					printf("�÷��̾�� �ι�°�� %d�� �����߽��ϴ�.\n", PlayerSecondInput);
	//					switch (PlayerSecondInput)
	//					{
	//					case 0:
	//						if (Dealer1 == CardJoker)
	//						{
	//							// �߰���
	//							PlayerWin = true;
	//						}
	//						break;
	//					case 1:
	//						if (Dealer2 == CardJoker)
	//						{
	//							// �߰���
	//							PlayerWin = true;
	//						}
	//						break;
	//					case 2:
	//						if (Dealer3 == CardJoker)
	//						{
	//							// �߰���
	//							PlayerWin = true;
	//						}
	//						break;
	//					default:
	//						// ���� ������ �ȵȴ�.
	//						break;
	//					}
	//
	//					if (PlayerWin)
	//					{
	//						Money += CurrentBet * 2;
	//						printf("��Ŀ�� �̾ҽ��ϴ�. ����� ���� �ݾ��� %d�Դϴ�.\n", Money);
	//					}
	//					else
	//					{
	//						printf("����� �й��Դϴ�.\n");
	//					}
	//				}
	//				else
	//				{
	//					printf("����� �й��Դϴ�.\n");
	//				}
	//			}
	//			else
	//			{
	//				printf("����� �й��Դϴ�.\n");
	//			}
	//		}
	//	}
	//}
}


void Practice20250908()
{
	//int main()
	//{
	//	//1. �迭 ����� �ʱ�ȭ �غ���
	//	int Numbers[3] = { 5, 8, 3 };

	//	//2.�迭�� ��� ����� ���� ���ϰ� ��� ���ϱ�
	//	int Sum = 0;
	//	float Average = 0.0f;
	//	int ArrayCount = static_cast<int>(sizeof(Numbers) / sizeof(Numbers[0]));
	//	for (int i = 0; i < ArrayCount; i++)
	//	{
	//		Sum += Numbers[i];
	//	}
	//	Average = Sum / static_cast<float>(ArrayCount);
	//	printf("���: %.2f\n", Average);

	//	//3. �迭�� ��� ��� �� �ִ밪�� �ּҰ� ���ϱ�
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