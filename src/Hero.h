#ifndef HERO_H
#define HERO_H

#include <string>

// Define enum
enum eGender
{
    female,
    male
};

class Hero
{
private:
    eGender m_gender;
    std::string m_name;
    unsigned int m_healthPoints;
    unsigned int m_attackPoints;
    unsigned int m_defensePoints;
    unsigned int m_expPoints;
    unsigned int m_level;
    unsigned char m_resetGenderPoints;
    unsigned char m_resetNamePoints;
    unsigned int m_id;
public:
    Hero();
    Hero(eGender _gender, std::string _name);
    ~Hero();
    void setGender(eGender _gender);
    eGender getGender() const;
    void setName(std::string _name);
    std::string getName() const;
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
    void addResetGenderPoints(unsigned char _resetGenderPoints);
    void subResetGenderPoints(unsigned char _resetGenderPoints);
    unsigned char getResetGenderPoints() const;
    void addResetNamePoints(unsigned char _resetNamePoints);
    void subResetNamePoints(unsigned char _resetNamePoints);
    unsigned char getResetNamePoints() const;
    void setId();
    unsigned int getId() const;
};

#endif