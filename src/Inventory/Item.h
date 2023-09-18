enum eRarity
{
    common,
    rare,
    epic,
    legendary
};

class Item
{
private:
    eRarity m_rarity;
    bool m_isWearing;
    bool m_isEating;
public:
    Item();
    ~Item();
    eRarity getRarity() const;
    bool getWearing() const;
    bool getEating() const;

    void setRarity(eRarity _rarity);
    void setWearing(bool _isWearing);
    void setEating(bool _isEating);
};