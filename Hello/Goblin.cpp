#include "Goblin.h"

void Goblin::StoneThrow()
{
	printf("[%s]가 돌팔매질 합니다.\n", Name.c_str());
	SetEnergy(Energy - 0.5f);
}
