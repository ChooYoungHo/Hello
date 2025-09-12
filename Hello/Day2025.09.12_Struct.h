#pragma once
#include <string>

// 구조체는 해더에 선언한다.
struct Enemy
{
	// 맴버 변수들
	std::string Name = "고블린";
	float Health = 100.0f;
	float AttackPower = 10.0f;
	int DropGold = 100;

	// 기본 생성자 (초기화할때)
	Enemy()
	{
		// 정해진 값이 아닌 값들로 초기화 되어야 할 때 사용
		DropGold = rand() % 100 + 50; // 50~150 랜덤으로 생성됨
	}

	Enemy(std::string _Name)
	{
		Name = _Name; 
		//Enemy NamedGoblin("보스 고블린");  // DropGold 는 100으로 고정
		//PrintEnemy(&NamedGoblin);  
	}

	// 간단 실습
	// float Modifier를 파라메터로 받는 생성자 만들기
	//   - Health는 모디파이어의 10배로 설정
	//   - AttackPower는 모디파이어의 5배로 설정
	//   - DropGold는 모디파이어의 100배로 설정
	Enemy(float Modifier)
	{
		Health = Modifier * 10.0f;
		AttackPower = Modifier * 5.0f;
		DropGold = static_cast<int>(Modifier * 100.0f);
	}
	Enemy(std::string _Name, float Modifier)
	{
		Name = _Name;
		Health = Modifier * 10.0f;
		AttackPower = Modifier * 5.0f;
		DropGold = static_cast<int>(Modifier * 100.0f);
	}

	Enemy(std::string _Name, float _Health, float _AttackPower, int _DropGold)
		: Name(_Name), Health(_Health), AttackPower(_AttackPower), DropGold(_DropGold)  // 만들때부터 값이 박힌채로 만들어진다.
	{
		// 여기서 쓰는 것은 만들어 놓고 고쳐 쓰는 것(그래서 계산이 필요한 것들은 이쪽에 해야함)
		Name = _Name;
		Health = _Health;
		AttackPower = _AttackPower;
		DropGold = _DropGold;
	}

	// +연산자를 새로 쓰겠다.
	// +는 이항연사자(+의 왼쪽과 오른쪽을 계산하는데 사용한다)
	// 왼쪽   : 자기 자신
	// 오른쪽 : other
	// 결과   : 리턴 값
	Enemy operator+(const Enemy& other) const  // other를 자주 쓴다. <- 마지막에 붙은 const는 이 함수에서 맴버 변수의 수정을 안하겠다는 의미.
	{
		// 이름은 왼쪽것을 사용
		// Health는 합치고
		// AttackPower 양쪽다 70% 사용
		// DropGold는 합치기
		return Enemy(
			Name + "(합체)",
			Health + other.Health,
			AttackPower * 0.7f + other.AttackPower * 0.7f,
			DropGold + other.DropGold);
	}
		
	    // 간단 실습
		// 1. Enemy -연산자 오버로딩하기
		//    왼쪽에 있는 것에서 오른쪽의 값 절반을 빼기
	Enemy operator-(const Enemy& other) const
	{
		return Enemy
		(
		    Name + "(절반 빼기)",
		    Health - other.Health * 0.5f,
		    AttackPower - other.AttackPower * 0.5f,
		    DropGold - static_cast<int>(other.DropGold * 0.5f)
		);
	}
 		// 2. Enemy *연사자 오버로딩하기
		//    Eemy operator*(float Multiplier) const { return };
	    //    왼쪽은 float 타입이다
	    //    // 실사용 예시
		//    Enemy Gobilnl
		//    Enemy Goblin2 = Goblin * 2.0f;
	Enemy operator*(float Multiplier) const
	{
		return Enemy
		(
			Name + "(곱하기)",
			Health * Multiplier,
			AttackPower * Multiplier,
			static_cast<int>(DropGold * Multiplier)
		);
	}
		// 3. Enemy *= 연산자 오버로딩하기
		//    Enemy& operator* = (float Multiplier) { return };
	Enemy& operator*=(float Multiplier)
	{
		Health *= Multiplier;
		AttackPower *= Multiplier;
		DropGold = static_cast<int>(DropGold * Multiplier);

		return *this; // 자기 자신을 반환 (아직 모름)
	}
};
struct Weapon
{
	std::string Name = "무기";
	std::string Desc = "무기 배경 이야기";
	float AttackPower = 10.0f;
	int Price = 100;

	//Weapon() // 없어도 자동으로 생김
	//{
	//}
};

void Day20250912_Struct();
void Day20250912_OperatorOverloading();

/// <summary>
/// 적 정보 출력하는 함수
/// </summary>
/// <param name="pEnemy">출력할 적(읽기 전용)</param>
void PrintEnemy(const Enemy* pEnemy);  // pEnemy는 읽기 전용


/*
9/12 연습문제
- 위치 표현용 구조체 Position 만들기

	## 요구사항

	1. 구조체 이름은 Position으로 한다.
	2. 멤버 변수로 `int x`, `int y`를 가진다.
	3. 두 멤버 변수는 기본값이 0이어야 한다.
	4. 두 개의 정수 값을 받아서 멤버 변수에 할당하는 생성자를 만든다.
	5. + 연산자를 오버로딩하여 두 Position 객체를 더했을 때, 각각의 멤버끼리 더한 결과를 갖는 새로운 Position 객체가 생성되도록 한다.
	6. - 연산자도 오버로딩하여 두 Position 객체를 뺐을 때, 각각의 멤버끼리 뺀 결과를 갖는 새로운 Position 객체가 생성되도록 한다.

	## 예시

	아래와 같은 코드가 정상적으로 동작해야 함

	```cpp
	Position p1(2, 3);
	Position p2(5, 1);

	Position sum = p1 + p2;   // sum.x == 7, sum.y == 4
	Position diff = p1 - p2;  // diff.x == -3, diff.y == 2
	```
*/

struct Position
{
	int x = 0;
	int y = 0;
	Position(int _x, int _y)
		: x(_x), y(_y)
	{

	}
	Position operator+(const Position& other) const 
	{
		return Position(x + other.x, y + other.y);
	}
	Position operator-(const Position& other) const 
	{
		return Position(x - other.x, y - other.y);
	}
};

void TestPosition();