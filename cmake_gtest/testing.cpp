#include <gtest/gtest.h>



TEST(HelloTest, BasicAssertions) 
{
  EXPECT_EQ(7 * 6, 42);
}


TEST(SecondTest, BasicAssertions) 
{
  EXPECT_EQ(7 * 8, 56);
}