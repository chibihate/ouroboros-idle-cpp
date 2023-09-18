#include "Gender.h"

Gender::Gender()
    : m_gender(female)
    , m_isReset(false)
{
}

Gender::~Gender()
{
}

eGender Gender::getValue() const
{
    return m_gender;
};

void Gender::setValue(eGender _gender)
{
    m_gender = _gender;
};

bool Gender::getIsReset() const
{
    return m_isReset;
};

void Gender::setIsReset(bool _isReset)
{
    m_isReset = _isReset;
}; 