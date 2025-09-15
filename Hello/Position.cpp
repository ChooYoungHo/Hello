#include "Position.h"



// ���� �����ڴ� ����ü �ۿ� ���� ���� �Ϲ����̴�.  
// ����ü �ȿ����� ������µ� �ٱ��� ������ return cpp�� �־���Ѵ�. �� ����� ���� cpp�� ����Ұ�
Position operator+(const Position& a, const Position& b)  // �ƴϸ� �ٱ� ����
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