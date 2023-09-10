#include <iostream>
#include "Hero.h"

int main()
{
    Hero hero1;
    Hero hero2;
    Hero hero3;
    std::cout << hero1.getId() << std::endl;
    std::cout << hero2.getId() << std::endl;
    std::cout << hero3.getId() << std::endl;
    std::cout << "Welcome to ouroboros!" << std::endl;
    return 0;
}