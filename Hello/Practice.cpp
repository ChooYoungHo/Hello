#include <iostream>
#include <stdio.h>
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

}
