#include "Practice.h"



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
//		Key = 1 << 0,   //1
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


//enum Item	
//{					
//	None = 0,
//	Gun = 1 << 0,   //0b0001
//	Bullet = 1 << 1, //0b0010
//	Sword = 1 << 2,  //0b0100
//	Shield = 1 << 3, //0b1000
//};
//int Inventory = Item::None;
//int Select = 0;
//while (true)
//{
//	printf("1�� : ������ �߰�, 2�� : ������ ������, 3�� : ����\n");
//	std::cin >> Select;
//	if (Select == 1)
//	{
//		int AddItem = 0;
//		printf("�߰��� ������ ���� (1: Gun, 2: Bullet, 3: Sword, 4: Shield) : ");
//		std::cin >> AddItem;
//		if (AddItem == 1)
//		{
//			if ((Inventory & Item::Gun) != 0)
//			{
//				printf("�̹� �ִ� �������Դϴ�.\n");
//			}
//			else
//			{
//				Inventory = Inventory | Item::Gun;
//			}
//		}
//		else if (AddItem == 2)
//		{
//			if ((Inventory & Item::Bullet) != 0)
//			{
//				printf("�̹� �ִ� �������Դϴ�.\n");
//			}
//			else
//			{
//				Inventory = Inventory | Item::Bullet;
//			}
//		}
//		else if (AddItem == 3)
//		{
//			if ((Inventory & Item::Sword) != 0)
//			{
//				printf("�̹� �ִ� �������Դϴ�.\n");
//			}
//			else
//			{
//				Inventory = Inventory | Item::Sword;
//			}
//		}
//		else if (AddItem == 4)
//		{
//			if ((Inventory & Item::Shield) != 0)
//			{
//				printf("�̹� �ִ� �������Դϴ�.\n");
//			}
//			else
//			{
//				Inventory = Inventory | Item::Shield;
//			}
//		}
//	if (Select == 2)
//	{
//		int RemoveItem = 0;
//		printf("���� ������ ���� (1: Gun, 2: Bullet, 3: Sword, 4: Shield) : ");
//		std::cin >> RemoveItem;
//		if (RemoveItem == 1)
//		{
//			if ((Inventory & Item::Gun) == 0)
//			{
//				printf("���� �������Դϴ�.\n");
//			}
//			else
//			{
//				Inventory = Inventory & ~Item::Gun;
//			}
//		}
//		else if (RemoveItem == 2)
//		{
//			if ((Inventory & Item::Bullet) == 0)
//			{
//				printf("���� �������Դϴ�.\n");
//			}
//			else
//			{
//				Inventory = Inventory & ~Item::Bullet;
//			}
//		}
//		else if (RemoveItem == 3)
//		{
//			if ((Inventory & Item::Sword) == 0)
//			{
//				printf("���� �������Դϴ�.\n");
//			}
//			else
//			{
//				Inventory = Inventory & ~Item::Sword;
//			}
//		}
//		else if (RemoveItem == 4)
//		{
//			if ((Inventory & Item::Shield) == 0)
//			{
//				printf("���� �������Դϴ�.\n");
//			}
//			else
//			{
//				Inventory = Inventory & ~Item::Shield;
//			}
//		}
//		
//	}
//	else if (Select == 3)
//	{
//	   break;
//	}
//
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

        ���ø� �Լ� �����
        1. Min
        - �Ķ���� 2��
        - ���� : �Ķ���� �� ���� �� ����
        2. Max
        - �Ķ���� 2��
        - ���� : �Ķ���� �� ū �� ����
        3. clamp
        - �Ķ���� 3��(value, min, max)
        - ����
           value ���� min���� ������ min
           value ���� max���� ũ�� max
           value ���� min�� max ���̸� value
        ��� �Լ��� �̿��ؼ� ���丮�� ���� ����� �Լ� �����
        -5���丮�� = 5 * 4 * 3 * 2 * 1
    */
}

void Practice20250906()
{

}
