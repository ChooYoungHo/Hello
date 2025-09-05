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
���ø� �Լ� �����
- Min
�Ķ���� 2��
���� : �Ķ���� �� ���� �� ����
- Max
�Ķ���� 2��
���� : �Ķ���� �� ū �� ����
- Clamp
�Ķ���� 3��(value, min, max)
����
value���� min���� ������ min
value���� max���� ũ�� max
value���� min�� max ���̸� value
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














