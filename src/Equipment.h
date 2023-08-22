#pragma once
#include "Item.h"
#include "Gender.h"

namespace Interface
{
    class Equipment : public Item, Gender
    {
    private:
        unsigned int level;

    public:
        unsigned int getLevel() const
        {
            return level;
        }

        void setLevel(unsigned int _level)
        {
            level = _level;
        }
    };
}