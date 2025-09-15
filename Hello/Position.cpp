#include "Position.h"



// 이항 연산자는 구조체 밖에 쓰는 것이 일반적이다.  
// 구조체 안에서는 상관없는데 바깥에 있으면 return cpp에 넣어야한다. 한 헤더를 여러 cpp에 적용불가
Position operator+(const Position& a, const Position& b)  // 아니면 바깥 권장
{
	return Position(a.x + b.x, a.y + b.y);
}
Position operator-(const Position& a, const Position& b)
{
	return Position(a.x - b.x, a.y - b.y);
}

bool operator==(const Position& a, const Position& b)
{
	return (a.x == b.x) && (a.y == b.y);
}

bool operator!=(const Position& a, const Position& b)
{
	//return (a.x != b.x) || (a.y != b.y);
	return !(a == b);
}