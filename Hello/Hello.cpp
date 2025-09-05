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
				                                          // 조건 ? 참일 때 값 : 거짓일 때 값 (참일때 앞값, 거짓일때 뒷값)

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

/*
함수(Funtion)
   - 특정한 기능을 수행하는 코드블럭
   - 선언을 하고 사용해야 한다.
   - 함수의 리턴타입, 함수의 이름, 함수의 파라메터를 설정해줘야 한다.
		함수의 리턴타입 : 함수가 끝났을 때 돌려 받을 값의 종류
		함수의 이름 : 함수를 호출(사용)하고 싶을 떄 부르는 이름
		함수의 파라메터 : 함수의 입력값 0개 이상 들어갈 수 있다.
   - 선언을 한 후에는 구현을 정의해야한다. (함수의 실제 동작을 작성)
		int Sum(int Test1, int Test2);  // 리턴타입이 int고 이름이 sum이고 파라메터는 int 2개인 함수를 선언했다.
		int Sum(int, int);  //  위와 동일. 선언할 때는 함수의 파라메터 이름을 생략해도 된다.

		int Sum(int Test1, int Test2)  // int Sum(int, int); 이 선언을 정의했다.
		{
		   return Test1 + Test2;
		}
		int Number = Sum(1, 7);  // Sum함수를 호출했다. 파라메터로 1과 7일 넘겼다. 그리고 8을 돌려받았다.
		return 0;
*/

/*
재귀 호출(Recurcive Call)
   - 함수 안에서 자기자신을 다시 호출하는 함수
*/

/*
템플릿(Template) 함수
   - 데이터 타입에 관계없이 동일한 로직을 여러 자료형에 대해 사용할 수 있게 해주는 c++의 기능
   - 컴파일 타임에 실제 사용하는 곳이 있으면 해당 타입으로 코드를 생성한다.
	  -> 헤더에 선언과 구현이 함께 있어야 한다.
*/

/*
인라인(inline) 함수
   - 함수 호출문을 해당 함수의 실제 코드로 대체하는 함수
*/

/*
스코프 // 왠만하면 쓰지말자. 결합도가 높다
   - 변수, 함수, 객체등이 유효하게 사용될 수 있는 범위
   - 일반적으로 선언된 중괄호 안쪽에서만 유효
   - 지역 변수 : 특정 함수 내에서 선언된 변수
   - 전역 변수 : 프로그램 전체에서 사용할 수 있는 변수
*/






#include <iostream>   // 입출력 관련
#include <stdio.h>
#include <cstdio>     // stdio.h에 네임스페이스 추가한 래퍼 
#include <time.h>     // 시간 값
#include <random>
#include "header.h"   // 헤더 파일
#include "TestMath.h"

/*
//1. 특정 범위안의 랜덤한 수를 리턴하는 함수
//- int 파라메터가 2개
//- int 리턴
int main()
{
	int num = Random(1, 10); // 1~10 사이 랜덤
	printf("랜덤 숫자: %d\n", num);

	return 0;
   }
*/

/*
//2. “당신의 나이를 입력해 주세요 : “ → “당신은 00살 입니다”
//- int 파라메터 1개
int main()
{
	int Age = 0;
	std::printf("당신의 나이를 입력해 주세요 : ");
	std::cin >> Age;
	std::printf("당신은 %d살 입니다\n", Age);

	return 0;
}
*/

/*
//3. 원의 반지름을 입력 받고 넓이 구하기
//- float 파라메터 1개
//- float 리턴
int main()
{
	float Radius = 0.0f;
	std::printf("원의 반지름을 입력해 주세요: ");
	std::cin >> Radius;

	float Area = CircleArea(Radius);
	std::printf("원의 넓이는 %.2f입니다\n", Area);

	return 0;
}
*/

/*
//4. 숫자를 입력받아 홀수인지 짝수인지 판단하는 함수
//- int 파라메터 1개
//- bool 리턴(true면 홀수, false면 짝수)
int main()
{
	int Number = 0;
	std::printf("숫자를 입력해 주세요: ");
	std::cin >> Number;

	if (IsOdd(Number)) {
		std::printf("%d는 홀수입니다.\n", Number);
	}
	else {
		std::printf("%d는 짝수입니다.\n", Number);
	}

	return 0;
}
*/

//5. 성적 분류 함수(A~F)
//- int 파라메터 1개
//- int 리턴(enum값)

/*
int main()
{
	int Score = 0;
	std::printf("점수를 입력해 주세요: ");
	std::cin >> Score;

	Grade InputGrade = GetGrade(Score);

	switch (InputGrade)
	{
	case A:
	{
		printf("등급: A\n");
		break;
	}
	case B:
	{
		printf("등급: B\n");
		break;
	}
	case C:
	{
		printf("등급: C\n");
		break;
	}
	case D:
	{
		printf("등급: D\n");
		break;
	}
	case F:
	{
		printf("등급: F\n");
		break;
	}
	return 0;
	}
}
*/

//6. 아이템 설정, 아이템 해제, 아이템 토글용 함수 총 3개
//- 비트 플래그 인벤토리 코드 수정
//- int 파라메터 두개(Inventory, 비트플래그용 enum)

/*
int main()
{
	int Inventory = 0; // 초기화

	Inventory = AddItem(Inventory, Item::Key);
	printf("현재 인벤토리: %d\n", Inventory);

	Inventory = AddItem(Inventory, Item::Fuse);
	printf("현재 인벤토리: %d\n", Inventory);

	Inventory = RemoveItem(Inventory, Item::Key);
	printf("현재 인벤토리: %d\n", Inventory);

	Inventory = ToggleItem(Inventory, Item::Book);
	printf("현재 인벤토리: %d\n", Inventory);

	Inventory = ToggleItem(Inventory, Item::Book);
	printf("현재 인벤토리: %d\n", Inventory);

	return 0;
}
*/

//7. 피라미드 출력 함수
//- int 파라메터 1개


/*
int Pyramid(int Height)
{
	for (int i = 1; i <= Height; i++) 
	{
		for (int j = 0; j < Height - i; j++) 
		{
			printf(" ");
		}
		for (int k = 0; k < 2 * i - 1; k++)
		{
			printf("*");
		}
		printf("\n"); 
	}
	return Height;
}
int main()
{
	int Height = 0;
	printf("피라미드 높이 입력: ");
	std::cin >> Height;

	Pyramid(Height);
}
*/

/*
탬플릿 함수 만들기
파라메터 2개
리턴 : 파라메터 중 작은 수 리턴
Max
파라메터 2개
리턴 : 파라메터 중 큰 수 리턴
Clamp
파라메터 3개(value, min, max)
리턴
value값이 min보다 작으면 min
value값이 max보다 크면 max
value값이 min과 max 사이면 value
*/

int main() 
{
	printf("Min: %d\n", Min(3, 7));
	printf("Max: %d\n", Max(3, 7));
	printf("Clamp: %d\n", Clamp(10, 0, 5));

	return 0;
}


/*
//재귀함수를 이용해서 팩토리얼 값을 만드는 함수 만들기
//5팩토리얼 = 5 * 4 * 3 * 2 * 1


int Factorial(int FacNumber) 
{
	printf("%d", FacNumber);  

	if (FacNumber > 1) 
	{
		printf(" * ");           
		return FacNumber * Factorial(FacNumber - 1);  
	}
	else 
	{
		printf("\n");            
		return 1;                 
	}
}

int main() 
{
	int Number = 5;
	int FiveFactorial = Factorial(Number);

	printf("%d! = %d\n", Number, FiveFactorial);

	return 0;
}
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

