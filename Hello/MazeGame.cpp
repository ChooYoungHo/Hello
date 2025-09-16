#include "MazeGame.h"


Game::Game()
    : RandomEngine(Random()),
    DamageDist(5, 15),
    PercentDist(1, 100),
    RewardDist(50, 100),
    EnemyHpDist(70, 100)
{
}


