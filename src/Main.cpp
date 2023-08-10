#include <iostream>
#include "core/common/Human.cpp"

int main()
{
    Human human(Interface::GenderInterface::eGender::male);
    std::cout << "Welcome to ouroboros!" << std::endl;
    std::cout << human.getGender() << std::endl;
    return 0;
}