#pragma once

struct Position
{
	int x = 0;
	int y = 0;

	// 햇갈릴 수 있는 상황이면 명시적으로 이야기 해주는것이 좋다.
	Position() = default; // 기본 생성자, 	//Position pos2; , Position pos2 = Position(); 실행 되기 위해서
	


	Position(int InX, int InY)
		: x(InX), y(InY)
	{
		// 추가 계산이 필요한 경우, 이쪽에 새로 대입하기.
	}
	
	Position& operator+=(const Position& other)  // += 이런거면 구조체 안쪽 권장
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