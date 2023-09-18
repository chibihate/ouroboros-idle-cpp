#pragma once
#include "Item.h"
#include "Common/Gender.h"

class Equipment
{
private:
    Gender m_gender;
    Item m_item;
    unsigned int m_level;

public:
    Equipment();
    ~Equipment();
    unsigned int getLevel() const;
    void setLevel(unsigned int _level);
    eGender getGender() const;
    void setGender(eGender _gender);
    Item getItem();
};