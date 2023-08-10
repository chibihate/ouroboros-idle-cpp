#include "GenderInterface.h"

namespace Interface
{
    class HumanInterface : public GenderInterface
    {
    private:
        eGender gender;

    public:
        // virtual ~HumanInterface();
        eGender getGender() override
        {
            return gender;
        };
        void setGender(eGender _gender) override
        {
            gender = _gender;
        };
    };
}
