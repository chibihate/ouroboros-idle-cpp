#include <gtest/gtest.h>
#include "../src/Gender.h"

TEST(TestGender, Gender) {
  Interface::Gender gender;
  gender.setGender(Interface::Gender::eGender::female);

  EXPECT_EQ(gender.getGender(),Interface::Gender::eGender::female);
}