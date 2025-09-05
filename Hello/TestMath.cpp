#include <stdio.h>     // 가능하면 Cpp 헤더의 순서가 중요해서
#include "TestMath.h"  // 헤더 쓰여진걸 사용


void PrintHelloWorld()
{
    printf("Hello World!\n");
}

int Sum(int Test1, int Test2)  // int Sum(int, int); 이 선언을 정의했다.
{
    int Result = Test1 + Test2;
  
    return Test1 + Test2;  // 리턴은 왠만하면 마지막에 하나
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



