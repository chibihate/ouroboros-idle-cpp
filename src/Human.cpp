#include <iostream>
#include "Human.h"
namespace Core
{
    Human::Human()
    {
        Interface::Gender::setGender(Interface::Gender::eGender::female);
        std::cout << "Hello world!" << std::endl;
    }
    Human::Human(Interface::Gender::eGender _gender)
    {
        Interface::Gender::setGender(_gender);
        std::cout << "Hello world!" << std::endl;
    }
    Human::~Human()
    {
        std::cout << "Bye world!" << std::endl;
    }
} // namespace Core