#include "Hero.h"
#include <iostream>
#define INITIALIZE_HEALTH_POINTS 100
#define INITIALIZE_ATTACK_POINTS 20
#define INITIALIZE_DEFENSE_POINTS 20

Hero::Hero()
: m_gender(eGender::female)
, m_name("Default")
, m_healthPoints(INITIALIZE_HEALTH_POINTS)
, m_attackPoints(INITIALIZE_ATTACK_POINTS)
, m_defensePoints(INITIALIZE_DEFENSE_POINTS)
, m_expPoints(0)
, m_level(1)
, m_resetGenderPoints(1)
, m_resetNamePoints(1)
{
    setId();
}

Hero::Hero(eGender _gender, std::string _name)
: m_gender(_gender)
, m_name(_name)
, m_healthPoints(INITIALIZE_HEALTH_POINTS)
, m_attackPoints(INITIALIZE_ATTACK_POINTS)
, m_defensePoints(INITIALIZE_DEFENSE_POINTS)
, m_expPoints(0)
, m_level(1)
, m_resetGenderPoints(0)
, m_resetNamePoints(0)
{
    setId();
}

Hero::~Hero()
{
}

void Hero::setGender(eGender _gender)
{
    if (m_resetGenderPoints > 0)
    {
        m_gender = _gender;
    }
}

eGender Hero::getGender() const
{
    return m_gender;
}

void Hero::setName(std::string _name)
{
    if (m_resetNamePoints > 0)
    {
        m_name = _name;
    }
}

std::string Hero::getName() const
{
    return m_name;
}

void Hero::addHealthPoints(unsigned int _healthPoints)
{
    m_healthPoints += _healthPoints;
}

void Hero::subHealthPoints(unsigned int _healthPoints)
{
    if (int(m_healthPoints - _healthPoints) < 0)
    {
        m_healthPoints = INITIALIZE_HEALTH_POINTS;
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
        m_attackPoints = INITIALIZE_ATTACK_POINTS;
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
        m_defensePoints = INITIALIZE_DEFENSE_POINTS;
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

void Hero::addResetGenderPoints(unsigned char _resetGenderPoints)
{
    m_resetGenderPoints += _resetGenderPoints;
}

void Hero::subResetGenderPoints(unsigned char _resetGenderPoints)
{
    if(int(m_resetGenderPoints - _resetGenderPoints) < 0)
    {
        m_resetGenderPoints = 0;
    }
    else
    {
        m_resetGenderPoints -= _resetGenderPoints;
    }
}

unsigned char Hero::getResetGenderPoints() const
{
    return m_resetGenderPoints;
}

void Hero::addResetNamePoints(unsigned char _resetNamePoints)
{
    m_resetNamePoints =+ _resetNamePoints;
}

void Hero::subResetNamePoints(unsigned char _resetNamePoints)
{
    if(int(m_resetNamePoints - _resetNamePoints) < 0)
    {
        m_resetNamePoints = 0;
    }
    else
    {
        m_resetNamePoints -= _resetNamePoints;
    }
}

unsigned char Hero::getResetNamePoints() const
{
    return m_resetGenderPoints;
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