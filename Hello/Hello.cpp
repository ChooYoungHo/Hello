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

		std::random_device 변수이름1;  // 무작위 숫자 하나 뽑아
		std::mt19937 변수이름2(변수이름1()); //Mersenne Twister 19937이라는 난수 생성기(엔진), 변수이름1 값을 시드(seed)로 써서 엔진을 초기화

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

/*
배열(Array)
   - 같은 데이터타입을 가진 요소들이 연속적으로 저장되어 있는 데이터 구조
   - 장점 : 빠르게 각 요소에 접근이 가능하다.
   - 단점 : 크기가 고정이다. 중간에 데이터 삽입/삭제가 어렵다.
		 int a = 10;
		 int Array[5];    // int 5개를 관리하는 배열
		 Array[0] = 10;   // 배열의 첫번째 요소에 10을 대입한다.
		 Array[3] = 40;   // 배열의 네번째 요소에 40을 대입한다.
		 //Array[5] = 60;   // 버퍼 오버런, 배열 영역 밖을 접근하려고 하기 때문에 에러 발생

		 int Array2[5] = { 1,2,3,4,5 };
		 int Array3[5] = { 1,2,3 };   // 설정 안한부분은 0
		 int Array4[5] = { 0 };       // 0으로 채울때

		 const int Size = 5;
		 int Array5[Size] = {};
		 //sizeof(Array5);      // Array5의 전체 바이트 크기를 알 수 있다.
		 //sizeof(Array5[0]);   // Array5의 요소 하나의 크기를 알 수 있다.
		 int ElementCount = sizeof(Array5) / sizeof(Array5[0]);   // Array5의 요소 개수

		 //int Size2 = 5;
		 //int Array6[Size2] = {};     // 배열 선언할 때 크기를 변수로 지정할 수 없다.

 이차원 배열
	- 배열을 이차원으로 표현한 것 (축이 2개)
	- int Array[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {0,1,2}};
		 int 3개짜리 배열이 4줄 들어있다.
		 사실 int Array[12]랑 메모리 구조가 같다.  // Array[12] = {1,2,3,4,5,6,7,8,9,0,1,2};
		 int Array[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {0,1,2}};
		 뒤에서 부터 계산 3개(x)짜리가 4개(y)다.
		 int test = Array[1][2];   // test =6
*/

/*
캐스팅(Casting)
   -  하나의 데이터 타입을 다른 데이터 타입으로 변경하는 행위
	  //C스타일
	  int a = 10;
	  float b = 15.5f;

	  a = (int)b; // b를 int형으로 캐스팅해서 a에 대입한다. 15가 a에 들어간다. (C스타일, 명시적 캐스팅)
	  a = b;      // b를 a에 대입한다. 그런데 a와 b는 타입이 다르니까 b를 a로 암시적으로 캐스팅해서 대입한다. (C스타일, 암시적 캐스팅)
	  b = a;      // 암시적 캐스팅은 대체로 표현이 작은쪽으로 큰쪽으로는 문제없는 경우가 많다.

	  C++ 캐스팅
	  static_csat : C스타일 캐스팅을 안전하게 만든 것, 컴파일 타임에 결정됨.
	  dynamic_cast : 다음에 (클래스 배우고 이후에)
	  const_cast : const 속성을 제거하거나 추가하는데 사용. 사용하지 않는 것을 권장.
	  reinterpret_cast : C스타일 캐스팅에서 위험한 부분, 원래 타입의 구조를 무시하고 새 타입으로 해석하게 한다.

	  a = static_cast<int>(b);   // b를 int형으로 캐스팅해서 a에 대입한다. 15가 a에 들어간다. (C++스타일, 명시적 캐스팅)
*/

/*
피셔-예이츠 알고리즘
   - 배열이 내용을 랜덤하게 섞는 셔플 알고리즘
   - 동일한 확률로 섞이도록 증명 완료된 알고리즘

	void Shuffle(int Array[], int Length)  //배열의 크기도 같이 넘기고 리턴이 없다. // ex} Shuffle(Array7, 12)
	{

	알고리즘 순서
	1. 배열의 마지막 요소에서 첫 요소까지 순회,
	2. 현재 요소의 인덱스(i)와 0~i 중 임의의 인덱스(j)를 선택한다.
	3. i번째 요소와 j번째 요소를 서로 교환
	4. i가 0이 될때까지 반복

	   for (int i = Length - 1; i > 0; i--)
	   {
		  int j = rand() % (i + 1);
		  int Temp = Array[i];
		  Array[i] = Array[j];
		  Array[j] = Temp;
	   }
	}
*/

/*
참조(Reference)
   - 변수의 별명
   - 참조를 변경할 경우 원본 변수도 함께 수정된다. -> 함수 파라메터로 사용하면 편리함.
   - 참조는 항상 어떤 변수와 연결되어 있어야 한다.
   - 함수 파라메터에 참조를 사용할 때
	  - 파라메터 값을 수정하는 출력용 파라메터일 경우 Out이라는 접두사를 붙이는 것이 관례이다.
	  - 파라메터 값을 읽기만 하는 경우에는 const를 붙여줘서 실수로라도 고칠 수 없게 하는 것이 좋다.

	  void TestRef(int& OutData, const int& ReadData)
	  {
		OutData *= ReadData;
	  }

	  void Ref()
	  {
		int Number = 10;
		int Number2 = 10;
		int& Ref = Number; //Number의 참조는 Ref다.

		TestRef(Number, Number2);

		int i = 0;
	  }
*/

/*
포인터
   - 메모리 주소를 저장하는 데이터 타입
   - 각 데이터 타입에 *에 붙이면 포인터 타입
		ex) int* 인티저 포인터, float*  플로트 포인터, char* 캐릭터 포린터
   - 포인터 연산자
	  - 주소 연산자 (&)
		 int i = 10;
		 int* p = &i;    // i의 주소를 int* p에 대입해라.
	  - 간접참조 연산자(*)
		 int i = 20;
		 int* p = &i;
		 (*p) = 30;     // i = 30;과 같다

		 void PointerParameter(int* pNumber)
		 {
			 (*pNumber) = (*pNumber) * 2;  // 입력받은 주소에 있는 int 값을 2배로 만들기
		 }

		 void Practice20250909()
		 {
			// Number라는 변수를 하나 선언하고 포인터 변수 p에 Number의 주소를 저장하기
			// p를 이용해서 Number의 값을 변경 시키기

			float Number = 123.0f;
			int Number2 = 10;
			float* p = nullptr;    // p는 완전히 비어있다.
			p = &Number;
			//p = &Number2;        // int는 안된다. 데이터 타입이 같아야 함.

			(*p) = 100.0f;        // Number값이 100.0으로 바뀜

			PointerParameter(&Number2);
		 }

	  - 산술 연산자 (+, -, ++, --)
		 int i = 30;
		 int* p = &i;
		 p = p + 1;   // 예시로 p가 원래 0x0004라고 가정했을 때 p + 1을 한 값은 0x0008,
		 double d = 10.5;
		 double* pD = &d;
		 pD += 1;    // pD가 원래 0x0000이라고 가정했을 때 pD += 1은 0x0008

   - 배열과 포인터는 기본적으로 같다. (배열의 주소는
		 int Array[5] = { 10, 20, 30, 40, 50 };
		 int* pArray = Array;        // 배열의 이름은 배열의 첫번째 요소의 주소와 같다.
		 int* pArray2 = &Array[0];   // Array == &Array[0] 두 개는 같은 의미

		 // pArray를 이용해서 Array[2]를 300으로 수정하기
		 (pArray + 2) = 300;         // 30의 주소,  +1 할때마다 배열 주소 증가

		 for (int data : Array)      // range-for : Array안에 요소들을 순차적으로 하나씩 data에 넣어 처리
		 {
			printf("%d ", data);
		 }
		 == 위 아래가 같은 결과
		 for (int i = 0; i < 5; i++)
		 {
			printf("%d ", Array[i]);
		 }
*/

/*
C++ 의 메모리 영역 (단순화 된 버전)
   - 코드 영역 : 실행코드가 저장되는 공간
   - 데이터 영역 :
		 프로그램이 시작할 때부터 끝날 떄까지 유지되는 변수가 저장되는 공간
   - 힙 영역 :
		 램 그 자체
		 프로그램 실행 중에 프로그램이 필요에 따라 직접 메모리를 할당 '받고' 사용하는 공간
		 힙은 운영체제가 관리하기 때문에 힙을 할당받는 행위는 느리다.
		 메모리는 할당 받았으면 반드시 '해제'를 해줘야 한다. (해제를 하지 않으면 메모리 릭(누수) 발생)
   - 스택 영역
		 함수가 호출될 때마다 필요한 변수 (지역 변수)가 저장하는 공간
		 함수가 끝나면 자동으로 정리
*/

/*
정적(static)  : 프로그램 실행 전에 이미 결정 나 있는 것들.
동정(dynamic) : 프래그램 실행 중에 결정이 되는 것들.
*/

/*
동적 할당(Dynamic Allocation)
   - 프로그램 실행 중(Runtime)에 메모리를 사용하기 위해 확보하는 행위
   - 운영체제(OS)에게 요청함 -> 그래서 늦다.
   - C 스타일
		 할당 : malloc
		 해제 : free
		 단순 메모리 블럭만 받는 형식(초기화가 없음. 타입 안정성 없음. 생성자/소멸자 실행 안됨)

		 // C 스타일 메모리 할당 및 해제
		 int Size = 5;
		 int* Array = nullptr;
		 Array = (int*)malloc(sizeof(int) * Size);  // int 5개짜리 메모리 블럭 할당 받기
		 //조사식에 Array.5 (.5)를 추가하면 해당 주소 나옴.
			   '작업들'
		 free(Array);       // Array를 해제. malloc을 했으면 무조건 free부터 만들고 작업할것.
		 Array = nullptr;   // 댕글링 포인터 방지

   - C++ 스타일
		 할당 : new
		 해제 : 일반 변수는 delete, 배열은 delete[]
		 int* Data = new int(5);   // int 하나를 할당 받는데 주소가 가리키는 값은 5를 설정해라
		 delete Data;
		 Data = nullptr;
		 int* Array = new int[10]; // int 10개짜리 배열을 만들어라
		 delete[] Array;           // 배열은 반드시 이렇게 해제해야 함.
		 //delete Array;           // 이렇게 하면 Array[0] 부분 하나만 할당 해제가 된다.
		 Array = nullptr;
		 특정 객체(Object)를 생성하는 방식. (초기화가 있다. 타입 안정성이 있다. 생성자와 소멸자가 실행된다.)

	- 메모리 할당과 성능 문제
		 메모리 할당은 오래 걸린다. (컴퓨터 입장에서 느리다. 운영체제의 메모리 관리나 적절한 사이즈를 찾는데 시간이 걸림.)
		 메모리 단편화 문제 (메모리 할당 해제를 반복하다가 전체 빈공간은 충분하지만 연속된 빈공간이 부족해지는 현상.)
		 멀티 스레드 문제 (동시에 접근할때 락을 하는데 까지 시간 걸림)
		 CPU 캐시 할당 문제
	- 메모리 릭(메모리 누수)
		 할당한 메모리는 반환하지 않아 해당 영역을 사용하지 못하게 되는 현상

	#define _CRTDBG_MAP_ALLOC
	#define new new(_NORMAL_BLOCK, __FILE__, __LINE__)              // 메모리 할당했는데 delete 알려주는
	#include <crtdbg.h>
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);   // main() 안에
*/



#define _CRTDBG_MAP_ALLOC
#define new new(_NORMAL_BLOCK, __FILE__, __LINE__) // 메모리 할당했는데 delete 알려주는
#include <crtdbg.h>
#include <iostream>   // 입출력 관련
#include <stdio.h>
#include <cstdio>     // stdio.h에 네임스페이스 추가한 래퍼 
#include <time.h>     // 시간 값
#include <random>
#include <limits.h>
#include "header.h"   // 헤더 파일
#include "Practice.h"


/*
   3. 미로 탈출 게임 수정하기
	- 이동했을 때 일정확률(20 %)로 전투가 발생한다.
	- 이동했을 때 일정확률(10 %)로 플레이어 HP가 회복된다.
	- 두 이벤트는 중복으로 발생하지 않는다.
*/

std::random_device Random;
std::mt19937 RandomEngine(Random());
std::uniform_int_distribution<int> DamageDist(5, 15);
std::uniform_int_distribution<int> PercentDist(1, 100); // 확률

enum EventType
{
	Battle     = 0,
	Heal       = 1,
	EventNone  = 2,
};

EventType GetMoveEvent()
{
	int RandomNumber = PercentDist(RandomEngine);

	if (RandomNumber <= 20)
		return Battle;
	else if (RandomNumber <= 30)
		return Heal;
	else
		return EventNone;
}

void RunBattle(int& PlayerHp)
{
	const int StartHp = 100;
	int EnemyHp = StartHp;

	while (PlayerHp > 0 && EnemyHp > 0)
	{
		int PlayerDamage = DamageDist(RandomEngine);
		int CriticalDamage = PercentDist(RandomEngine);  // 크리티컬 데미지

		if (CriticalDamage <= 10)
		{
			PlayerDamage = PlayerDamage * 2;
			printf("플레이어 크리티컬 공격!\n");
		}
		else
		{
			printf("플에이어 공격!\n");
		}
		EnemyHp = EnemyHp - PlayerDamage;

		if (EnemyHp <= 0)
		{
			printf("적에게 %d 데미지 -> 적 체력: 0\n", PlayerDamage);
			break;
		}
		else
		{
			printf("적에게 %d 데미지 -> 적 체력: %d\n", PlayerDamage, EnemyHp);
		}

		//적 턴
		int EnemyDamage = DamageDist(RandomEngine);
		int EnemyCritical = PercentDist(RandomEngine);

		if (EnemyCritical <= 10)
		{
			EnemyDamage = EnemyDamage * 2;
			printf("적 크리티컬 공격! ");
		}
		else
		{
			printf("적 공격! ");
		}
		PlayerHp = PlayerHp - EnemyDamage;

		if (PlayerHp <= 0)
		{
			printf("플레이어에게 %d 데미지 → 플레이어 HP: 0\n", EnemyDamage);
			break;
		}
		else
		{
			printf("플레이어에게 %d 데미지 → 플레이어 HP: %d\n", EnemyDamage, PlayerHp);
		}
	}

	if (PlayerHp > 0 && EnemyHp <= 0)
	{
		printf("플레이어 승리!");
	}
	else if (EnemyHp > 0 && PlayerHp <= 0)   // 중복 없애
	{
		printf("적 승리!\n");
	}
}

int main()
{
	const int MazeHeight = 10;
	const int MazeWidth = 20;

	// 미로 배열 (0:길, 1:벽, 2:시작, 3:출구)
	int Maze[MazeHeight][MazeWidth] =
	{
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,2,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,1,0,1},
		{1,1,1,1,0,1,0,1,1,0,1,0,1,1,0,1,0,1,0,1},
		{1,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1},
		{1,0,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1},
		{1,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1},
		{1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1},
		{1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,3,1},
		{1,0,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
	};

    // 플레이어 시작점 
	int PlayerX = 0;
	int PlayerY = 0;
	int PlayerHp = 100;

	for (int y = 0; y < MazeHeight; y++)
	{
		for (int x = 0; x < MazeWidth; x++)
		{
			if (Maze[y][x] == 2)
			{
				PlayerX = x;
				PlayerY = y;
			}
		}
	}
	while (true)
	{
		// 미로 변신
		for (int y = 0; y < MazeHeight; y++)
		{
			for (int x = 0; x < MazeWidth; x++)
			{
				if (x == PlayerX && y == PlayerY)
				{
					printf("P ");          // 플레이어
				}
				else if (Maze[y][x] == 0)  // 길
				{
					printf(". ");
				}
				else if (Maze[y][x] == 1)  // 벽
				{
					printf("# ");
				}
				else if (Maze[y][x] == 2)  // 시작점
				{
					printf("S ");
				}
				else if (Maze[y][x] == 3)  // 출구
				{
					printf("E ");
				}
			}
			printf("\n");
		}
		// 이동
		char Input = 0;
		printf("이동할 수 있는 방향을 선택하세요 (w: 위, s: 아래, a: 왼쪽, d: 오른쪽): \n");
		printf("방향 입력: ");
		std::cin >> Input;

		int PlayerNewX = PlayerX;  // 바로 PlayerX로 하면 벽에 끼어서 되돌리는 코드 또 넣어야 됨.
		int PlayerNewY = PlayerY;
		if
			(Input == 'w' || Input == 'W')
			PlayerNewY--;
		else if
			(Input == 's' || Input == 'S')
			PlayerNewY++;
		else if
			(Input == 'a' || Input == 'A')
			PlayerNewX--;
		else if
			(Input == 'd' || Input == 'D')
			PlayerNewX++;
		// 이동 벽 확인 0 이면 가고 1이면 안감
		if (PlayerNewX >= 0 && PlayerNewX < MazeWidth && 
			PlayerNewY >= 0 && PlayerNewY < MazeHeight)
		{
			if (Maze[PlayerNewY][PlayerNewX] != 1)   // 벽이 아니면 이동
			{
				PlayerX = PlayerNewX;
				PlayerY = PlayerNewY;
			}

			EventType Result = GetMoveEvent();
			if (Result == Battle)
			{
				printf("전투 발생!\n");
				RunBattle(PlayerHp);                 // 전투 시작
				if (PlayerHp <= 0)
				{
					printf("게임 오버!\n");
					break;
				}
			}
			else if (Result == Heal)
			{
				int Recover = 30;                    // 고정 회복
				PlayerHp += Recover;
				if (PlayerHp > 100) 
					PlayerHp = 100;                  // 최대치 보정
				printf("체력 회복! +%d → 현재 체력: %d/100\n", Recover, PlayerHp);
			}
			else
			{
				printf("아무 일도 없음!\n");
			}
		}
		// 출구
		if (Maze[PlayerY][PlayerX] == 3)  // 아마 플레이어 위치를 임의로 정해서 그런듯
		{
			printf("축하합니다! 출구에 도착했습니다!\n");
			break;
		}
	}

	return 0;
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

