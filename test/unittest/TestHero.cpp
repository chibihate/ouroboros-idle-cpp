#include <gtest/gtest.h>
#include "../../src/Hero.h"

class Hero;
#define INITIALIZE_HEALTH_POINTS 100
#define INITIALIZE_ATTACK_POINTS 20
#define INITIALIZE_DEFENSE_POINTS 20
// #define FLOW_GTEST

class TestHero : public ::testing::Test
{
public:
  TestHero()
  {
    #ifdef FLOW_GTEST
      std::cout << "Constructor" << std::endl;
    #endif
  }
  ~TestHero()
  {
    #ifdef FLOW_GTEST
      std::cout << "Deconstructor" << std::endl;
    #endif
  }

  void SetUp() override
  {
    #ifdef FLOW_GTEST
      std::cout << "SetUp" << std::endl;
    #endif
  }

  void TearDown() override
  {
    #ifdef FLOW_GTEST
      std::cout << "TearDown" << std::endl;
    #endif
  }
};

TEST_F(TestHero, defaultConstructor)
{
  Hero hero;

  EXPECT_EQ(eGender::female, hero.getGender());
  EXPECT_EQ("Default", hero.getName());
  EXPECT_EQ(INITIALIZE_HEALTH_POINTS, hero.getHealthPoints());
  EXPECT_EQ(INITIALIZE_ATTACK_POINTS, hero.getAttackPoints());
  EXPECT_EQ(INITIALIZE_DEFENSE_POINTS, hero.getDefensePoints());
  EXPECT_EQ(0, hero.getExpPoints());
  EXPECT_EQ(1, hero.getLevel());
  EXPECT_EQ(1, hero.getResetGenderPoints());
  EXPECT_EQ(1, hero.getResetNamePoints());
  EXPECT_EQ(1, hero.getId());
}

TEST_F(TestHero, constructor_genderIsMaleAndNameIsSteve_notSetResetGenderAndName)
{
  Hero hero(eGender::male, "Steve");
  
  EXPECT_EQ(eGender::male, hero.getGender());
  EXPECT_EQ("Steve", hero.getName());
  EXPECT_EQ(INITIALIZE_HEALTH_POINTS, hero.getHealthPoints());
  EXPECT_EQ(INITIALIZE_ATTACK_POINTS, hero.getAttackPoints());
  EXPECT_EQ(INITIALIZE_DEFENSE_POINTS, hero.getDefensePoints());
  EXPECT_EQ(0, hero.getExpPoints());
  EXPECT_EQ(1, hero.getLevel());
  EXPECT_EQ(0, hero.getResetGenderPoints());
  EXPECT_EQ(0, hero.getResetNamePoints());
  EXPECT_EQ(2, hero.getId());
}
