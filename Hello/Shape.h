#pragma once

class Shape  // Draw ������ �߻� Ŭ������ �Ǿ���.
{
public:
	virtual void Draw() = 0;	// ���� ���� �Լ� 
	// new �� �ؼ� �Ҵ� ���޴´�. 
	void Move();
};


