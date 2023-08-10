#include <iostream>
#include "Human.h"

Human::Human()
{
    Interface::HumanInterface::setGender(Interface::GenderInterface::eGender::female);
    std::cout << "Hello world!" << std::endl;
}
Human::Human(Interface::GenderInterface::eGender _gender)
{
    Interface::HumanInterface::setGender(_gender);
    std::cout << "Hello world!" << std::endl;
}
Human::~Human()
{
    std::cout << "Bye world!" << std::endl;
}