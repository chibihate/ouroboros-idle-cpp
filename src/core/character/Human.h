#include "../../interface/common/Gender.h"

namespace Core
{
    namespace Character
    {
        class Human : public Interface::Gender
        {
        public:
            Human();
            Human(Interface::GenderBase::eGender _gender);
            ~Human();
        };
    } // namespace Character
} // namespace Core