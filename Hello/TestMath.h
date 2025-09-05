#pragma once  // 헤더를 읽은적이 있으면 넘긴다.
#include <stdio.h>
#include <iostream> 

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


