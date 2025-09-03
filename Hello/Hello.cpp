#define _CRT_SECURE_NO_WARNINGS //scanf 처리

// Hello.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// #define _CRT_SECURE_NO_WARNINGS //scanf 처리

// 소스파일
// 주석 : 프로그램에서 영향을 끼치지 않는 부분
// F5 : 디버그 실행 
// F9 : 브레이크 포인트 설정/해제
// 이름 공간 : using namespace std; 
// if는 범위가 큰 것이 먼저 체크 하기
// 변수는 사용하기 직전에 선언하기
// 변수는 앞문자 대글자로 하기

/* 범위 주석
ctrl+D : 한줄 복제 하기
shift+Delete : 한줄 삭제하기
shift+화살표 : 블럭 잡기
Alt+Shift+화살표 : 세로로 블럭 잡기
Alt+화살표 위아래 : 줄 위아래 이동
Ctrl+화살표 위아래 : 보이는 영역 올리고 내리기
Ctrl+화살표 좌우 : 문장 이동
Ctrl+Space 누르면 자동완성 다시 뜸
프로그램 디버그 : <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴1
Ctrl+B+B : 프로젝트 빌드 (Alt+B+B)
Ctrl+B+R : 프로젝트 리빌드
Ctrl+K+C : 블럭 영역 전부 주석 처리
Ctrl+K+U : 블럭 영역 전부 주석 주석해제 처리
*/

/*
컴파일러 : 번역기 (사람이 써 놓은 코드를 기계가 알아듣게 번역해줌)
          - 목적코드 생성
          - 링커가 연결해서 실행파일 생성
빌드 : 실행파일 생성하기 (F5)
빌드 -> 솔루션 정리 (Debug 폴더 정리)
리빌드 : 전체 다시 빌드하기
.pdb 파일은 절대 주지마
*/

/*
변수(Variable)
  - 변하는 숫자
  - 컴퓨터에 값을 기억 시키기 위해 만들고 사용
*/

/*
연산자(Operator)
  - 계산을 하기 위한 기호
  - 대입 연산자
  = 오른쪽에 있는 값을 왼쪽에 넣어라
  a = b; // b에 있는 값을 a에 넣어라
  - 산술 연산자
	  사칙연산 + - * / %(나머지 연산 a=5%3; a에는 2가 들어간다)
  - 복합 대입연산자
      줄여쓰기용
      a += b; // 아래와 같은 코드
	  a = a + b;
  - 증감 연산자
      a++; // a = a + 1; a에다가 1을 더해라
	  a--; // a = a - 1; a에다가 1을 빼라
  == 양변이 같다
*/

/*
이진수(Binary)
  - 컴퓨터는 0과 1만 알수 있기 떄문에 기본적으로 이진수를 사용.

  int number = 10; // 10진수 실제 메모리에는 0000 0000 0000 0000 0000 0000 0000 1010
	
  ex) 13 = 2^3 * 1 + 2^2 * 1 + 0 + 2^0 * 1 = 1101
	
*/

/*
데이터 타입
int : 일반적으로 32bit, 범위는 대략 -21억 ~ +21억 넘어가면 오버플로우, unsigned 사용하면 양수만
float : 실수형(소수점), 32bit, 태생적으로 오차가 있는 타입, 대략 총 7자리부터 오차 발생
double : 실수형, 64bit 
bool : 불리언, true/false 만 저장, 8bit
char : 캐릭터, 글자하나를 저장하는 데이터 타입, 8bit 정수형
     char alpha = 'a'; // 글자 하나만 저장
	 char alpha = '64'; // 8bit (2^8, 256까지만)
std::string : 스트링, 문자열을 쉽게 다룰 수 있는 자료형
     문자열 : 글자 여러개가 연결된것
	 std::string str = "hello!";
	 char* str;;
	 char str[32];
*/

/*
상수(Constant) 
  - const
  - 변하지 않는 수
  - 코드의 안정성과 가독성을 높여준다. 
     (매직넘버 회피에 좋다.)
	 (매크로와는 달리 타입체크가 가능하다.)
*/

/*
비교 연산자
  - 비교를 하는 연산자, 참이냐 거젓이냐가 결과로 나온다.
  - >, <, >=, ,<=, ==

int a = 10;
int b = 20;
bool result = a > b;  // 결과는 거짓이니까 result = false;

int a = 100;
int b = 
bool result = a 

int a = 50;
int b = 50;
bool result = a == b;  // 결과는 참이니까 result = true;
*/

/*
제어문
  - 프로그램의 흐름을 제어하는 문(Statement)
    - 조건문 : 조건에 따라 프로그램의 흐름을 변경하는 문
	  - if, else if, else
	  - switch
	    if : 소괄호 안이 true면 중괄호 안의 코드를 실행하라
		     특정 조건을 만족할 때만 어떤 코드를 실행하고 싶을 때 사용
        if-else : 이거 아니면 저거일때 사용
		          int a = 10;
				  int b = 20;
				  int c = =;
				  if (a > b)
				  {
				     c = a * 2 + b;
			      }
				  else if ()
				  {
				  }
				  else
				  {
				     c = a + b * 2;
				  } 
				  c = (a > b) ? (a * 2 + b) : (a + b *2); // 삼항연산자 위에 if문과 같은 것

       switch (a)
	   {
	   case 1;
	       break;
	   case 3;
	       break;
	   default;   // 그 밖에
	       break;
       }

	- 반복문 : 일정 조건에 따라 코드를 반복하는 문

*/

/*
논리 연산자
   - bool 값을 양변에 받아 bool 로 된 결과를 낸다.
       && (And) : && 의 양쪽이 둘다 true면 true, 그 외는 false (false 확률이 높은걸 앞에)
       || (Or)  : || 의 양쪽에 하나라도 true가 있으면 true, 아니면 false (true 확률이 높은걸 앞에)
       !  (Not) : ! 뒤에 bool 이 true면 false, false면 true 
*/

/*
이스케이프 스퀸스
\n : 줄바꾸기 (개행문자)
\t : 탭 넣기
\" : 쌍따음표 한개
\\ : \찍기
\r : 캐리지 리턴 (윈도우에서는 중요하지 않음. 리눅스에서는 중요함 커서가 줄 바꾸고 맨 앞으로)
printf("Hello\tWorld!\n"); // c언어의 출력 방법
printf("\"추영호\t");       //""안에 \n이 있으면 줄을 바꾸라는 의미
printf("90년생입니다.\n");
printf("");

std::cout << "Hello World!\n"; // c++ 출력 방법

int number = 0; // number라는 이름을 가진 int(인티저)변수를 선언하고 거기에 0을 대입한다.

int number; 변수 선업
number = 0; 변수 선언

int : 정수형 (소수점이 없는 숫자
number : 5.3 이면 5가 저장
number : 5/2 이면 2가 저장

scanf("%d", &number); // 숫자를 하나 입력 받기 (c)
printf("입력한 숫자는 : %d\n", number);

std::cin >> number; // 숫자를 하나 입력 받기 (c++)
printf("나이는: %d\n", number);

float number1 = 10.0f;// 10이라는 float 타입의 값을 float인 number1 에 넣기 // 숫자 뒤에 f 무조건
float number2 = 15.0; // 15라는 double 타입의 값을 float인 number2 에 넣기
printf("플로트 : %.2f", num)  // 소수점 둘째 자리까지만 출력

float 타입을 == 로 비교할 때 반드시 아래와 같이 진행해야함.
float epslion = 0.001f;
a < (b + epslion);
a > (b - epslion);
*/



#include <iostream>   // 입출력 관련
#include <stdio.h>
#include <cstdio>     // stdio.h에 네임스페이스 추가한 래퍼 
#include "header.h"   //헤더파일


int main()  // main 함수는 반드시 하나만, 앤트리 포인트 (코드가 시작되는 곳)


{
	
	//숫자를 입력받아 양수인지 음수인지 0인지 출력하기

	int num1 = 0;
	std::cin >> num1;

	if (num1 > 0)
	{
		printf("양수.\n");
	}
	else if (num1 < 0)
	{
		printf("음수.\n");
	}
	else
	{
		printf("0\n");
	}



	//숫자를 입력받아 홀수인지 짝수인지 출력하기

	int num2 = 0;
	std::cin >> num2;

	if (num2 % 2 == 0)
	{
		printf("짝수");
	}
	else
	{
		printf("홀수");
	}



	//두 수를 입력 받아 더 큰 수를 출력하기. 같을 경우는 같다고 출력.

	int num3 = 0;
	int num4 = 0;
	std::cin >> num3 >> num4;
	if (num3 > num4)
	{
		printf("큰 수: %d\n", num3);
	}
	else if (num3 < num4)
	{
		printf("큰 수: %d\n", num4);
	}
	else
	{
		printf("같음\n");
	}




	//나이와 키를 입력 받아, 6세 이상, 120cm 이상일 때 롤러코스터 탑승 가능, 그 외에는 -불가능으로 출력

	const unsigned int LimitAge = 5;
	const unsigned Limithei = 120.0f;
	unsigned int age = 0;
	float hei = 0; // 임시적 변환 (대충 변환해주는거, 보통 표현 범위가 큰쪽으로 변경됨)

	std::cin >> age >> hei;
	if (age > LimitAge && hei >= Limithei)
	{
		printf("탑승 가능\n");
	}
	else
	{
		printf("탑승 불가능\n");
	}




	//점수를 입력 받아 90점 이상은 A, 80점 이상은 B, 70점 이상은 C, 60점 이상은 D, 그 -이하는 F라고 출력하기

	int grade = 0;
	std::cin >> grade;

	if (grade >= 90)
	{
		printf("A");
	}
	else if (grade >= 80)
	{
		printf("B");
	}
	else if (grade >= 70)
	{
		printf("C");
	}
	else if (grade >= 60)
	{
		printf("D");
	}
	else
	{
		printf("F");
	}


	
   
    //세 과목의 점수를 입력받아, 세 과목 모두 평균 60점 이상이면 "합격", 아니면 "불합격"을 출력하는 프로그램을 작성하세요.
	//한과목이라도 40점 미만이면 불합격 출력하기

	int test1 = 0;
	int test2 = 0;
	int test3 = 0;
	std::cin >> test1 >> test2 >> test3;

	const int AverageLimit = 60;
	const int FailLimit = 40;
	float Average = (test1 + test2 + test3) / 3.0f;


	if ((Average >= AverageLimit) && (test1 > FailLimit && test2 > FailLimit && test3 > FailLimit))
	{
		printf("합격\n");
	}
	else
	{
		printf("불합격\n");
	}
}









// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
