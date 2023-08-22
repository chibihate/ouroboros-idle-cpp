#include <iostream>
#include "Human.h"

int main()
{
    Core::Human human(Interface::GenderBase::eGender::male);
    std::cout << "Welcome to ouroboros!" << std::endl;
    std::cout << human.getGender() << std::endl;
    return 0;
}