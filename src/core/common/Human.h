#include "../../interface/character/HumanInterface.h"

class Human : public Interface::HumanInterface
{
public:
    Human();
    Human(Interface::GenderInterface::eGender _gender);
    ~Human();
};