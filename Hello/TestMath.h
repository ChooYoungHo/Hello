#pragma once  // ����� �������� ������ �ѱ��.
#include <stdio.h>
#include <iostream> 

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


