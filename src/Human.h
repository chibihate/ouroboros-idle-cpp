#pragma once
#include "Gender.h"

namespace Core
{
    class Human : public Interface::Gender
    {
    public:
        Human();
        Human(Interface::GenderBase::eGender _gender);
        ~Human();
    };
} // namespace Core