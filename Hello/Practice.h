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
// ������Ͽ��� ������ �ۼ��Ѵ�.
// Ctrl + k + o  : Cpp�� h�� ��ȯ
// Ctrl + . : Cpp �ڵ����� �������

//void�� �ƴϸ� �ݵ�� retrun�� �־�� �Ѵ�.
//return �ڴ� ����� ���Ѵ�.

void PrintHelloWorld();  //�����ϴ� ���� ����(void) �̸��� PrintHelloWorld�� �Ķ���͵� ����.


/// <summary>
/// �� ������ ���մϴ�.
/// </summary>
/// <param name="Number1">���� ù ��° �����Դϴ�.</param>
/// <param name="Number2">���� �� ��° �����Դϴ�.</param>
/// <returns>�� �Է� ���� ���� ��ȯ�մϴ�.</returns>
int Multiply(int Number1, int Number2);  //;
//int Multiply(int Number1, int Number2 = 2); // Number = Multiply(7);  ����Ʈ �Ķ���� ��� ����
                                              // �ش� �Ķ���� ���� �Լ��� ȣ���ϸ� �⺻������ ������ ���� ��� ���ư���
                                              // ����ο��� ���� �����Ѵ�.
                                              // ����Ʈ �Ķ���ʹ� �׻� �ڿ������� �־�� �Ѵ�.

/// <summary>
/// �� �Ķ���͸� ���ϴ� �Լ�
/// </summary>
/// <param name="Test1">������ ù��° ����</param>
/// <param name="Test2">������ �ι�° ����</param>
/// <returns>�Ķ���Ͱ� ������ ��</returns>
int Sum(int Test1, int Test2);  // ����Ÿ���� int�� �̸��� sum�̰� �Ķ���ʹ� int 2���� �Լ��� �����ߴ�.
//int Sum(int, int);  //  ���� ����. ������ ���� �Լ��� �Ķ���� �̸��� �����ص� �ȴ�.

float Sum(float Test1, float Test2); // �Ķ���Ͱ� �ٸ��� ������ �Լ� �̸� ���Ƶ���

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
/// �� ������ ���մϴ�.
/// </summary>
/// <param name="Number1">���� ù ��° �����Դϴ�.</param>
/// <param name="Number2">���� �� ��° �����Դϴ�.</param>
/// <returns>�� �Է� ���� ���� ��ȯ�մϴ�.</returns>


/// <summary>
/// �� ������ ���� ����մϴ�.
/// </summary>
/// <param name="Number3">�������� ���Ǵ� ù ��° �����Դϴ�.</param>
/// <param name="Number4">�������� ���Ǵ� �� ��° �����Դϴ�.</param>
/// <returns>ù ��° �������� �� ��° ������ �� ������� ��ȯ�մϴ�.</returns>
int Subtract(int Number3, int Number4);


/// <summary>
/// �� ������ �����ϴ�.
/// </summary>
/// <param name="Number5">���� �������Դϴ�.</param>
/// <param name="Number6">���� �����Դϴ�.</param>
/// <returns>�������� ����� ��ȯ�մϴ�. (��)</returns>
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
///// �ֻ��� ������ �Լ�
///// </summary>
///// <param name="FaceNumber">�ֻ����� �� ��. �⺻���� 6</param>
///// <returns>�������� ���� �ֻ��� ��</returns>
//int RollDice(int FaceNumber = 6);


void Day20250908_Practice3();
void Day20250908_Practice4();
void Day20250908_Practice5();
////�̷� �Լ�
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
///// �̷θ� ����ϴ� �Լ�
///// </summary>
///// <param name="PlayerX">�÷��̾��� ���� ��ġ(X)</param>
///// <param name="PlayerY">�÷��̾��� ���� ��ġ(Y)</param>
//void PrintMaze(int PlayerX, int PlayerY);
//
///// <summary>
///// �÷��̾��� ������ġ�� �޾ƿ��� �Լ�
///// </summary>
///// <param name="OutStartX">�÷��̾��� ������ġ(X) ��¿��Ķ����</param>
///// <param name="OutStartY">�÷��̾��� ������ġ(Y) ��¿��Ķ����</param>
//void FindStartPosition(int& OutStartX, int& OutStartY);
//
///// <summary>
///// �÷��̾��� ���� ��ġ���� ������ �̵� ��θ� ����ϰ� ��� ��θ� ��ģ ��Ʈ �÷��׸� ��ȯ�մϴ�.
///// </summary>
///// <param name="PlayerX">�÷��̾��� ���� X ��ǥ�Դϴ�.</param>
///// <param name="PlayerY">�÷��̾��� ���� Y ��ǥ�Դϴ�.</param>
///// <returns>�÷��̾ �̵��� �� �ִ� ��θ� ��ģ ��Ʈ �÷��׸� ��ȯ�մϴ�.</returns>
//int PrintAvailableMoves(int PlayerX, int PlayerY);
//
///// <summary>
///// �ش� ��ġ�� ������ Ȯ���ϴ� �Լ�
///// </summary>
///// <param name="X">Ȯ���� ��ġ(X)</param>
///// <param name="Y">Ȯ���� ��ġ(Y)</param>
///// <returns>���̸� true, �ƴϸ� false</returns>
//bool IsWall(int X, int Y);
//
///// <summary>
///// �ش� ��ġ�� ���������� Ȯ���ϴ� �Լ�
///// </summary>
///// <param name="X">Ȯ���� ��ġ(X)</param>
///// <param name="Y">Ȯ���� ��ġ(Y)</param>
///// <returns>�������̸� true, �ƴϸ� false</returns>
//bool IsEnd(int X, int Y);
//
///// <summary>
///// �Է�ó���� �ϴ� �Լ�. ���������� ������ �̵� ���� ����
///// </summary>
///// <param name="MoveFlags">�̵������� ��� ����� ��Ʈ�÷��� ��</param>
///// <returns>������ ����</returns>
//MoveDirection GetMoveInput(int MoveFlags);
void Day20250909_Practice4();
void Day20250909_Practice5();

void Day20250910_�Ľ�();
void Day20250910_Practice1();
///// <summary>
///// TargetString���� TargetCharacter�� ���° �ִ��� ã���ִ� �Լ�
///// </summary>
///// <param name="TargetString">ã���� ���ڿ�</param>
///// <param name="TargetCharacter">ã�� ����</param>
///// <returns>-1�̸� ��ã��, �� �ܴ� TargetCharacter�� �ε���</returns>
//int FindCharIndex(const char* TargetString, const char TargetCharacter);
void Day20250909_Practice2();
///// <summary>
///// TargetString���� TargetCharacter�� ���° �ִ��� ã���ִ� �Լ�
///// </summary>
///// <param name="TargetString">ã���� ���ڿ�</param>
///// <param name="TargetCharacter">ã�� ����</param>
///// <returns>-1�̸� ��ã��, �� �ܴ� TargetCharacter�� �ε���</returns>
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







