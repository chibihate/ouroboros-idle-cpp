#pragma once
#ifndef MONSTER_H
#define MONSTER_H

#include "Creature.h"

#define INITIALIZE_MONSTER_HEALTH_POINTS 20
#define INITIALIZE_MONSTER_ATTACK_POINTS 10
#define INITIALIZE_MONSTER_DEFENSE_POINTS 5

enum eMonsterClasses
{
    common,
    leader,
    giant,
    boss
};

class Monster : public Creature
{
private:
    unsigned int m_golds;
    eMonsterClasses m_class;
    unsigned int m_indexIncrease;
public:
    Monster();
    Monster(unsigned int _level, eMonsterClasses _class);
    ~Monster();
    void updatePoints();
    unsigned int convertIndexIncrease() const;
    unsigned int convertMonsterHealthPoints() const;
    unsigned int convertMonsterAttackPoints() const;
    unsigned int convertMonsterDefensePoints();
    unsigned int convertGolds();
};

#endif