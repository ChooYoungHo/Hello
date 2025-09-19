#include "CircularQueue.h"

//Enqueue : Rear�� �����͸� �߰��ϴ� �Լ�
void CircularQueue::Enqueue(int InValue)
{
	if (IsFull())
	{
		printf("����: ť�� ���� á���ϴ�.\n");
		return;
	}

	if (IsEmpty())  // ����� �� �ִ� ����� Front�� 0���� ����
	{
		Front = 0;
	}

	Rear = (Rear + 1) % MaxSize;  // Rear�� 1����. MaxSize�� �Ѿ�� �ٽ� 0����
	Data[Rear] = InValue;
}

//Dequeue : Front���� �����͸� �� ���� �Լ�
int CircularQueue::Dequeue()
{
	if (IsEmpty())
	{
		printf("����: ť�� ������ϴ�.\n");
		return Empty;
	}
	int Result = Data[Front];

	if (Front != Rear)
	{
		// �Ϲ����� ��Ȳ
		Front = (Front + 1) % MaxSize;
	}
	else
	{
		// ���������� 1���� ���� ��Ȳ
		Front = Empty;   // Front, Rear�� -1
		Rear = Empty;
	}

	return Result;
}

void CircularQueue::TestPrintQueue()
{
    // Front���� Rear���� ����ϱ�
	// ť�� ũ�⵵ ���

	if (IsEmpty())
	{
		printf("ť�� ����ֽ��ϴ�.\n");
		return;
	}

	printf("ť�� ��: ");
	for (int i = 0; i < GetSize(); i++)
	{
		int Index = (Front + i) % MaxSize;
		printf("%d ", Data[Index]);
	}
	printf("\n");

	printf("ť�� ũ��: %d\n", GetSize());

}