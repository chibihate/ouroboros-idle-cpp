#include <iostream>
#include "core/character/Human.cpp"

int main()
{
    Core::Character::Human human(Interface::GenderBase::eGender::male);
    std::cout << "Welcome to ouroboros!" << std::endl;
    std::cout << human.getGender() << std::endl;
    return 0;
}