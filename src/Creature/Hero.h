#pragma once
#ifndef HERO_H
#define HERO_H

#include "Creature.h"

#define INITIALIZE_HERO_HEALTH_POINTS 100
#define INITIALIZE_HERO_ATTACK_POINTS 15
#define INITIALIZE_HERO_DEFENSE_POINTS 5

class Hero : public Creature
{
private:
    unsigned int m_id;
public:
    Hero();
    Hero(eGender _gender, std::string _name);
    ~Hero();
    void addHealthPoints(unsigned int _healthPoints);
    void subHealthPoints(unsigned int _healthPoints);
    unsigned int getHealthPoints() const;
    void addAttackPoints(unsigned int _attackPoints);
    void subAttackPoints(unsigned int _attackPoints);
    unsigned int getAttackPoints() const;
    void addDefensePoints(unsigned int _defensePoints);
    void subDefensePoints(unsigned int _defensePoints);
    unsigned int getDefensePoints() const;
    void addExpPoints(unsigned int _expPoints);
    void subExpPoints(unsigned int _expPoints);
    unsigned int getExpPoints() const;
    void addLevel(unsigned int _level);
    void subLevel(unsigned int _level);
    unsigned int getLevel() const;
    void setId();
    unsigned int getId() const;
};

#endif