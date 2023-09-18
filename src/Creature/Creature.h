#pragma once
#ifndef CREATURE_H
#define CREATURE_H
#include "Common/Gender.h"
#include <string>

class Creature
{
protected:
    Gender m_gender;
    std::string m_name;
    unsigned int m_healthPoints;
    unsigned int m_attackPoints;
    unsigned int m_defensePoints;
    unsigned int m_expPoints;
    unsigned int m_level;
    bool m_isResetName;
public:
    Creature();
    Creature(eGender _gender, std::string _name);
    ~Creature();

    void setGender(eGender _gender);
    eGender getGender() const;
    void setName(std::string _name);
    std::string getName() const;
    void setHealthPoints(unsigned int _healthPoints)
    {
        m_healthPoints = _healthPoints;
    }
    unsigned int getHealthPoints() const;
    void setAttackPoints(unsigned int _attackPoints)
    {
        m_attackPoints = _attackPoints;
    }
    unsigned int getAttackPoints() const;
    void setDefensePoints(unsigned int _defensePoints)
    {
        m_defensePoints = _defensePoints;
    }
    unsigned int getDefensePoints() const;
    void setExpPoints(unsigned int _expPoints)
    {
        m_expPoints = _expPoints;
    }
    unsigned int getExpPoints() const;
    void setLevel(unsigned int _level)
    {
        m_level = _level;
    }
    unsigned int getLevel() const;
    bool getIsResetName() const;
    void setIsResetName(bool _isReset); 
};

#endif