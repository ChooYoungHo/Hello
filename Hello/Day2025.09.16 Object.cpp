#include "Day2025.09.16 Object.h"
#include "Car.h"
#include "Animal.h"
#include "Tiger.h"
#include "Bear.h"
#include "Lion.h"





//Day0916::Day0916()
//{
//	// 객체가 생성 될 때 호출
//}
//
//Day0916::~Day0916()
//{
//	// 객제가 해제될 때 호출
//}

/*
void Day0916::ClassInstance()
{
	Car myCar = Car("지역 변수");	// 인스턴스 생성. 사라지는 타이밍은 함수가 종료되었을 때 사라짐
	myCar.Accel();

	Car* pCar = new Car("동적 할당");
	pCar->HandleTurn();
	delete pCar;
	pCar = nullptr;
}
*/

/*
void Day0916::TestAnimal()
{
	Animal animal;
	animal.ShowInfo();
	animal.MakeSound();
	animal.Move();
	animal.Move();
	animal.Move();
	animal.ShowInfo();
	animal.Eat();
	animal.ShowInfo();
	animal.Move();
	animal.Move();
	animal.Move();
	animal.ShowInfo();
	animal.Sleep();
	animal.ShowInfo();

	int Age = animal.GetAge();
	const std::string& Name = animal.GetName();
}
*/

/*
void Day0916::TestTiger()
{

	Tiger tiger = Tiger("호식이");
	tiger.Move();
	tiger.Hunt();
	tiger.ShowInfo();

	Animal* pAnimal = new Tiger("호돌이");
	delete pAnimal;
	pAnimal = nullptr;
}
*/

/*
void Day0916::TestAnimals()
{
	Bear bear = Bear("곰탱이");
	bear.Roar();
}
*/

// 간단 실습
// 다른 동물 만들어보기(3종류)
// 다른 동물 전용 함수 구현하기

/*  
9 / 16 연습문제
1. Monster 클래스 예시 만들기
- 추상화
- Monster 클래스 만들기
- 기본 속성 : 이름, 체력, 공격력
- 공통 함수 : Attack()
- 캡슐화
- 각 속성을 protected로 만들기
- 기본 속성은 생성자에서 세팅
- 각종 Getter만들기
- 상속
- 고블린, 오크, 좀비, 스켈레톤 등등 만들기
- 고유 스킬 만들기
2. 미로 탈출 게임 수정하기
- 적을 클래스화하기(Monster로 대체)
- 플레이어 클래스 만들고 적용하기
- 적과 플레이어의 부모인 Actor 클래스 만들기
*/