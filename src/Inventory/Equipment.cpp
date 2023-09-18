#include "Equipment.h"

Equipment::Equipment()
: m_gender()
, m_item()
, m_level(1)
{
}

Equipment::~Equipment()
{
}

unsigned int Equipment::getLevel() const
{
    return m_level;
}

void Equipment::setLevel(unsigned int _level)
{
    m_level = _level;
}

void Equipment::setGender(eGender _gender)
{
    m_gender.setValue(_gender);
}

eGender Equipment::getGender() const
{
    return m_gender.getValue();
}

Item Equipment::getItem()
{
    return m_item;
};