#define _CRT_SECURE_NO_WARNINGS //scanf 처리
#define _CRTDBG_MAP_ALLOC
#define new new(_NORMAL_BLOCK, __FILE__, __LINE__) // 메모리 할당했는데 delete 알려주는
#include <crtdbg.h>
#include <iostream>   // 입출력 관련
#include <stdio.h>
#include <cstdio>     // stdio.h에 네임스페이스 추가한 래퍼 
#include <time.h>     // 시간 값
#include <random>
#include <limits.h>
#include <direct.h>
#include <fstream>
#include <string>
#include "Day2025.09.13 DayLeapYear.h"


/*
##요일 구하기
- 1년 1월 1일(월요일)을 기준으로 입력한 날짜까지 며칠(일)이 지났는지 계산한 후, 7로 나눈 나머지로 요일을 구하기.
- 윤년도 올바르게 처리할 것
- 입력받은 연, 월, 일을 기준으로 요일을 출력

2025.09.12
*/


// 윤년
bool LeapYear(int Year)
{
    return (Year % 400 == 0) || ((Year % 4 == 0) && (Year % 100 != 0));
}

//  한달의 '일' 구하기
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

//1년 1월 1일(월요일)을 기준으로 입력한 날짜까지 며칠(일)이 지났는지 계산
int DaySum(int Year, int Month, int Day)
{
    // 이전 연도 까지의 '일' 수
    int LastYear = Year - 1;                                                  
    int LeapCount = (LastYear / 4) - (LastYear / 100) + (LastYear / 400);     // 입력 연도 까지의 윤년 '일' 수
    int DayFromYear = LastYear * 365 + LeapCount;

    // 입력 연도 월까지의 '일' 수 
    const int Days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    int DayFromMonth = 0;

    for (int i = 1; i <= Month - 1; i++)               // 1월부터 이전 달까지 '일' 수
    {                                                   
        DayFromMonth += Days[i - 1];                    
    }                                                   
    if (LeapYear(Year) && Month >= 3)                  // 윤년 일때 '일' 수 + 1
    {                                                   
        DayFromMonth += 1;                              
    }                                                   
                                                        
    int DayFromDay = Day - 1;                          // 요번 달, 전날까지의 '일' 수

    return DayFromYear + DayFromMonth + DayFromDay;    // 총 합
}

// 요일 반환
const char* Weekday(int Year, int Month, int Day)
{
    static const char* WeekName[7] = { "월","화","수","목","금","토","일" };
    int DayCount = DaySum(Year, Month, Day);
    int Index = DayCount % 7;

    return WeekName[Index];
}

// 실행
void DayWeekRun()
{
    int Year = 0;
    int Month = 0;
    int Day = 0;

    printf("연, 월, 일을 입력하세요: \n");
    std::cin >> Year >> Month >> Day;

    const char* Name = Weekday(Year, Month, Day);      // 요일 이름

    printf("요일: %s요일\n", Name);
}



/*
// 각 월별 날짜
const int DaysInMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

// 요일
const char* Week[7] = { "월요일", "화요일", "수요일", "목요일", "금요일", "토요일", "일요일" };

const char* GetDayOfWeek(int Year, int Month, int Day)
{
    int Days = GetTotalDays(Year, Month, Day);
    return Week[Days % 7];
}

bool IsLeap(int Year)
{
    // 4의 배수는 윤년이다. 그리고 100의 배수는 윤년이 아니다.
    // 그런데 400의 배수는 윤년이다.
    // (Year % 4 == 0) : 4의 배수이다. -> 윤년이다.
    // (Year % 100 != 0) : 100의 배수가 아니다 -> 윤년이다.
    // (Year % 400 == 0) : 400의 배수이다 -> 윤년이다.

    // 4의 배수이고 100의 배수가 아니거나, 400의 배수면 윤년이다.
    return ((Year % 4 == 0) && (Year % 100 != 0)) || (Year % 400 == 0);
}

int GetTotalDays(int Year, int Month, int Day)
{
    int TotalDays = 0;
    for (int Y = 1; Y < Year; Y++)
    {
        TotalDays += (IsLeap(Y) ? 366 : 365);	// 윤년이면 366일 추가, 아니면 365일 추가
    }
    for (int M = 1; M < Month; M++)
    {
        if (M == 2 && IsLeap(Year))
        {
            TotalDays += 1;      // 윤년이면 2월일 때 하루 추가
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
    printf("날짜를 입력 하세요(예: 2025 9 15) : ");
    std::cin >> Year >> Month >> Day;
    printf("해당 날짜는 [%s]입니다.\n", GetDayOfWeek(Year, Month, Day));
}
*/