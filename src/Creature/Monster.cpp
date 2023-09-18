#include "Monster.h"

Monster::Monster()
: Creature()
, m_golds(1)
, m_class(common)
, m_indexIncrease(1.0f)
{
    setName("Monster lv" + 1);
    m_healthPoints = INITIALIZE_MONSTER_HEALTH_POINTS;
    m_attackPoints = INITIALIZE_MONSTER_ATTACK_POINTS;
    m_defensePoints = INITIALIZE_MONSTER_DEFENSE_POINTS;
}

Monster::Monster(unsigned int _level, eMonsterClasses _class)
: Creature()
, m_class(_class)
{
    setLevel(_level);
    setName("Monster lv" + getLevel());
    updatePoints();
}

Monster::~Monster()
{
}

void Monster::updatePoints()
{
    m_indexIncrease = convertIndexIncrease();
    m_healthPoints = convertMonsterHealthPoints();
    m_attackPoints = convertMonsterAttackPoints();
    m_defensePoints = convertMonsterDefensePoints();
    m_golds = convertGolds();
};

unsigned int Monster::convertIndexIncrease() const
{
    unsigned int indexIncrease = 1;
    switch (m_class)
    {
    case leader:
        indexIncrease = 2;
        break;
    case giant:
        indexIncrease = 10;
        break;
    case boss:
        indexIncrease = 50;
        break;        
    case common:
    default:
        break;
    }
    return indexIncrease;
};

unsigned int Monster::convertMonsterHealthPoints() const
{
    unsigned int healthPoints = INITIALIZE_MONSTER_HEALTH_POINTS;
    healthPoints *= m_level;
    healthPoints *= m_indexIncrease;
    return healthPoints;
};

unsigned int Monster::convertMonsterAttackPoints() const
{
    unsigned int attackPoints = INITIALIZE_MONSTER_ATTACK_POINTS;
    unsigned int increasePoints = 5;
    increasePoints *= m_level;
    if (m_class == giant)
    {
        increasePoints *= 2;
    }
    else if (m_class == boss)
    {
        increasePoints *= 10;
    }
    attackPoints += increasePoints;
    return attackPoints;
};

unsigned int Monster::convertMonsterDefensePoints()
{
    unsigned int defensePoints = INITIALIZE_MONSTER_DEFENSE_POINTS;
    unsigned int increasePoints = 5;
    increasePoints *= m_level;
    if (m_class == giant)
    {
        increasePoints *= 2;
    }
    else if (m_class == boss)
    {
        increasePoints *= 10;
    }
    defensePoints += increasePoints;
    return defensePoints;
};

unsigned int Monster::convertGolds()
{
    unsigned int golds = 1;
    golds *= m_level;
    golds *= m_indexIncrease;
    return golds;
};