#define _CRT_SECURE_NO_WARNINGS //scanf 처리

// Hello.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// #define _CRT_SECURE_NO_WARNINGS //scanf 처리

// 소스파일
// 주석 : 프로그램에서 영향을 끼치지 않는 부분
// F5 : 디버그 실행 
// F9 : 브레이크 포인트 설정/해제 (빨간점 오른쪽 누르면 조건에서 사용)
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
  - (a !=  b) : a와 b가 다르다.

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

/*
비트 연산자
& (And) : 두 비트가 모두 1이면 1, 아니면 0 
          특정 비트가 세팅이 되어 있는지 확인하는데 사용 (플래그 검사)
    int a = 10;     //0b1010  (0b는 이진수라는뜻)
	int b = 9;      //0b1001
	int c = a & b;  //0b1000

	int flag = 0b1010;
	//0b0001 = 왼쪽 키가 눌러졌다.
	//0b0010 = 오른쪽 키가 눌러졌다.
	//0b0100 = 위쪽 키가 눌러졌다.
	//0b1000 = 아래쪽 키가 눌러졌다.
	if ((flag & 0b0010) != 0b0000)
	{
		// 오른쪽 키가 눌러져 있다.
	}
	else
	{
		// 오른쪽 키가 눌려져 있지 않다.
	}

| (Or) : 두 비트가 하나라도 1이면 1, 둘 다 0이면 0 
         특정 비트에 플래그를 세팅하고 싶을 때 사용 (플래그 설정)
    int a = 10;     //0b1010  
	int b = 9;      //0b1001
	int c = a & b;  //0b1011

	int flag = 0b1010;
	flag = flag | 0b0001;  // flag = 0b1011; 어떤 비트를 켜고 싶을떄

^ (XOR) : 두 비트가 서로 다르면 1, 같으면 0
          특정 비트를 토글하고 싶을 때 사용
    int a = 10;     //0b1010  
	int b = 9;      //0b1001
	int c = a & b;  //0b0011

	int flag = 0b1010;
	int result = flag ^ 0b0001; // 결과 = 0b1011;
	result = 0b1011 ^ 0b0001;   // 결과 = 0b1010;

~ (Not) : 비트값을 반전 시킨다 (0->1, 1->0)
    int a = 10;     //0b1010
	a = ~a;         //0b0101

	int flag = 0b1010;
	int test = 0b0001;
	test = ~test  // 왼쪽 키를 제외한 나머지 모두 세팅

<< (Left Shift) : 비트들을 왼쪽으로 이동
                  한번 움직일 때마다 수가 두배가 된다. 
    int a = 7;      //0b0111
	a = a << 1;     //ob1110 (앞은 밀려서 사리지고 오른쪽은 새로 0으로 채워짐)

>> (Right Shift) : 비트들을 오른쪽으로 이동
                   한번 움직일 떄마다 수가 절반이 된다.
    int a = 7;      //0b0111
	a = a <>> 1;    //0b0011

enum Key  // 상수들에게 사람이 알아보기 좋은 이름을 붙여 놓은 것
{
   up    = 1 << 0,  //0b0001 
   Down  = 1 << 1,  //0b0010
   Left  = 1 << 2,  //0b0100
   Right = 1 << 3,  //0b1000
};
   if ((flag & Up) != 0) // 위쪽 키가 눌려져 있다.
   {
   }
*/

/*
반복문
  - 제어문 중의 하나
  - 특정 코드 블록을 조건에 따라 여러번 반복해서 실행할 수 있게 해주는 문
  for      : 반복 횟수가 명확할 때 좋음
        for (int i = 0; i < 10; i++)
	    {
		printf("Hello World : %d\n", i);
	    }
	    return 0;

  while    : 반복 횟수가 명확하지 않고 조건에 따라 반복할 때 사용 
        int Count = 1;
	    while ((Count % 3 != 0) // 3의 배수 while()조건이 참이면 코드 블럭 실행
	    {
		printf("Hello World While: %d\n", Count);
		Count++;
	    }
	    return 0;

  do-while : 최소 한번은 무조건 실행해야 할 때 사용. (while과 거의 같음)
        int Count = 1;
	    do
	    {
		printf("Hello World While: %d\n", Count);
		Count++;
	    }
	    while ((Count % 3 != 0)
		return 0;
*/

/*
continue
   - 반복문 안에서 사용
   - continue를 만나면 그 이후의 코드는 스킵하고 다음 반복을 진행
break
   - 반복문이나 switch문에서 반복문을 벗어나거나 case를 종료시킨다.
     	int Count = -1;
	    int Sum = 0;
	
	    while (true)   // 무한루프. 조건이 참일때까지 계속 로프
	    {
		std::cin >> Count;
        Sum += Count;
				if (Count == 0)
		        {
		        break;
	            }
		}
		printf("숫자의 합: %d\n", Sum);

*/

/*
랜덤 
   - 무작위로 숫자를 선택하는 법
   - C 스타일
      - rand();         // 함수 사용
	  - srand(time(0)); // 시드값 사용

      srand(time(0));  // 시드 값 시간 사용,  테스트용은 srand(0); 사용 
      for (int i = 0; i < 100; i++)
      {
          int RandomNumber = rand();
          printf("랜덤한 숫자: %d\n", RandomNumber);
      }
      //0~5까지의 숫자를 랜덤으로 구하고 싶다.
        int RandomNumber1 = rand() % 6;
      //1~6까지의 숫자를 랜덤으로 구하고 싶다.
        int RandomNumber1 = rand() % 6; + 1

   - C++ 스타일
      - #include <random>

	    std::random_device RandomDivece;
	    std::mt19937 Generate(RandomDivece());
	  
	    	printf("균등분포 : ");
	    	std::uniform_int_distribution<> uniformDis(1, 100); // 1~100사이 랜덤으로 뽑아라
	    	for (int i = 0; i < 10; i++)
	    	{
	    		int Number = uniformDis(Generate);
	    		printf("%d", Number);
	    		if (i < 9)
	    		{
	    			printf(", ");
	    		}
	    	}
	    	printf("\n");
	    
	    	printf("정규분포 : ");
	    	std::normal_distribution<> normalDis(80, 10);
	    	for (int i = 0; i < 10; i++)
	    	{
	    		float fNumber = uniformDis(Generate);
	    		printf("%.2f", fNumber);
	    		if (i < 9)
	    		{
	    			printf(", ");
	    		}
	    	}
	    	printf("\n");
*/


#include <iostream>   // 입출력 관련
#include <stdio.h>
#include <cstdio>     // stdio.h에 네임스페이스 추가한 래퍼 
#include <time.h>     // 시간 값
#include <random>
#include "header.h"   // 헤더 파일


int main()  // main 함수는 반드시 하나만, 앤트리 포인트 (코드가 시작되는 곳)


{
	 //양수를 하나 입력받고 홀수인지 짝수인지 출력하기 (% 사용금지)
	 //	int Number111 = 0;
		//std::cin >> Number111;

		//if ((Number111 & 1) != 0)
		//{
		//	printf("홀수 입니다.\n");
		//}
		//else
		//{
		//	printf("짝수 입니다.\n");
		//}


	 //헬로 월드 10번찍기 (for)
		//for (int i = 0; i < 10; i++)
		//{
		//	printf("Hello World : %d\n", i);
		//}
		//	return 0;

		//int Count = 1;
		//while (Count % 3 != 0) // 3의 배수 while()조건이 참이면 코드 블럭 실행
		//{
		//	printf("Hello World While: %d\n", Count);
		//	Count++;
		//}
		//return 0;

		//int Count = 1;
		//do
		//{
		//	printf("Hello World While: %d\n", Count);
		//	Count++;
		//}
		//while ((Count % 3 != 0)

	
	 //  0을 입력 받을때까지 입력을 계속 받고, 0이 입력되면 입력받은 숫자의 합을 출력하기 while문 do-while문 모두 해보기
	 //   int Count = -1;
	 //   int Sum = 0;
	
	 //   while (Count != 0)
	 //   {
	 //   	std::cin >> Count;
  //          Sum += Count;
	 //   }
	 //   	printf("숫자의 합: %d\n", Sum);
	 //   
	 //   	
	 //   입력받은 숫자의 구구단 출력해보기
	 //   int Gugu = 0;
	 //   std::cin >> Gugu;
	 //   
	 //   for (int i = 1; i < 10; i++)
	 //   {
	 //   	printf("%d * %d = %d\n", Gugu, i, Gugu * i);
	 //   }
	 //   
	 //   
	 //   숫자를 하나 입력받고, 입력 받은 수까지 있는 숫자 중 홀수만 출력하기
	 //   int Count = 0;
	 //   std::cin >> Count;
	 //   Count++;   만약 for문에서 조건 <=를 쓰기 싫어서 1 더함
	 //   for (int i = 1; i <= Count; i++)
	 //   {
	 //   	if ((i & 2) == 1)
	 //   	{
	 //   		printf("%d\n", i);
	 //   	}
	 //   }
	 //   
	 //   	
	 //   1~100사이의 숫자 중에 7의 배수만 출력하기
	 //   const int MinNumber = 1;
	 //   const int MaxNumber = 100;
	 //   for (int i = 1; i <= MaxNumber; i++)
	 //   {
	 //   	if ((i % 7) == 0)
	 //   	{
	 //   		printf("%d\n", i);
	 //   	}
	 //   }
	 //   return 0;
	 //   
	 //   
	 //   
	 //   입력받은 숫자만큼의 층을 가진 피라미드 그리기
	 //   3을 입력 받았으면 아래와 같이 출력하기
	 //   	 *
	 //   	***
	 //    *****
	 //   1. 입력을 받아야 한다.
	 //   2. *표가 첫번째 층에서는 1개 두번째 층에서는 3개...
	 //      각 층별로 (층수*2 + 1)만큼의 *을 찍어야 한다.
	 //   3. 각 층별로 " "을 (총층수 - (현재 층수 + 1))만큼 추가해야 한다.	
  //      int Count = 0;
	 //   std::cin >> Count;
	 //   
	 //   for (int i = 0; i < Count; i++)
	 //   {
	 //   	for (int j = 0; j < (Count - (i + 1)); j++)
	 //   	{
	 //   		printf(" ");
	 //   	}
	 //   	for (int k = 0; k < (i * 2 + 1); k++)
	 //   	{
	 //   		printf("*");
	 //   	}
	 //   printf("\n");
	 //   }
	 //   return 0;
		
		


//주사위를 100만번 돌려서 6이 몇번 나왔는지 카운팅해서 출력하기

std::random_device randomdivece;
std::mt19937 generate(randomdivece());

const int million = 1000000;
std::uniform_int_distribution<> uniformdis(1, 6);

int count = 0;

for (int i = 0; i < million; i++)
{
	int number = uniformdis(generate);
	if (number == 6)
	{
		count++;	
	}
}
printf("6나온 횟수: %d\n", count);




//가위 바위 보 게임 만들기 3선승제 enum 활용

std::random_device randomdivece;
std::mt19937 generate(randomdivece());

std::uniform_int_distribution<> uniformdis(0, 2);

enum fate
{
	가위 = 0,
	바위 = 1,
	보 = 2
};
int usercount = 0;
int comcount = 0;

while (usercount < 3 && comcount < 3)
{
	int user = 0;
	int com = uniformdis(generate);

	printf("가위(0), 바위(1), 보(2) 선택: ");
	std::cin >> user;

	if ((user == 가위 && com == 보) || (user == 바위 && com == 가위) || (user == 보 || com == 가위))
	{
		printf("유저 승리.\n");
		usercount++;
	}
	else if (com == user)
	{
		printf("비겼다.\n");
		
	}
	else 
	{
		printf("컴퓨터 승리.\n");
		comcount++;
	}
}


//하이 로우
//컴퓨터가 1~100사이의 임의의 숫자를 선택하고
//사용자가 맞출 때까지 입력을 받아 "더 높게", "더 낮게" 등의 힌트를 제공하는 게임
//5번안에 맞춰야 승리

std::random_device randomdivece;
std::mt19937 generate(randomdivece());

std::uniform_int_distribution<> uniformdis(1, 100);

int usercount = 0;
int user = 0;
int com = uniformdis(generate);

   while (usercount < 5)
   {
	   std::cin >> user;
	   usercount++;

	   if (user < com)
	   {
		   printf("더 높게. 남은 횟수 : %d\n", 5 - usercount );
	   }
	   else if (user > com)
	   {
		   printf("더 낮게. 남은 횟수 : %d\n", 5 - usercount);
	   }
	   else 
	   {
		   printf("맞춤.\n");
	   }
   }
   printf("실패. 정답은 %d.\n", com);
 
return 0;



//공포게임의 인벤토리를 비트플래그로 표현하기
//아이템 종류를 나타내는 enum을 만들고
//특정 아이템을 추가하고 삭제하는 예시 보여주기
// 인번토리 내용 출력하기 (인벤토리의 비트내용에 따라 출력)
// 1번 : 아이템 추가, 2번 : 아이템 버리기, 3번 : 종료
// 이미 있는 아이템을 추가하려고하면 "이미 있는 아이템입니다." 출력
// 없는 아이템을 버리려고하면 "없는 아이템입니다." 출력


enum Item {
	EMPTY = 0,
	TOOTH = 1,   // 1 << 0
	NAIL = 2,    //  1 << 1
	CLAW = 4,    // 1 << 2
	HAIR = 8,    // 1 << 3    
};

	int Inventory = 0;
	std::cin >> Inventory;

	// 아이템 추가
	Inventory = Inventory | TOOTH;   
	Inventory = Inventory | CLAW;
	Inventory = Inventory | HAIR; 
	Inventory = Inventory | NAIL;

	// 아이템 제거
	Inventory = Inventory ^ TOOTH; 

    
		return 0;
}



/*
9/4 실습
주사위 게임 만들기
초기 세팅
플레이어와 컴퓨터 모두 일정 금액(예: 10000원)으로 시작한다.
1차 주사위 굴리기
게임 시작 시, 플레이어와 컴퓨터가 각각 주사위(1~6)를 한 번 굴린다.
각자 주사위 결과를 공개한다.
배팅
이전 판에서 진 쪽이 배팅 금액을 제시한다.
제시한 배팅 금액은 두 사람 모두의 현재 소지 금액 이하이어야 한다.
배팅 금액은 두 사람 모두에게서 차감된다.
2차 주사위 굴리기
다시 플레이어와 컴퓨터가 각각 주사위를 한 번씩 굴린다.
(1차+2차) 주사위의 합을 계산한다.
승패 판정 및 금액 증감
합이 더 큰 쪽이 배팅 금액의 총합(즉, 2×배팅금액)을 모두 가져간다.
동점일 경우 배팅 금액은 그대로 반환한다.
다음 판 진행
소지금이 0 이하인 쪽이 나오면 게임 종료.
고병조 — 오후 5:18
9/4
홀짝 게임
초기 금액 및 배팅
플레이어는 기본금 100원으로 베팅을 시작한다.
홀짝 선택
플레이어가 1(홀) 또는 2(짝)을 선택한다.
결과 결정
컴퓨터가 랜덤으로 1(홀) 또는 2(짝)을 선택한다.
플레이어의 선택과 결과가 일치하면 승리(이기면 배팅금의 2배 획득), 다르면 패배(배팅금 전액 잃음).
연속 배팅 선택
승리 시 플레이어는 두 가지 중 하나를 선택:
(A) 이긴 금액을 모두 다시 한 번에 배팅 (연승 도전)
(B) 이긴 금액을 얻고, 다시 100원부터 새로 배팅 시작
게임 종료 조건
플레이어가 소지금이 100원 미만일 경우 게임 종료.
*/






// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
