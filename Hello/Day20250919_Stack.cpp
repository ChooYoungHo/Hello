#include <iostream> 
#include <stdio.h>
#include "Day20250919_Stack.h"
#include "FixedStack.h"
#include "CircularQueue.h"
#include "CircularQueue2.h"

void Day20250919_Stack::TestStack()
{
	FixedStack Stack;

	// 1. �ʱ� ���� �׽�Ʈ
	// ������ ������� Ȯ���غ��� (IsEmpty�� GetSize ����ϰ� printf�� ����ϱ�)

	if (Stack.IsEmpty())
	{
		printf("������ ����ֽ��ϴ�.\n");
	}
	else
	{
		printf("������ ������� �ʽ��ϴ�.\n");
	}
	printf("������ ���� ũ��: %d\n", Stack.GetSize());

	// 2. Push �׽�Ʈ
	Stack.Push(10);
	printf("Top�� ��: %d\n", Stack.Top());
	printf("������ ���� ũ��: %d\n", Stack.GetSize());
	Stack.Push(20);
	printf("Top�� ��: %d\n", Stack.Top());
	printf("������ ���� ũ��: %d\n", Stack.GetSize());
	Stack.Push(30);
	printf("������ ���� ũ��: %d\n", Stack.GetSize());

	// 3. Pop �׽�Ʈ
	// ������ �ϳ� ���� �� �� ����غ���, ������ ���� Top ��ġ���� ���� ũ�� ����غ���
	Stack.Pop();
	printf("�� ��: %d\n", Stack.Pop());
	printf("Top ���� ��ġ: %d\n", Stack.Top());
	printf("������ ���� ũ��: %d\n", Stack.GetSize());

	// 4. ���� �����÷ο� �׽�Ʈ
	// ���� ���� ä��� �ѹ� �� �־� ����
	for (int i = 0; i < 10; i++)
	{
		Stack.Push(i * 10);
		printf("Top�� ��: %d\n", Stack.Top());
		printf("������ ���� ũ��: %d\n", Stack.GetSize());
	}

	// 5. ���� ����÷ο� �׽�Ʈ
	// ���� �� ���� �ѹ� �� ������
	while (!Stack.IsEmpty())
	{
		Stack.Pop();
		printf("Top�� ��: %d\n", Stack.Pop());
		printf("������ ���� ũ��: %d\n", Stack.GetSize());
	}
}

void Day20250919_Stack::TestQueue()
{
	// Queue
	// 1. �޴� �����
	//	1�� ������ Enqueue
	//	2�� ������ Dequeue
	//	3�� ������ Peek	
	//	4�� ������ TestPrintQueue
	
	CircularQueue Queue;
	int Choice = 0;
	int Value = 0;

	while (true)
	{
		printf("====�޴�====\n");
		printf("1��: Enqueue\n");
		printf("2��: Dequeue\n");
		printf("3��: Peek\n");
		printf("4��: TestPrintQueue\n");
		printf("5��: ����");
		printf("����: \n");
		std::cin >> Choice;

		if (Choice == 1)
		{
			printf("�߰� �� �Է�: \n");
			std::cin >> Value;
			Queue.Enqueue(Value);
		}
		if (Choice == 2)
		{
			int DequeueValue = Queue.Dequeue();
			printf("���� ��: %d\n", DequeueValue);
		}
		if (Choice == 3)
		{
			int PeekValue = Queue.Peek();
			printf("ť�� Front ��: %d\n", PeekValue);
		}
		if (Choice == 4)
		{
			Queue.TestPrintQueue();
		}
		if (Choice == 5)
		{
			break;
		}
		else
		{
			printf("�߸� �Է�.\n");
		}
	}

	// 2. Circular Queue2 �����
	// �����ڿ��� �Ķ���͸� �޾� ũ�⸦ ���� �����ϰ� �����

	void TestQueue2();
	{
		CircularQueue2 queue;
		queue.Enqueue(10);
		queue.Enqueue(20);
		queue.Enqueue(30);
		queue.Enqueue(40);
		queue.Enqueue(50);
		queue.Enqueue(60);
		queue.Enqueue(70);
		queue.Enqueue(80);
		queue.Enqueue(90);
		queue.Enqueue(100);

		queue.Dequeue();
		queue.Dequeue();
		queue.Dequeue();
		queue.Dequeue();

		queue.Enqueue(110);
		queue.Enqueue(120);
	}
}

void Day20250919_Stack::TestSwallowCopy()
{
	//���� ���� : ���縦 �� �� ������ �纻�� ����� ���� �ƴ϶� �ּҸ� �����ϴ� ����
	CircularQueue2 a(5);
	a.Enqueue(10);
	a.Enqueue(20);

	//CircularQueue2 b(a);	// ���� �����ڷ� a�� �纻�� ���� ��
	//CircularQueue2 c = a;	// ���� �����ڷ� a�� �纻�� ���� ��

	//a.Enqueue(30);

	//printf("a\n");
	//a.TestPrintQueue();
	//printf("\nb\n");
	//b.TestPrintQueue();
	//printf("\nc\n");
	//c.TestPrintQueue();

	//TestSwallowCopy(a);
	//TestSwallowCopy(a);		// ���� �ѱ��
	//TestSwallowCopy(&a);	// �ּ� �ѱ��
}
