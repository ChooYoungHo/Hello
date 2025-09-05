#pragma once
#include <iostream> 
#include <stdio.h>
#include <cstdio>  


int Random(int Min, int Max) {

	return rand() % (Max - Min + 1) + Min;
}


int InputAge(int Age) 
{
	
	return Age;
}

float CircleArea(float radius)
{
	return 3.14 * radius * radius;
}

bool IsOdd(int Number)
{
	return (Number % 2 != 0);
}


enum Grade 
{
	A, B, C, D, F
};
Grade GetGrade(int score) {
	if (score >= 90) return A;
	else if (score >= 80) return B;
	else if (score >= 70) return C;
	else if (score >= 60) return D;
	else return F;
}


enum Item
{
	Key  = 1 << 0,  //1
	Fuse = 1 << 1,  //2
	Book = 1 << 2,  //4
	Note = 1 << 3,  //8
};

int AddItem(int Inventory, int NewItem)
{
	return Inventory | NewItem;
}
int RemoveItem(int Inventory, int OldItem)
{
	return Inventory & (~OldItem);
}
int ToggleItem(int Inventory, int ChangeItem)
{
	return Inventory ^ ChangeItem;
}



int Pyramid(int Height);


int Factorial(int FacNumber);






/*
탬플릿 함수 만들기
- Min
파라메터 2개
리턴 : 파라메터 중 작은 수 리턴
- Max
파라메터 2개
리턴 : 파라메터 중 큰 수 리턴
- Clamp
파라메터 3개(value, min, max)
리턴
value값이 min보다 작으면 min
value값이 max보다 크면 max
value값이 min과 max 사이면 value
*/

template <typename T>
T Min(T MinNumber1, T MinNumber2) 
{
	return (MinNumber1 < MinNumber2) ? MinNumber1 : MinNumber2;
}

template <typename T>
T Max(T MinNumber1, T MinNumber2)
{
    return (MinNumber1 > MinNumber2) ? MinNumber1 : MinNumber2;
}

template <typename T>
T Clamp(T value, T Minvalue, T Maxvalue)
{
    if (value < Minvalue)
    {
        return Minvalue;
    }
    if (value > Maxvalue)
    {
        return Maxvalue;
    }
    return value;
}














