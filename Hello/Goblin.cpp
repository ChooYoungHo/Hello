#include "Goblin.h"

void Goblin::StoneThrow()
{
	printf("[%s]�� ���ȸ��� �մϴ�.\n", Name.c_str());
	SetEnergy(Energy - 0.5f);
}
