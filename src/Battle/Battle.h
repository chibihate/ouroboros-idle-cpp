#pragma once
#ifndef BATTLE_H
#define BATTLE_H
#include "Creature/Monster.h"
#include "Creature/Hero.h"

class Battle
{
public:
    void attack(Creature* A, Creature* B);
    void train(Hero* hero);
};
#endif