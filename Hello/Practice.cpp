#include <iostream>
#include <stdio.h>
#include <random>
#include "Practice.h"

void TestClass::TestFunc()
{
	// ���� ����
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


	int Sum(int Test1, int Test2)  // int Sum(int, int); �� ������ �����ߴ�.
	{
		int Result = Test1 + Test2;

		return Test1 + Test2;  // ������ �ظ��ϸ� �������� �ϳ�
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
	//1. �ֻ���(1~6)��, 100���� ������, 6�� ��� ���Դ���, ī�����ؼ�, ����ϱ�
	//*/
	//	const int TestCount = 1000000;
	//	int HitCount = 0;
	//	for (int i = 0; i < TestCount; i++)	// 100���� ������
	//	{
	//		int dice = rand() % 6 + 1;	// �ֻ���(1~6)��
	//		if (dice == 6)	// 6�� ��� ���Դ���
	//		{
	//			HitCount++;	// ī�����ؼ�
	//		}
	//	}
	//	printf("6�� ���� ȸ�� = %d", HitCount);	// ����ϱ�
	//
	//	/*
	//		2. ����, ����, �� ���� �����
	//			3������
	//			enum Ȱ��
	//
	//			���� ���� ��
	//			 - �θ��� �÷��̾ ����,����,�� �� �ϳ��� �����Ѵ�.
	//			 - ������ ����� ���� �°� �а� ������.
	//			 - ������ ���� �̱��.
	//			 - ������ ������ �̱��.
	//			 - ���� ������ �̱��.
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
	//		while (true)	// �÷��̾� ����
	//		{
	//			printf("�����ϼ���. [0:����, 1:����, 2:��] : ");
	//			std::cin >> PlayerSelect;
	//
	//			if (PlayerSelect == Scissors
	//				|| PlayerSelect == Rock
	//				|| PlayerSelect == Paper)
	//			{
	//				break;
	//			}
	//
	//			printf("�߸��� �Է��Դϴ�. �ٽ� �Է��ϼ���\n");
	//		}
	//		int ComSelect = rand() % NumOfRps;	// ��ǻ�� ����
	//
	//		switch (PlayerSelect)	// ���� ����
	//		{
	//		case Scissors:
	//			if (ComSelect == Scissors)
	//			{
	//				printf("����� [����]�� �����߰� ��ǻ�ʹ� [����]�� �����߽��ϴ�.\n");
	//				printf("�����ϴ�.\n");
	//			}
	//			else if (ComSelect == Rock)
	//			{
	//				printf("����� [����]�� �����߰� ��ǻ�ʹ� [����]�� �����߽��ϴ�.\n");
	//				printf("����� �����ϴ�.\n");
	//				ComWinCount++;
	//			}
	//			else if (ComSelect == Paper)
	//			{
	//				printf("����� [����]�� �����߰� ��ǻ�ʹ� [��]�� �����߽��ϴ�.\n");
	//				printf("����� �̰���ϴ�.\n");
	//				PlayerWinCount++;
	//			}
	//			else
	//			{
	//				printf("ERROR!!!!! ������� ����� �߻���!\n");
	//			}
	//			break;
	//		case Rock:
	//			if (ComSelect == Scissors)
	//			{
	//				printf("����� [����]�� �����߰� ��ǻ�ʹ� [����]�� �����߽��ϴ�.\n");
	//				printf("����� �̰���ϴ�.\n");
	//				PlayerWinCount++;
	//			}
	//			else if (ComSelect == Rock)
	//			{
	//				printf("����� [����]�� �����߰� ��ǻ�ʹ� [����]�� �����߽��ϴ�.\n");
	//				printf("�����ϴ�.\n");
	//			}
	//			else if (ComSelect == Paper)
	//			{
	//				printf("����� [����]�� �����߰� ��ǻ�ʹ� [��]�� �����߽��ϴ�.\n");
	//				printf("����� �����ϴ�.\n");
	//				ComWinCount++;
	//			}
	//			else
	//			{
	//				printf("ERROR!!!!! ������� ����� �߻���!\n");
	//			}
	//			break;
	//		case Paper:
	//			if (ComSelect == Scissors)
	//			{
	//				printf("����� [��]�� �����߰� ��ǻ�ʹ� [����]�� �����߽��ϴ�.\n");
	//				printf("����� �����ϴ�.\n");
	//				ComWinCount++;
	//			}
	//			else if (ComSelect == Rock)
	//			{
	//				printf("����� [��]�� �����߰� ��ǻ�ʹ� [����]�� �����߽��ϴ�.\n");
	//				printf("����� �̰���ϴ�.\n");
	//				PlayerWinCount++;
	//			}
	//			else if (ComSelect == Paper)
	//			{
	//				printf("����� [��]�� �����߰� ��ǻ�ʹ� [��]�� �����߽��ϴ�.\n");
	//				printf("�����ϴ�.\n");
	//			}
	//			else
	//			{
	//				printf("ERROR!!!!! ������� ����� �߻���!\n");
	//			}
	//			break;
	//		default:
	//			printf("ERROR!!!!! ������� ����� �߻���!\n");
	//			break;
	//		}
	//
	//		printf("Player = [%d], COM = [%d]\n", PlayerWinCount, ComWinCount);
	//	}
	//
	//	if (PlayerWinCount >= WinGoal)
	//	{
	//		printf("����� ��ǻ�͸� �̰���ϴ�!\n");
	//	}
	//	else
	//	{
	//		printf("����� ��ǻ�Ϳ��� �����ϴ�...\n");
	//	}
}
void Day20250904_Practice2()
{ 
	///*
	//	3. ���� �ο�
	//		��ǻ�Ͱ� 1~100 ������ ������ ���ڸ� �����ϰ�,
	//		����ڰ� ���� ������ �Է��� �޾� "�� ����", "�� ����" ���� ��Ʈ�� �����ϴ� ����
	//		5���ȿ� ����� �¸�
	//*/
	//int RandomNumber = rand() % 100 + 1;
	//int PlayerNumber = 0;
	//int CountDown = 5;
	//
	//while (CountDown > 0)
	//{
	//	printf("1~100 ������ ���ڸ� ������ ������ : ");
	//	std::cin >> PlayerNumber;
	//
	//	if (PlayerNumber < RandomNumber)
	//	{
	//		printf("�� ū ���� ������\n");
	//	}
	//	else if (PlayerNumber > RandomNumber)
	//	{
	//		printf("�� ���� ���� ������\n");
	//	}
	//	else
	//	{
	//		printf("�����Դϴ�!\nã�� ���� %d�����ϴ�.\n", RandomNumber);
	//		break;
	//	}
	//	CountDown--;
	//	printf("���� ȸ���� %d�� �Դϴ�.\n", CountDown);
	//}
	//if (CountDown <= 0)
	//{
	//	printf("�����߽��ϴ�.\n");
	//}
	//getchar();
	//getchar();
}
void Day20250904_Practice3()
{
	// ���������� �κ��丮�� ��Ʈ�÷��׷� ǥ���ϱ�
	// ������ ������ ��Ÿ���� enum�� �����
	// Ư�� �������� �߰��ϰ� �����ϴ� ���� �����ֱ�
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


void Day20250908_Practice1()
{

		////1. �迭 ����� �ʱ�ȭ �غ���
		//int Numbers[3] = { 5, 8, 3 };


		////2.�迭�� ��� ����� ���� ���ϰ� ��� ���ϱ�
		//int Sum = 0;
		//float Average = 0.0f;
		//int ArrayCount = static_cast<int>(sizeof(Numbers) / sizeof(Numbers[0]));
		//for (int i = 0; i < ArrayCount; i++)
		//{
		//	Sum += Numbers[i];
		//}
		//Average = Sum / static_cast<float>(ArrayCount);
		//printf("���: %.2f\n", Average);

		////3. �迭�� ��� ��� �� �ִ밪�� �ּҰ� ���ϱ�
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

	////6��ü �ֻ����� 100���� ������ �� ���� ���� ��� ���Դ��� ī�����ϱ�
	////6��ü �ֻ����� ������ �Լ� �����
	//printf("\n\n\n\n\n\n\n\n\n\n");
	//const int TestCount = 1000000;
	//int Counters[6] = { 0 };
	//for (int i = 0; i < TestCount; i++)
	//{
	//	Counters[RollDice() - 1]++;
	//}
	//printf("���� ��� : ");
	//for (auto count : Counters)
	//{
	//	printf("%d ", count);
	//}
	//printf("\n");
}
/*
   ���� �����

	6��ü �ֻ����� 100���� ������ �� ���� ���� ��� ���Դ��� ī�����ϱ�
	- 6��ü �ֻ����� ������ �Լ� �����
	

		int Count[6] = { 0 };

		for (int i = 0; i < 1000000; i++)
		{
			int result = rand() % 6 + 1;
			Count[result - 1]++;
		}
		for (int i = 0; i < 6; i++)
		{
			printf("%d�� ����: %d\n", i + 1, Count[i]);
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
//�迭�� ����� ���� �Ųٷ� ������ �Լ� �����
//�Ķ���� int Array[], int Size
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
	* �ζ� ��ȣ ������
	- ��ü ���� ����: 1������ 45������.
	- ����� �ϴ� ���� ����: 6��.
	*/
	//const int MaxNumber = 45;
	//int Array[MaxNumber];
	//for (int i = 0; i < MaxNumber; i++)
	//{
	//	Array[i] = i + 1;
	//}

	//Shuffle(Array, MaxNumber);

	//printf("�ζ� ��ȣ�� ");
	//const int PickCount = 6;
	//for (int i = 0; i < PickCount; i++)
	//{
	//	printf("%d ", Array[i]);
	//}
	//printf("�Դϴ�.\n");

	/*
		���� §��
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
	*	- 2���� �迭�� Ȱ���Ͽ� �ؽ�Ʈ ��� �̷� Ż�� ������ ����.
		- �̷��� ����
			- 10�� 20���� 2���� �迭
			- ���� ���
				- ��(0): '. '���� ǥ��
				- ��(1): '# '���� ǥ��
				- ������(2): 'S '�� ǥ��
				- �ⱸ(3): 'E '�� ǥ��
			- �̷� �ڵ�

				```cpp
				// �̷� ũ��
				const int MazeRows = 10;
				const int MazeCols = 20;

				// �̷� �迭
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

		- �̵� �Է� ó��
			- w(W): ��, s(S): �Ʒ�, a(A): ����, d(D): ������
			- ��ҹ��� ���� ���� ó��
		- �÷��̾ �ⱸ�� �����ϸ� ����
			- �÷��̾�� ��P ���� ǥ��
		- ���� ȭ���� ������ ���� ����� ������.

			```cpp
			=== �ؽ�Ʈ �̷� Ż�� ���� ===
			[�̷� ȭ�� ���]
			�̵��� �� �ִ� ������ �����ϼ��� (w: ��, s: �Ʒ�, a: ����, d: ������):
			w(��) s(��) a(��) d(��)
			���� �Է�:
			```
	*/


//	int PlayerX = 0;
//	int PlayerY = 0;
//	FindStartPosition(PlayerX, PlayerY);
//
//	printf("~~ �̷� Ż�� ���� ~~\n");
//
//	while (true)
//	{
//		PrintMaze(PlayerX, PlayerY);
//
//		if (IsEnd(PlayerX, PlayerY))
//		{
//			printf("�����մϴ�! �̷θ� Ż���߽��ϴ�!\n");
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
//			// ���� �� ����
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
//				// ���� ������ �ȵǴ� �� == �� �����Ͱ� �߸��� ��
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
//	printf("�̵��� �� �ִ� ������ �����ϼ��� (w:�� a:���� s:�Ʒ��� d:������):\n");
//	if (!IsWall(PlayerX, PlayerY - 1))
//	{
//		printf("W(��) ");
//		MoveFlags |= DirUp;
//	}
//	if (!IsWall(PlayerX, PlayerY + 1))
//	{
//		printf("S(��) ");
//		MoveFlags |= DirDown;
//	}
//	if (!IsWall(PlayerX - 1, PlayerY))
//	{
//		printf("A(��) ");
//		MoveFlags |= DirLeft;
//	}
//	if (!IsWall(PlayerX + 1, PlayerY))
//	{
//		printf("D(��) ");
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
//		printf("������ �Է��ϼ��� : ");
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
//		printf("�߸��� �Է��Դϴ�. �̵��� �� �ִ� ���� �߿��� �����ϼ���.\n");
//	}
//
//	return Direction;
	
	/* 
	���� §��
	const int MazeHeight = 10;
	const int MazeWidth = 20;

	// �̷� �迭 (0:��, 1:��, 2:����, 3:�ⱸ)
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


	    // �÷��̾� ������ (2)
		int PlayerX = 1;
		int PlayerY = 1;

		while (true)
		{
			// �̷� ����
			for (int y = 0; y < MazeHeight; y++)
			{
				for (int x = 0; x < MazeWidth; x++)
				{
					if (x == PlayerX && y == PlayerY)
					{
						printf("P ");          // �÷��̾�
					}
					else if (Maze[y][x] == 0)  // ��
					{
						printf(". ");
					}
					else if (Maze[y][x] == 1)  // ��
					{
						printf("# ");
					}
					else if (Maze[y][x] == 2)  // ������
					{
						printf("S ");
					}
					else if (Maze[y][x] == 3)  // �ⱸ
					{
						printf("E ");
					}
				}
				printf("\n");
			}
			// �̵�
			char Input = 0;
			printf("�̵��� �� �ִ� ������ �����ϼ��� (w: ��, s: �Ʒ�, a: ����, d: ������): \n");
			printf("���� �Է�: ");
			std::cin >> Input;

			int PlayerNewX = PlayerX;  // �ٷ� PlayerX�� �ϸ� ���� ��� �ǵ����� �ڵ� �� �־�� ��.
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
			// �̵� �� Ȯ�� 0 �̸� ���� 1�̸� �Ȱ�
			if (PlayerNewX >= 0 && PlayerNewX < MazeWidth && PlayerNewY >= 0 && PlayerNewY < MazeHeight)
			{
				if (Maze[PlayerNewY][PlayerNewX] != 1) // ���� �ƴϸ� �̵�
				{
					PlayerX = PlayerNewX;
					PlayerY = PlayerNewY;
				}
			}
			// �ⱸ
			if (Maze[PlayerY][PlayerX] == 3)  // �Ƹ� �÷��̾� ��ġ�� ���Ƿ� ���ؼ� �׷���
			{
				printf("�����մϴ�! �ⱸ�� �����߽��ϴ�!\n");
				break;
			}
		}
	*/
}


//Day20250909_Practice1
void PointerParameter(int* pNumber)
{
	(*pNumber) = (*pNumber) * 2;  // �Է¹��� �ּҿ� �ִ� int ���� 2��� �����
}
void TestPointer(int* pInt, float pFloat)
{
	(*pInt) += 3;
	(pFloat) *= 0.5f;  // (pFloat) /= 2;  *�� / �߿� ������ �� �� �ִ� ��Ȳ�̸� *�� ���ɻ� �����ϴ�.
}
void Day20250909_Practice1()
{
	//// ���ܽǽ�1
	//// Number��� ������ �ϳ� �����ϰ� ������ ���� p�� Number�� �ּҸ� �����ϱ�
	//// p�� �̿��ؼ� Number�� ���� ���� ��Ű��

	//float Number = 123.0f;
	//int Number2 = 10;
	//float* p = nullptr;    // p�� ������ ����ִ�.
	//p = &Number;
	////p = &Number2;   //int�� �ȵȴ�. ������ Ÿ���� ���ƾ� ��.

	//(*p) = 100.0f;

	//PointerParameter(&Number2);

	//// ���ܽǽ�2
	//// int*�� float*�� �Ķ���ͷ� ���� �Լ� �����
	//// int*�� ���� ���� 3 ���ϱ�, float*�� ���� ���� �������� �����
}
void Day20250909_Practice2()
{
    ////���� �ǽ�
	////1. int �迭 �Ҵ�ޱ� (ù �Ҵ��� 3����)
	////2. ���ڸ� �Է¹��� ������ �߰��ϱ�
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
	//	printf("���� �Է�: ");
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
	//	1. ���� ���θ� �Է¹޾� �迭�� �����ϰ� �迭�� ���� 0���� 1�� �����ϴ� ������ ä��� ����ϱ�
	//	ex) ����5 ����4
	//	0 1 2 3 4
	//	5 6 7 8 9
	//	10 11 12 13 14
	//	15 16 17 18 19
	//*/

	//int Width = 0;
	//int Height = 0;
	//printf("����, ���θ� �Է��ϼ���: ");
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
	//	3. ���� �ο�
	//	   -��ǻ�Ͱ� 1~100 ������ ������ ���ڸ� �����ϰ�,
	//	   -����ڰ� ���� ������ �Է��� �޾� "�� ����", "�� ����" ���� ��Ʈ�� �����ϴ� ����
	//	   -5���ȿ� ����� �¸�
	//     ++ ���̷ο� �����ϱ�
	//	   -������ ����Ǿ��� �� �̶����� �÷��̾ �Է��� ��� ���� ����ؼ� �����ֱ�
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
	//		printf("1~100 ������ ���ڸ� ������ ������ : ");
	//		std::cin >> PlayerNumber;
	//
	//		Array[ArrayInPut] = PlayerNumber;
	//		ArrayInPut++;
	//
	//		if (PlayerNumber < RandomNumber)
	//		{
	//			printf("�� ū ���� ������\n");
	//		}
	//		else if (PlayerNumber > RandomNumber)
	//		{
	//			printf("�� ���� ���� ������\n");
	//		}
	//		else
	//		{
	//			printf("�����Դϴ�!\nã�� ���� %d�����ϴ�.\n", RandomNumber);
	//			break;
	//		}
	//		CountDown--;
	//		printf("���� ȸ���� %d�� �Դϴ�.\n", CountDown);
	//	}
	//	if (CountDown <= 0)
	//	{
	//		printf("�����߽��ϴ�.\n");
	//	}
	//
	//	printf("�Է��� ����: \n");
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
 //      3. �̷� Ż�� ���� �����ϱ�
 //   	- �̵����� �� ����Ȯ��(20 %)�� ������ �߻��Ѵ�.
 //   	- �̵����� �� ����Ȯ��(10 %)�� �÷��̾� HP�� ȸ���ȴ�.
 //   	- �� �̺�Ʈ�� �ߺ����� �߻����� �ʴ´�.
 //   */

	//std::random_device Random;
	//std::mt19937 RandomEngine(Random());
	//std::uniform_int_distribution<int> DamageDist(5, 15);
	//std::uniform_int_distribution<int> PercentDist(1, 100); // Ȯ��

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
	//		int CriticalDamage = PercentDist(RandomEngine);  // ũ��Ƽ�� ������

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

	//		if (EnemyHp <= 0)
	//		{
	//			printf("������ %d ������ -> �� ü��: 0\n", PlayerDamage);
	//			break;
	//		}
	//		else
	//		{
	//			printf("������ %d ������ -> �� ü��: %d\n", PlayerDamage, EnemyHp);
	//		}

	//		//�� ��
	//		int EnemyDamage = DamageDist(RandomEngine);
	//		int EnemyCritical = PercentDist(RandomEngine);

	//		if (EnemyCritical <= 10)
	//		{
	//			EnemyDamage = EnemyDamage * 2;
	//			printf("�� ũ��Ƽ�� ����! ");
	//		}
	//		else
	//		{
	//			printf("�� ����! ");
	//		}
	//		PlayerHp = PlayerHp - EnemyDamage;

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

	//	if (PlayerHp > 0 && EnemyHp <= 0)
	//	{
	//		printf("�÷��̾� �¸�!");
	//	}
	//	else if (EnemyHp > 0 && PlayerHp <= 0)   // �ߺ� ����
	//	{
	//		printf("�� �¸�!\n");
	//	}
	//}

	//int main()
	//{
	//	const int MazeHeight = 10;
	//	const int MazeWidth = 20;

	//	// �̷� �迭 (0:��, 1:��, 2:����, 3:�ⱸ)
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

	//	// �÷��̾� ������ 
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
	//		// �̷� ����
	//		for (int y = 0; y < MazeHeight; y++)
	//		{
	//			for (int x = 0; x < MazeWidth; x++)
	//			{
	//				if (x == PlayerX && y == PlayerY)
	//				{
	//					printf("P ");          // �÷��̾�
	//				}
	//				else if (Maze[y][x] == 0)  // ��
	//				{
	//					printf(". ");
	//				}
	//				else if (Maze[y][x] == 1)  // ��
	//				{
	//					printf("# ");
	//				}
	//				else if (Maze[y][x] == 2)  // ������
	//				{
	//					printf("S ");
	//				}
	//				else if (Maze[y][x] == 3)  // �ⱸ
	//				{
	//					printf("E ");
	//				}
	//			}
	//			printf("\n");
	//		}
	//		// �̵�
	//		char Input = 0;
	//		printf("�̵��� �� �ִ� ������ �����ϼ��� (w: ��, s: �Ʒ�, a: ����, d: ������): \n");
	//		printf("���� �Է�: ");
	//		std::cin >> Input;

	//		int PlayerNewX = PlayerX;  // �ٷ� PlayerX�� �ϸ� ���� ��� �ǵ����� �ڵ� �� �־�� ��.
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
	//		// �̵� �� Ȯ�� 0 �̸� ���� 1�̸� �Ȱ�
	//		if (PlayerNewX >= 0 && PlayerNewX < MazeWidth &&
	//			PlayerNewY >= 0 && PlayerNewY < MazeHeight)
	//		{
	//			if (Maze[PlayerNewY][PlayerNewX] != 1)   // ���� �ƴϸ� �̵�
	//			{
	//				PlayerX = PlayerNewX;
	//				PlayerY = PlayerNewY;
	//			}
	//			//�̺�Ʈ
	//			EventType Result = GetMoveEvent();
	//			int PlayerHp = 100;

	//			if (Result == Battle)
	//			{
	//				printf("���� �߻�!\n");
	//				RunBattle(PlayerHp);                 // ���� ����
	//				if (PlayerHp <= 0)
	//				{
	//					printf("���� ����!\n");
	//					break;
	//				}
	//			}
	//			else if (Result == Heal)
	//			{
	//				int RecoverHp = 30;                    // ���� ȸ��
	//				PlayerHp += RecoverHp;
	//				if (PlayerHp > 100)
	//					PlayerHp = 100;                  // �ִ�ġ ����
	//				printf("ü�� ȸ��! +%d �� ���� ü��: %d/100\n", RecoverHp, PlayerHp);
	//			}
	//			else
	//			{
	//				printf("�ƹ� �ϵ� ����!\n");
	//			}
	//		}
	//		// �ⱸ
	//		if (Maze[PlayerY][PlayerX] == 3)  // �Ƹ� �÷��̾� ��ġ�� ���Ƿ� ���ؼ� �׷���
	//		{
	//			printf("�����մϴ�! �ⱸ�� �����߽��ϴ�!\n");
	//			break;
	//		}
	//	}
	//	return 0;
	//}
}

void Day20250910_�Ľ�()
{
//#include <direct.h> //�߰�
//char Working[256];
//if (_getcwd(Working, 256) != nullptr)
//{
//	printf("�۾� ���丮 : %s\n", Working);
//}
//
////���� �б�
//ReadFile();
//void ReadFile()
//{
//	//#include <fstream>	#include <string> �ʿ�
//	const char* FilePath = ".\\Data\\TestData.txt";
//
//	std::ifstream InputFile(FilePath);
//	if (!InputFile.is_open())	// ������ ���ȴ��� Ȯ���ϴ� �Լ�
//	{
//		printf("������ �� �� �����ϴ�.\n");
//		printf("[%s] ��θ� Ȯ���ϼ���.\n", FilePath);
//		return;
//	}
//
//	std::string FileContents(
//		(std::istreambuf_iterator<char>(InputFile)),
//		std::istreambuf_iterator<char>());	//InputFile�� �ִ� ���ڵ��� ��� �о FileContents�� �����ϱ�
//
//	printf("���� ������ ������ �����ϴ�.\n");
//	printf("%s\n", FileContents.c_str());	// FileContents�ȿ� �ִ� ���ڿ��� const char*�� �����ִ� �Լ�
//}
//
//void TestString()
//{
//	//#include <string>
//	std::string str1 = "Hello";
//	std::string str2("World");	// str1���� ������ �� �ٶ����ϴ�
//
//	const char* Temp1 = "Hello";
//	char Temp2[32] = { 0 };
//	//Temp2 = Temp1;
//	//char* Temp3 = Temp1;
//
//	std::string str3 = str1;		// ����
//	size_t Length = str3.length();	// ���� Ȯ��
//	//int Size = Length;	// ũ�Ⱑ �ȸ¾Ƽ� ©�� �� �ִ�.
//	Length = str3.size();
//
//	std::string str4 = str1 + " " + str2;	// str4 = "Hello World", + ����� ���ɿ� ������ ���� �� �ִ�.
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
//	if (str1 > str2)	// ���� ������� ��
//	{
//
//	}
//
//	size_t Position = str1.find('e');
//	// �߰��� �������� std::string::npos ����
//	Position = str1.find('e', Position + 1);	// �ι�° e�� ã�� ��(ù��° e�� �߰ߵǾ��ٴ� �����Ͽ�)
//
//	str1[1] = 'E';	// Ư�� ��ġ�� ���ڿ� �����ϱ�. �ε��� ���� Ȯ���� ����. ��Ÿ�� ������ �� �� ����
//	//str1[10] = 'E';	// ����
//	str1.at(1) = 'E';	// �����ϰ� ����
//
//	str1.c_str();	// C��Ÿ�� ���ڿ� �����ϱ�
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
		//	printf("%s", HelloString);	// ���ڿ� ����ϱ�
		//
		//	HelloString[5] = '\0';
		//	printf("%s", HelloString);	// Hello�� ��µ�
		//
		//
		//
		//
		//	// ���� �ǽ�
		//	// HelloString���� 'e'�� ���°�� �ִ��� ����غ���
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
		//	//	printf("[%c]�� %d�� �ε����� �ֽ��ϴ�.\n", Target, Index);
		//	//}
		//	//else
		//	//{
		//	//	printf("[%c]�� ã�� �� �����ϴ�.\n", Target);
		//	//}
		//
		//	char Target = 'e';
		//	int Index = FindCharIndex(HelloString, Target);
		//	if (Index >= 0)
		//	{
		//		printf("[%c]�� %d�� �ε����� �ֽ��ϴ�.\n", Target, Index);
		//	}
		//	else
		//	{
		//		printf("[%c]�� ã�� �� �����ϴ�.\n", Target);
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

	printf("%s", HelloString);	// ���ڿ� ����ϱ�

	HelloString[5] = '\0';
	printf("%s", HelloString);	// Hello�� ��µ�

	// ���� �ǽ�
	// HelloString���� 'e'�� ���°�� �ִ��� ����غ���

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
	//	printf("[%c]�� %d�� �ε����� �ֽ��ϴ�.\n", Target, Index);
	//}
	//else
	//{
	//	printf("[%c]�� ã�� �� �����ϴ�.\n", Target);
	//}

	char Target = 'e';
	int Index = FindCharIndex(HelloString, Target);
	if (Index >= 0)
	{
		printf("[%c]�� %d�� �ε����� �ֽ��ϴ�.\n", Target, Index);
	}
	else
	{
		printf("[%c]�� ã�� �� �����ϴ�.\n", Target);
	}

	// �ǽ�
	// 1. ���ڿ��� ���̸� �����ϴ� �Լ� �����
	// int MyStringLength(const char* Target);
	const char* TestString = "Hello";
	int Length = MyStringLength(TestString);
	printf("\n\n���ڿ� ���� ����\n");
	printf("[%s]�� ���̴� %d�Դϴ�.", TestString, Length);

	// 2. ���ڿ��� �����ϴ� �Լ� �����
	// void MyStringCopy(const char* Source, char* Destination);
	char Destination[256] = { 0 };	// ũ��� �׳� ����ϴٰ� ����
	char* Destination2 = new char[MyStringLength(TestString) + 1];	// +1�� '\0'�� ����
	MyStringCopy(TestString, Destination2);
	printf("\n\n���ڿ� �����ϱ�\n");
	printf("Source\t\t: %s\n", TestString);
	printf("Destination\t: %s\n", Destination2);
	delete[] Destination2;
	Destination2 = nullptr;

	// 3. ���ڿ��� ��ġ�� �Լ� �����(Source �ڿ� Destination�� ������ ���̱�)
	//	void MyStringCat(char* Source, const char* Destination);
	printf("\n\n���ڿ� ��ġ��\n");
	char TestSource[32] = "Hello";
	printf("���� : %s\n", TestSource);
	MyStringCat(TestSource, " World!");
	printf("��� : %s\n", TestSource);


    //4. ���ڿ� �ΰ��� ���ϴ� �Լ� �����
    //���� ���� �� ���ڿ��� ������ 0, ù��°�� ������ ����, �ι�°�� ������ ���
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
		// �� �� \0 �� �Ǿ���.        -> ���� ���̰� ���� ���� ���ڵ鵵 ���Ҵ�.
		// �ϳ��� \0 �� �Ǿ���.       -> ���� ���̰� �ٸ���. -> ���� �ٸ���.
		// �߰��� �ٸ� ���� �־���.   -> ���� �ٸ���.
		return String1[Index] - String2[Index];
	 }
	//printf("car , cat %d", MyStringCompare("car", "cat\n"));
	//printf("apple, banana %d", MyStringCompare("apple", "banana\n"));


	//5. ���ڿ��� �Է� �޾� ������ �����ϴ� �Լ� �����
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
	printf("�Էµ� ���ڴ� %d�Դϴ�.", Number);


	//6. ���ڿ��� �Է� �޾� �Ǽ��� �����ϴ� �Լ� �����
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
		printf("�Էµ� ���ڴ� %.4f�Դϴ�.", Number);

		return 0;
	}

	const int Size = 32;
	char InputString[Size];
	printf("\n\n������ �Է��ϼ��� : ");
	std::cin.getline(InputString, Size);
	printf("�Էµ� ������ [%s]�Դϴ�.\n", InputString);

	// ���� �ǽ�
	// ,�ڿ� �ִ� ���� ���ĺ��� ��� �빮���̾�� �Ѵ�.
	// �Է¹��� ���� : "Hello,World!"
	// ��¹��� ���� : "Hello,WORLD!"
	SimpleParser(InputString, ',');
	printf("�Ľ̵� ������ [%s]�Դϴ�.\n", InputString);
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