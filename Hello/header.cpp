#include <iostream>   
#include <stdio.h>
#include <cstdio>     
#include <time.h>     
#include <random>
#include "header.h"   
#include "TestMath.h"

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