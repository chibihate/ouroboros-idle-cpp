#include <iostream>
#include <memory>
#include "Battle/Battle.h"

int main()
{
    std::cout << "Welcome to ouroboros!" << std::endl;
    Battle battle;
    std::unique_ptr<Hero> hero(new Hero);
    battle.train(hero.get());
    return 0;
}