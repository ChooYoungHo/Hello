#pragma once

class IFlyable
{
public:
	virtual void Fly() = 0;   // 인터페이스는 순수 가상 함수
	virtual ~IFlyable() {};
};
