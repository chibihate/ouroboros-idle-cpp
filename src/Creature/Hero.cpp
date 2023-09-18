#include <iostream>
#include "Hero.h"

Hero::Hero()
: Creature()
{
    m_healthPoints = INITIALIZE_HERO_HEALTH_POINTS;
    m_attackPoints = INITIALIZE_HERO_ATTACK_POINTS;
    m_defensePoints = INITIALIZE_HERO_DEFENSE_POINTS;
    setId();
}

Hero::Hero(eGender _gender, std::string _name)
: Creature(_gender, _name)
{
    m_healthPoints = INITIALIZE_HERO_HEALTH_POINTS;
    m_attackPoints = INITIALIZE_HERO_ATTACK_POINTS;
    m_defensePoints = INITIALIZE_HERO_DEFENSE_POINTS;
    setId();
}

Hero::~Hero()
{
}

void Hero::addHealthPoints(unsigned int _healthPoints)
{
    m_healthPoints += _healthPoints;
}

void Hero::subHealthPoints(unsigned int _healthPoints)
{
    if (int(m_healthPoints - _healthPoints) < 0)
    {
        m_healthPoints = INITIALIZE_HERO_HEALTH_POINTS;
    }
    else
    {
        m_healthPoints -= _healthPoints;
    }
}

unsigned int Hero::getHealthPoints() const
{
    return m_healthPoints;
}

void Hero::addAttackPoints(unsigned int _attackPoints)
{
    m_attackPoints += _attackPoints;
}

void Hero::subAttackPoints(unsigned int _attackPoints)
{
    if (int(m_attackPoints - _attackPoints) < 0)
    {
        m_attackPoints = INITIALIZE_HERO_ATTACK_POINTS;
    }
    else
    {
        m_attackPoints -= _attackPoints;
    }
}

unsigned int Hero::getAttackPoints() const
{
    return m_attackPoints;
}

void Hero::addDefensePoints(unsigned int _defensePoints)
{
    m_defensePoints += _defensePoints;
}

void Hero::subDefensePoints(unsigned int _defensePoints)
{
    if (int(m_defensePoints - _defensePoints) < 0)
    {
        m_defensePoints = INITIALIZE_HERO_DEFENSE_POINTS;
    }
    else
    {
        m_defensePoints -= _defensePoints;
    }
}

unsigned int Hero::getDefensePoints() const
{
    return m_defensePoints;
}

void Hero::addExpPoints(unsigned int _expPoints)
{
    m_expPoints += _expPoints;
}

void Hero::subExpPoints(unsigned int _expPoints)
{
    m_expPoints -= _expPoints;
}

unsigned int Hero::getExpPoints() const
{
    return m_expPoints;
}

void Hero::addLevel(unsigned int _level)
{
    m_level += _level;
}

void Hero::subLevel(unsigned int _level)
{
    if(int(m_level - _level) < 0)
    {
        m_level = 1;
    }
    else
    {
        m_level -= _level;
    }
}

unsigned int Hero::getLevel() const
{
    return m_level;
}

void Hero::setId()
{
    static unsigned int id = 0;
    m_id = ++id;
}

unsigned int Hero::getId() const
{
    return m_id;
}