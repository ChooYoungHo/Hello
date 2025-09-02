#define _CRT_SECURE_NO_WARNINGS //scanf 처리

// Hello.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

//소스파일
//주석 : 프로그램에서 영향을 끼치지 않는 부분


/* 범위 주석
ctrl+D : 한줄 복제 하기
shift+Delete : 한줄 삭제하기
shift+화살표 : 블럭 잡기
Alt+Shift+화살표 : 세로로 블럭 잡기
Alt+화살표 위아래 : 줄 위아래 이동
Ctrl+화살표 위아래 : 보이는 영역 올리고 내리기
Ctrl+화살표 좌우 : 문장 이동
Ctrl+Space 누르면 자동완성 다시 뜸
프로그램 디버그 : <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴
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

#include <iostream>   // 입출력 관련
#include <stdio.h>
#include <cstdio>     // stdio.h에 네임스페이스 추가한 래퍼 
#include "header.h"   //헤더파일

//using namespace std; // 이름 공간

int main()  // main 함수는 반드시 하나만, 앤트리 포인트 (코드가 시작되는 곳)


{

    
    
 //   printf("Hello\tWorld!\n"); // c언어의 출력 방법
 //   printf("\"추영호\t");       //""안에 \n이 있으면 줄을 바꾸라는 의미
 //   printf("90년생입니다.\n");
 //   printf("");


 //   // 이스케이프 스퀸스
 //   // \n : 줄바꾸기 (개행문자)
 //   // \t : 탭 넣기
 //   // \" : 쌍따음표 한개
 //   // \\ : \찍기
 //   // \r : 캐리지 리턴 (윈도우에서는 중요하지 않음. 리눅스에서는 중요함 커서가 줄 바꾸고 맨 앞으로)


 //   //std::cout << "Hello World!\n"; // c++ 출력 방법

 //   int number = 0; // number라는 이름을 가진 int(인티저)변수를 선언하고 거기에 0을 대입한다.
 //   /*
 //   int number; 변수 선업
 //   number = 0; 변수 선언

 //   int : 정수형 (소수점이 없는 숫자
 //   number : 5.3 이면 5가 저장
	//number : 5/2 이면 2가 저장
 //   */


 //   scanf("%d", &number); // 숫자를 하나 입력 받기 (c)
 //   printf("입력한 숫자는 : %d\n", number);


 //   std::cin >> number; // 숫자를 하나 입력 받기 (c++)
 //   printf("나이는: %d\n", number);

 //   //프로그램을 실행했을 때 나이를 물어보고 입력받은 숫자를 그대로 출력해보기
 // 

 //   int number1 = 0;
 //   int number2 = 0;

 //   printf("숫자 1을 입력하시오 :");
 //   std::cin >> number1;
 //   printf("숫자 2을 입력하시오 :");
 //   std::cin >> number2;
 //   /*
	//int number3 = number1 + number2;
	//printf("두 숫자의 합은 %d입니다.", number3);

 //   */

 //   printf("두 숫자의 합은 %d입니다.", number1 + number2);

    

    printf("  *  \n");
	printf(" *** \n");
	printf("*****\n");

	printf("□□□□□□□□\n");
	printf("□  □    □  □\n");
	printf("□     □     □\n");
	printf("□□□□□□□□\n");



	

	int number1 = 0;
	int number2 = 0;
	
	printf("사각형 가로 : \n");
	std::cin >> number1;
	printf("사각형 세로 : \n");
	std::cin >> number2;

	int number3 = number1 * number2;
	printf("사각형 넓이: %d\n" , number3);


	int number4 = 0;
	int number5 = 0;
	std::cin >> number4;
	std::cin >> number5;
	
	int number6 = number4 - (number4 / number5) * number5;
	printf("두 수의 나머지 : %d\n", number6);  //int num = num1 - (num1 / num2) * num2;


	int number7 = 0;
	std::cin >> number7;
	int number8 = 0;
	std::cin >> number8;

	int number9 = number7;
	int number11 = number8;

	printf("두 수 스왑 : %d , %d\n", number11 , number9 );
	
	

	//시간 계산기 초를 입력 받아 시분초 출력하기

	int numberc = 0;
	std::cin >> numberc; // 초 저장

	int numbers = numberc % 60; // 초
	int numberm = (numberc % 3600) / 60; // 분
	int numberh = numberc / 3600; // 시
	

	printf("%d시%d분%d초\n", numberh, numberm, numbers);



	/*  동전 개수 계산하기
		금액을 입력받아 500원, 100원, 50원, 10원 동전이 각각 몇 개 필요한지 계산하는 프로그램.
		금액이 큰 동전을 최대한 많이 받아야 한다.
	*/
	int numberd = 0;
	std::cin >> numberd; 
	int number500 = numberd / 500;
	int number100 = (numberd % 500) / 100;
	int number50 = (numberd % 100) / 50;
	int number10 = (numberd % 50) / 10;

	printf("500원:%d개\t", number500);
	printf("100원:%d개\t", number100);
	printf("50원:%d개\t", number50);	
	printf("10원:%d개\t\n", number10);
	



	/*
		자리수 분리하기(입력은 항상 세자리라고 가정)
		수를 입력받고 100의 자리, 10의 자리, 1의 자리를 각각 출력하기
		각 자리의 수를 합해서 출력하기
	*/
	
	    int numberj = 0;
		std::cin >> numberj;
		int number100j = numberj / 100;
		int number10j = (numberj % 100) / 10;
		int number1j = numberj % 10;
		int numberjs = number100j + number10j + number1j;
		printf("100의 자리:%d\t", number100j);
		printf("10의 자리:%d\t", number10j);
		printf("1의 자리:%d\n", number1j);
		printf("각 자리의 합: %d", numberjs);



    return 0;
}


/////////////////////////////////////






// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
