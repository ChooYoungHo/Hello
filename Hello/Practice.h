#pragma once
#include <iostream> 
#include <stdio.h>
#include <cstdio>  
class TestClass
{
public:
	int Test;
	void TestFunc();
};


void Day20250902_Practice();

void Day20250903_Practice();
/*
// 헤더파일에는 선언을 작성한다.
// Ctrl + k + o  : Cpp와 h를 전환
// Ctrl + . : Cpp 자동으로 만들어줌

//void가 아니면 반드시 retrun이 있어야 한다.
//return 뒤는 계산을 안한다.

void PrintHelloWorld();  //리턴하는 값이 없고(void) 이름은 PrintHelloWorld고 파라메터도 없다.


/// <summary>
/// 두 정수를 곱합니다.
/// </summary>
/// <param name="Number1">곱할 첫 번째 정수입니다.</param>
/// <param name="Number2">곱할 두 번째 정수입니다.</param>
/// <returns>두 입력 값의 곱을 반환합니다.</returns>
int Multiply(int Number1, int Number2);  //;
//int Multiply(int Number1, int Number2 = 2); // Number = Multiply(7);  디폴트 파라메터 사용 예시
                                              // 해당 파라메터 없이 함수를 호출하면 기본적으로 설정된 값이 대신 돌아간다
                                              // 선언부에만 값을 설정한다.
                                              // 디폴트 파라메터는 항상 뒤에서부터 있어야 한다.

/// <summary>
/// 두 파라메터를 더하는 함수
/// </summary>
/// <param name="Test1">더해질 첫번째 숫자</param>
/// <param name="Test2">더해질 두번째 숫자</param>
/// <returns>파라메터가 더해진 값</returns>
int Sum(int Test1, int Test2);  // 리턴타입이 int고 이름이 sum이고 파라메터는 int 2개인 함수를 선언했다.
//int Sum(int, int);  //  위와 동일. 선언할 때는 함수의 파라메터 이름을 생략해도 된다.

float Sum(float Test1, float Test2); // 파라메터가 다르기 떄문에 함수 이름 같아도됨

template <typename T>
T Add(T Number1, T Number2)
{
    return Number1 + Number2;
}

int TestRecurcive(int Number);

inline int Square(int Number)
{
    return Number * Number;
}

/// <summary>
/// 두 정수를 곱합니다.
/// </summary>
/// <param name="Number1">곱할 첫 번째 정수입니다.</param>
/// <param name="Number2">곱할 두 번째 정수입니다.</param>
/// <returns>두 입력 값의 곱을 반환합니다.</returns>


/// <summary>
/// 두 정수의 차를 계산합니다.
/// </summary>
/// <param name="Number3">뺄셈에서 사용되는 첫 번째 정수입니다.</param>
/// <param name="Number4">뺄셈에서 사용되는 두 번째 정수입니다.</param>
/// <returns>첫 번째 정수에서 두 번째 정수를 뺀 결과값을 반환합니다.</returns>
int Subtract(int Number3, int Number4);


/// <summary>
/// 두 정수를 나눕니다.
/// </summary>
/// <param name="Number5">나눌 피제수입니다.</param>
/// <param name="Number6">나눌 제수입니다.</param>
/// <returns>나눗셈의 결과를 반환합니다. (몫)</returns>
int Divide(int Number5, int Number6);

int TestRecurcive(int Number);
*/

void Day20250904_Practice1();
void Day20250904_Practice2();
void Day20250904_Practice3();


void Practice20250905();
//int Random(int Min, int Max) {
//
//	return rand() % (Max - Min + 1) + Min;
//}
//
//
//int InputAge(int Age) 
//{
//	
//	return Age;
//}
//
//float CircleArea(float radius)
//{
//	return 3.14 * radius * radius;
//}
//
//bool IsOdd(int Number)
//{
//	return (Number % 2 != 0);
//}
//
//
//enum Grade 
//{
//	A, B, C, D, F
//};
//Grade GetGrade(int score) {
//	if (score >= 90) return A;
//	else if (score >= 80) return B;
//	else if (score >= 70) return C;
//	else if (score >= 60) return D;
//	else return F;
//}
//
//
//enum Item
//{
//	Key  = 1 << 0,  //1
//	Fuse = 1 << 1,  //2
//	Book = 1 << 2,  //4
//	Note = 1 << 3,  //8
//};
//
//int AddItem(int Inventory, int NewItem)
//{
//	return Inventory | NewItem;
//}
//int RemoveItem(int Inventory, int OldItem)
//{
//	return Inventory & (~OldItem);
//}
//int ToggleItem(int Inventory, int ChangeItem)
//{
//	return Inventory ^ ChangeItem;
//}
//
////int Pyramid(int Height);
//
//
////int Factorial(int FacNumber);
//
///*
//template <typename T>
//T Clamp(T Value, T Min, T Max)  // (const T& Value, const T& Min, const T& Max)
//{
//	if (Value < Min)
//		return Min;
//	else if (Value > Max)
//		return Max;
//	else
//		return Value;
//}
void Practice20250906();


void Day20250908_Practice1();
void Day20250908_Practice2();
///// <summary>
///// 주사위 굴리는 함수
///// </summary>
///// <param name="FaceNumber">주사위의 면 수. 기본값은 6</param>
///// <returns>랜덤으로 나온 주사위 값</returns>
//int RollDice(int FaceNumber = 6);


void Day20250908_Practice3();
void Day20250908_Practice4();
void Day20250908_Practice5();
////미로 함수
//enum MazeTile
//{
//    Path = 0,
//    Wall = 1,
//    Start = 2,
//    End = 3
//};
//
//enum MoveDirection
//{
//    DirNone = 0,
//    DirUp = 1 << 0,
//    DirDown = 1 << 1,
//    DirLeft = 1 << 2,
//    DirRight = 1 << 3
//};
//
//const int MazeWidth = 20;
//const int MazeHeight = 10;
//
//const int Maze[MazeHeight][MazeWidth] =
//{
//    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
//    {1,2,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,1,0,1},
//    {1,1,1,1,0,1,0,1,1,0,1,0,1,1,0,1,0,1,0,1},
//    {1,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1},
//    {1,0,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1},
//    {1,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1},
//    {1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1},
//    {1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,3,1},
//    {1,0,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1},
//    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
//};
//
///// <summary>
///// 미로를 출력하는 함수
///// </summary>
///// <param name="PlayerX">플레이어의 현재 위치(X)</param>
///// <param name="PlayerY">플레이어의 현재 위치(Y)</param>
//void PrintMaze(int PlayerX, int PlayerY);
//
///// <summary>
///// 플레이어의 시작위치를 받아오는 함수
///// </summary>
///// <param name="OutStartX">플레이어의 시작위치(X) 출력용파라메터</param>
///// <param name="OutStartY">플레이어의 시작위치(Y) 출력용파라메터</param>
//void FindStartPosition(int& OutStartX, int& OutStartY);
//
///// <summary>
///// 플레이어의 현재 위치에서 가능한 이동 경로를 출력하고 모든 경로를 합친 비트 플래그를 반환합니다.
///// </summary>
///// <param name="PlayerX">플레이어의 현재 X 좌표입니다.</param>
///// <param name="PlayerY">플레이어의 현재 Y 좌표입니다.</param>
///// <returns>플레이어가 이동할 수 있는 경로를 합친 비트 플래그를 반환합니다.</returns>
//int PrintAvailableMoves(int PlayerX, int PlayerY);
//
///// <summary>
///// 해당 위치가 벽인지 확인하는 함수
///// </summary>
///// <param name="X">확인할 위치(X)</param>
///// <param name="Y">확인할 위치(Y)</param>
///// <returns>벽이면 true, 아니면 false</returns>
//bool IsWall(int X, int Y);
//
///// <summary>
///// 해당 위치가 도착점인지 확인하는 함수
///// </summary>
///// <param name="X">확인할 위치(X)</param>
///// <param name="Y">확인할 위치(Y)</param>
///// <returns>도착점이면 true, 아니면 false</returns>
//bool IsEnd(int X, int Y);
//
///// <summary>
///// 입력처리를 하는 함수. 최종적으로 결정된 이동 방향 리턴
///// </summary>
///// <param name="MoveFlags">이동가능한 모든 경로의 비트플래그 합</param>
///// <returns>결정된 방향</returns>
//MoveDirection GetMoveInput(int MoveFlags);
void Day20250909_Practice4();
void Day20250909_Practice5();

void Day20250910_파싱();
void Day20250910_Practice1();
///// <summary>
///// TargetString에서 TargetCharacter가 몇번째 있는지 찾아주는 함수
///// </summary>
///// <param name="TargetString">찾아질 문자열</param>
///// <param name="TargetCharacter">찾을 글자</param>
///// <returns>-1이면 못찾음, 그 외는 TargetCharacter의 인덱스</returns>
//int FindCharIndex(const char* TargetString, const char TargetCharacter);
void Day20250909_Practice2();
///// <summary>
///// TargetString에서 TargetCharacter가 몇번째 있는지 찾아주는 함수
///// </summary>
///// <param name="TargetString">찾아질 문자열</param>
///// <param name="TargetCharacter">찾을 글자</param>
///// <returns>-1이면 못찾음, 그 외는 TargetCharacter의 인덱스</returns>
//int FindCharIndex(const char* TargetString, const char TargetCharacter);
//
//int MyStringLength(const char* Target);
//void MyStringCopy(const char* Source, char* Destination);
//void MyStringCat(char* Source, const char* Destination);
//void SimpleParser(char* Source, const char Delimiter);
//void ReadFile();
//void TestString();
void Day20250909_Practice3();
void Day20250909_Practice4();
void Day20250909_Practice1();
void Day20250909_Practice1();







