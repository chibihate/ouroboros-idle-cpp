#ifndef PLAYER_H
#define PLAYER_H

#include <memory>
#include <vector>
#include "Hero.h"

class Player
{
protected:
    // Player gender
    eGender m_gender;
    // Player name
    std::string m_name;
    // Player level
    unsigned int m_level;
    // Player golds
    unsigned m_golds;
    // Hero of the player
    std::unique_ptr<Hero> m_hero;
    // Team of the player
    std::vector<std::unique_ptr<Hero>> m_team;
};


#endif