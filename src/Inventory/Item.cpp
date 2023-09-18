#include "Item.h"

Item::Item()
: m_rarity(common)
, m_isWearing(false)
, m_isEating(false)
{    
}

Item::~Item()
{
}

bool Item::getWearing() const
{
    return m_isWearing;
}

bool Item::getEating() const
{
    return m_isEating;
}

eRarity Item::getRarity() const
{
    return m_rarity;
}

void Item::setWearing(bool _isWearing)
{
    m_isWearing = _isWearing;
}

void Item::setEating(bool _isEating)
{
    m_isEating = _isEating;
}

void Item::setRarity(eRarity _rarity)
{
    m_rarity = _rarity;
}