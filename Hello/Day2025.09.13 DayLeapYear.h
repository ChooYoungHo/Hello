#pragma once




bool LeapYear(int Year);
int  DayOfMonth(int Year, int Month);
int  DaySum(int Year, int Month, int Day);
const char* Weekday(int Year, int Month, int Day);

void DayWeekRun();



/*
/// <summary>
/// 날짜를 입력하면 요일을 알려주는 함수
/// </summary>
/// <param name="Year">몇년</param>
/// <param name="Month">몇월</param>
/// <param name="Day">몇일</param>
/// <returns>요일 문자열</returns>
const char* GetDayOfWeek(int Year, int Month, int Day);

/// <summary>
/// 윤년 판별 함수
/// </summary>
/// <param name="Year">확인할 연도</param>
/// <returns>윤년이면 true, 아니면 false</returns>
bool IsLeap(int Year);

/// <summary>
/// 1년 1월 1일에서 며칠이 지났는지 계산하는 함수
/// </summary>
/// <param name="Year">몇년</param>
/// <param name="Month">몇월</param>
/// <param name="Day">몇일</param>
/// <returns></returns>
int GetTotalDays(int Year, int Month, int Day);

void DayWeekRun();
*/
