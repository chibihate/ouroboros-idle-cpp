#include <iostream>
#include <memory>
#include "Battle.h"

void Battle::attack(Creature* A, Creature* B)
{
    unsigned int A_damage = A->getAttackPoints() - B->getDefensePoints();
    unsigned int B_damage = B->getAttackPoints() - A->getDefensePoints();
    A->setHealthPoints(A->getHealthPoints()-B_damage);
    B->setHealthPoints(B->getHealthPoints()-A_damage);
}

void Battle::train(Hero* hero)
{    
    std::unique_ptr<Monster> monster(new Monster);
    std::cout << "------------ Infomation ------------" << std::endl;
    std::cout << "Hero:" << std::endl;
    std::cout << "- HealthPoints: " << hero->getHealthPoints() << std::endl;
    std::cout << "Monster:" << std::endl;
    std::cout << "- HealthPoints: " << monster->getHealthPoints() << std::endl;
    
    std::cout << "------------ Battle ------------" << std::endl;
    while (hero->getHealthPoints() > 0 && monster->getHealthPoints() > 0)
    {
        attack(hero, monster.get());
        std::cout << "Hero:" << std::endl;
        std::cout << "- HealthPoints: " << hero->getHealthPoints() << std::endl;
        std::cout << "Monster:" << std::endl;
        std::cout << "- HealthPoints: " << monster->getHealthPoints() << std::endl;
        std::cout << "------------------" << std::endl;
    }
}