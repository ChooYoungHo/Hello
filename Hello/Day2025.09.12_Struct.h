#pragma once
#include <string>

// ����ü�� �ش��� �����Ѵ�.
struct Enemy
{
	// �ɹ� ������
	std::string Name = "���";
	float Health = 100.0f;
	float AttackPower = 10.0f;
	int DropGold = 100;

	// �⺻ ������ (�ʱ�ȭ�Ҷ�)
	Enemy()
	{
		// ������ ���� �ƴ� ����� �ʱ�ȭ �Ǿ�� �� �� ���
		DropGold = rand() % 100 + 50; // 50~150 �������� ������
	}

	Enemy(std::string _Name)
	{
		Name = _Name; 
		//Enemy NamedGoblin("���� ���");  // DropGold �� 100���� ����
		//PrintEnemy(&NamedGoblin);  
	}

	// ���� �ǽ�
	// float Modifier�� �Ķ���ͷ� �޴� ������ �����
	//   - Health�� ������̾��� 10��� ����
	//   - AttackPower�� ������̾��� 5��� ����
	//   - DropGold�� ������̾��� 100��� ����
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
		: Name(_Name), Health(_Health), AttackPower(_AttackPower), DropGold(_DropGold)  // ���鶧���� ���� ����ä�� ���������.
	{
		// ���⼭ ���� ���� ����� ���� ���� ���� ��(�׷��� ����� �ʿ��� �͵��� ���ʿ� �ؾ���)
		Name = _Name;
		Health = _Health;
		AttackPower = _AttackPower;
		DropGold = _DropGold;
	}

	// +�����ڸ� ���� ���ڴ�.
	// +�� ���׿�����(+�� ���ʰ� �������� ����ϴµ� ����Ѵ�)
	// ����   : �ڱ� �ڽ�
	// ������ : other
	// ���   : ���� ��
	Enemy operator+(const Enemy& other) const  // other�� ���� ����. <- �������� ���� const�� �� �Լ����� �ɹ� ������ ������ ���ϰڴٴ� �ǹ�.
	{
		// �̸��� ���ʰ��� ���
		// Health�� ��ġ��
		// AttackPower ���ʴ� 70% ���
		// DropGold�� ��ġ��
		return Enemy(
			Name + "(��ü)",
			Health + other.Health,
			AttackPower * 0.7f + other.AttackPower * 0.7f,
			DropGold + other.DropGold);
	}
		
	    // ���� �ǽ�
		// 1. Enemy -������ �����ε��ϱ�
		//    ���ʿ� �ִ� �Ϳ��� �������� �� ������ ����
	Enemy operator-(const Enemy& other) const
	{
		return Enemy
		(
		    Name + "(���� ����)",
		    Health - other.Health * 0.5f,
		    AttackPower - other.AttackPower * 0.5f,
		    DropGold - static_cast<int>(other.DropGold * 0.5f)
		);
	}
 		// 2. Enemy *������ �����ε��ϱ�
		//    Eemy operator*(float Multiplier) const { return };
	    //    ������ float Ÿ���̴�
	    //    // �ǻ�� ����
		//    Enemy Gobilnl
		//    Enemy Goblin2 = Goblin * 2.0f;
	Enemy operator*(float Multiplier) const
	{
		return Enemy
		(
			Name + "(���ϱ�)",
			Health * Multiplier,
			AttackPower * Multiplier,
			static_cast<int>(DropGold * Multiplier)
		);
	}
		// 3. Enemy *= ������ �����ε��ϱ�
		//    Enemy& operator* = (float Multiplier) { return };
	Enemy& operator*=(float Multiplier)
	{
		Health *= Multiplier;
		AttackPower *= Multiplier;
		DropGold = static_cast<int>(DropGold * Multiplier);

		return *this; // �ڱ� �ڽ��� ��ȯ (���� ��)
	}
};
struct Weapon
{
	std::string Name = "����";
	std::string Desc = "���� ��� �̾߱�";
	float AttackPower = 10.0f;
	int Price = 100;

	//Weapon() // ��� �ڵ����� ����
	//{
	//}
};

void Day20250912_Struct();
void Day20250912_OperatorOverloading();

/// <summary>
/// �� ���� ����ϴ� �Լ�
/// </summary>
/// <param name="pEnemy">����� ��(�б� ����)</param>
void PrintEnemy(const Enemy* pEnemy);  // pEnemy�� �б� ����


/*
9/12 ��������
- ��ġ ǥ���� ����ü Position �����

	## �䱸����

	1. ����ü �̸��� Position���� �Ѵ�.
	2. ��� ������ `int x`, `int y`�� ������.
	3. �� ��� ������ �⺻���� 0�̾�� �Ѵ�.
	4. �� ���� ���� ���� �޾Ƽ� ��� ������ �Ҵ��ϴ� �����ڸ� �����.
	5. + �����ڸ� �����ε��Ͽ� �� Position ��ü�� ������ ��, ������ ������� ���� ����� ���� ���ο� Position ��ü�� �����ǵ��� �Ѵ�.
	6. - �����ڵ� �����ε��Ͽ� �� Position ��ü�� ���� ��, ������ ������� �� ����� ���� ���ο� Position ��ü�� �����ǵ��� �Ѵ�.

	## ����

	�Ʒ��� ���� �ڵ尡 ���������� �����ؾ� ��

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