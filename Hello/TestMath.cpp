#include <stdio.h>     // �����ϸ� Cpp ����� ������ �߿��ؼ�
#include "TestMath.h"  // ��� �������� ���


void PrintHelloWorld()
{
    printf("Hello World!\n");
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



