#pragma once

struct Position
{
	int x = 0;
	int y = 0;

	// �ް��� �� �ִ� ��Ȳ�̸� ��������� �̾߱� ���ִ°��� ����.
	Position() = default; // �⺻ ������, 	//Position pos2; , Position pos2 = Position(); ���� �Ǳ� ���ؼ�
	


	Position(int InX, int InY)
		: x(InX), y(InY)
	{
		// �߰� ����� �ʿ��� ���, ���ʿ� ���� �����ϱ�.
	}
	
	Position& operator+=(const Position& other)  // += �̷��Ÿ� ����ü ���� ����
	{
		x += other.x;
		y += other.y;
		return *this;
	}

	Position& operator-=(const Position& other)  
	{
		x -= other.x;
		y -= other.y;
		return *this;
	}
};



/*
ex) Main
	Position posA(1, 2);
	Position posB(3, -1);
	Position posC = posA + posB;
	Position posD = posA - posB;
*/

/*
Position pos(1, 2);
Position* pPos = new Position(2, 3);
	delete pPos;
	pPos = nullptr;

	//Position pos2;
	Position pos2 = Position();

*/