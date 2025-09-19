#include <iostream> 
#include <stdio.h>
#include "Day20250919_Stack.h"
#include "FixedStack.h"
#include "CircularQueue.h"
#include "CircularQueue2.h"

void Day20250919_Stack::TestStack()
{
	FixedStack Stack;

	// 1. 초기 상태 테스트
	// 스택이 비었는지 확인해보기 (IsEmpty와 GetSize 사용하고 printf로 출력하기)

	if (Stack.IsEmpty())
	{
		printf("스택이 비어있습니다.\n");
	}
	else
	{
		printf("스택이 비어있지 않습니다.\n");
	}
	printf("스택의 현재 크기: %d\n", Stack.GetSize());

	// 2. Push 테스트
	Stack.Push(10);
	printf("Top의 값: %d\n", Stack.Top());
	printf("스택의 현재 크기: %d\n", Stack.GetSize());
	Stack.Push(20);
	printf("Top의 값: %d\n", Stack.Top());
	printf("스택의 현재 크기: %d\n", Stack.GetSize());
	Stack.Push(30);
	printf("스택의 현재 크기: %d\n", Stack.GetSize());

	// 3. Pop 테스트
	// 데이터 하나 빼고 뺀 값 출력해보기, 스택의 남은 Top 위치값과 스택 크기 출력해보기
	Stack.Pop();
	printf("뺀 값: %d\n", Stack.Pop());
	printf("Top 현재 위치: %d\n", Stack.Top());
	printf("스택의 현재 크기: %d\n", Stack.GetSize());

	// 4. 스택 오버플로우 테스트
	// 스택 가득 채우고 한번 더 넣어 보기
	for (int i = 0; i < 10; i++)
	{
		Stack.Push(i * 10);
		printf("Top의 값: %d\n", Stack.Top());
		printf("스택의 현재 크기: %d\n", Stack.GetSize());
	}

	// 5. 스택 언더플로우 테스트
	// 스택 다 비우고 한번 더 뺴보기
	while (!Stack.IsEmpty())
	{
		Stack.Pop();
		printf("Top의 값: %d\n", Stack.Pop());
		printf("스택의 현재 크기: %d\n", Stack.GetSize());
	}
}

void Day20250919_Stack::TestQueue()
{
	// Queue
	// 1. 메뉴 만들기
	//	1번 누르면 Enqueue
	//	2번 누르면 Dequeue
	//	3번 누르면 Peek	
	//	4번 누르면 TestPrintQueue
	
	CircularQueue Queue;
	int Choice = 0;
	int Value = 0;

	while (true)
	{
		printf("====메뉴====\n");
		printf("1번: Enqueue\n");
		printf("2번: Dequeue\n");
		printf("3번: Peek\n");
		printf("4번: TestPrintQueue\n");
		printf("5번: 종료");
		printf("선택: \n");
		std::cin >> Choice;

		if (Choice == 1)
		{
			printf("추가 값 입력: \n");
			std::cin >> Value;
			Queue.Enqueue(Value);
		}
		if (Choice == 2)
		{
			int DequeueValue = Queue.Dequeue();
			printf("제거 값: %d\n", DequeueValue);
		}
		if (Choice == 3)
		{
			int PeekValue = Queue.Peek();
			printf("큐의 Front 값: %d\n", PeekValue);
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
			printf("잘못 입력.\n");
		}
	}

	// 2. Circular Queue2 만들기
	// 생성자에서 파라메터를 받아 크기를 조절 가능하게 만들기

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
	//얕은 복사 : 복사를 할 때 완전한 사본을 만드는 것이 아니라 주소만 복사하는 복사
	CircularQueue2 a(5);
	a.Enqueue(10);
	a.Enqueue(20);

	//CircularQueue2 b(a);	// 복사 생성자로 a의 사본을 만든 것
	//CircularQueue2 c = a;	// 대입 연산자로 a의 사본을 만든 것

	//a.Enqueue(30);

	//printf("a\n");
	//a.TestPrintQueue();
	//printf("\nb\n");
	//b.TestPrintQueue();
	//printf("\nc\n");
	//c.TestPrintQueue();

	//TestSwallowCopy(a);
	//TestSwallowCopy(a);		// 참조 넘기기
	//TestSwallowCopy(&a);	// 주소 넘기기
}
