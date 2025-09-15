#define _CRT_SECURE_NO_WARNINGS //scanf ó��
#define _CRTDBG_MAP_ALLOC
#define new new(_NORMAL_BLOCK, __FILE__, __LINE__) // �޸� �Ҵ��ߴµ� delete �˷��ִ�
#include <crtdbg.h>
#include <iostream>   // ����� ����
#include <stdio.h>
#include <cstdio>     // stdio.h�� ���ӽ����̽� �߰��� ���� 
#include <time.h>     // �ð� ��
#include <random>
#include <limits.h>
#include <direct.h>
#include <fstream>
#include <string>
#include "Day2025.09.13 DayLeapYear.h"


/*
##���� ���ϱ�
- 1�� 1�� 1��(������)�� �������� �Է��� ��¥���� ��ĥ(��)�� �������� ����� ��, 7�� ���� �������� ������ ���ϱ�.
- ���⵵ �ùٸ��� ó���� ��
- �Է¹��� ��, ��, ���� �������� ������ ���

2025.09.12
*/


// ����
bool LeapYear(int Year)
{
    return (Year % 400 == 0) || ((Year % 4 == 0) && (Year % 100 != 0));
}

//  �Ѵ��� '��' ���ϱ�
int DayOfMonth(int Year, int Month)
{
    const int Days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }; 
    int Result = 0;

    if (Month == 2) 
    {
        Result = LeapYear(Year) ? 29 : 28;
    }
    else if (Month >= 1 && Month <= 12) 
    {
        Result = Days[Month - 1];
    }

    return Result;
}

//1�� 1�� 1��(������)�� �������� �Է��� ��¥���� ��ĥ(��)�� �������� ���
int DaySum(int Year, int Month, int Day)
{
    // ���� ���� ������ '��' ��
    int LastYear = Year - 1;                                                  
    int LeapCount = (LastYear / 4) - (LastYear / 100) + (LastYear / 400);     // �Է� ���� ������ ���� '��' ��
    int DayFromYear = LastYear * 365 + LeapCount;

    // �Է� ���� �������� '��' �� 
    const int Days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    int DayFromMonth = 0;

    for (int i = 1; i <= Month - 1; i++)               // 1������ ���� �ޱ��� '��' ��
    {                                                   
        DayFromMonth += Days[i - 1];                    
    }                                                   
    if (LeapYear(Year) && Month >= 3)                  // ���� �϶� '��' �� + 1
    {                                                   
        DayFromMonth += 1;                              
    }                                                   
                                                        
    int DayFromDay = Day - 1;                          // ��� ��, ���������� '��' ��

    return DayFromYear + DayFromMonth + DayFromDay;    // �� ��
}

// ���� ��ȯ
const char* Weekday(int Year, int Month, int Day)
{
    static const char* WeekName[7] = { "��","ȭ","��","��","��","��","��" };
    int DayCount = DaySum(Year, Month, Day);
    int Index = DayCount % 7;

    return WeekName[Index];
}

// ����
void DayWeekRun()
{
    int Year = 0;
    int Month = 0;
    int Day = 0;

    printf("��, ��, ���� �Է��ϼ���: \n");
    std::cin >> Year >> Month >> Day;

    const char* Name = Weekday(Year, Month, Day);      // ���� �̸�

    printf("����: %s����\n", Name);
}



/*
// �� ���� ��¥
const int DaysInMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

// ����
const char* Week[7] = { "������", "ȭ����", "������", "�����", "�ݿ���", "�����", "�Ͽ���" };

const char* GetDayOfWeek(int Year, int Month, int Day)
{
    int Days = GetTotalDays(Year, Month, Day);
    return Week[Days % 7];
}

bool IsLeap(int Year)
{
    // 4�� ����� �����̴�. �׸��� 100�� ����� ������ �ƴϴ�.
    // �׷��� 400�� ����� �����̴�.
    // (Year % 4 == 0) : 4�� ����̴�. -> �����̴�.
    // (Year % 100 != 0) : 100�� ����� �ƴϴ� -> �����̴�.
    // (Year % 400 == 0) : 400�� ����̴� -> �����̴�.

    // 4�� ����̰� 100�� ����� �ƴϰų�, 400�� ����� �����̴�.
    return ((Year % 4 == 0) && (Year % 100 != 0)) || (Year % 400 == 0);
}

int GetTotalDays(int Year, int Month, int Day)
{
    int TotalDays = 0;
    for (int Y = 1; Y < Year; Y++)
    {
        TotalDays += (IsLeap(Y) ? 366 : 365);	// �����̸� 366�� �߰�, �ƴϸ� 365�� �߰�
    }
    for (int M = 1; M < Month; M++)
    {
        if (M == 2 && IsLeap(Year))
        {
            TotalDays += 1;      // �����̸� 2���� �� �Ϸ� �߰�
        }
    }
    TotalDays += (Day - 1);

    return TotalDays;
}



void DayWeekRun()
{
    int Year = 0;
    int Month = 0;
    int Day = 0;
    printf("��¥�� �Է� �ϼ���(��: 2025 9 15) : ");
    std::cin >> Year >> Month >> Day;
    printf("�ش� ��¥�� [%s]�Դϴ�.\n", GetDayOfWeek(Year, Month, Day));
}
*/