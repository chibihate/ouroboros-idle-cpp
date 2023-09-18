#include <iostream>
#include "Creature.h"

Creature::Creature()
: m_name("Default")
, m_healthPoints(0)
, m_attackPoints(0)
, m_defensePoints(0)
, m_expPoints(0)
, m_level(1)
, m_isResetName(true)
{
    m_gender.setIsReset(true);
}

Creature::Creature(eGender _gender, std::string _name)
: m_name(_name)
, m_healthPoints(0)
, m_attackPoints(0)
, m_defensePoints(0)
, m_expPoints(0)
, m_level(1)
, m_isResetName(false)
{
    m_gender.setValue(_gender);
}

Creature::~Creature()
{
}

void Creature::setGender(eGender _gender)
{
    if (m_gender.getIsReset())
    {
        m_gender.setValue(_gender);
        m_gender.setIsReset(false);
    }
}

eGender Creature::getGender() const
{
    return m_gender.getValue();
}

void Creature::setName(std::string _name)
{
    if (m_isResetName)
    {
        m_name = _name;
    }
}

std::string Creature::getName() const
{
    return m_name;
}

unsigned int Creature::getHealthPoints() const
{
    return m_healthPoints;
}

unsigned int Creature::getAttackPoints() const
{
    return m_attackPoints;
}

unsigned int Creature::getDefensePoints() const
{
    return m_defensePoints;
}

unsigned int Creature::getExpPoints() const
{
    return m_expPoints;
}

unsigned int Creature::getLevel() const
{
    return m_level;
}

bool Creature::getIsResetName() const
{
    return m_isResetName;
};

void Creature::setIsResetName(bool _isReset)
{
    m_isResetName = _isReset;
}; 