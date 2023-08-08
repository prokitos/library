#include <gtest/gtest.h>

int main()
{
    return 0;
}


// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  EXPECT_EQ(7 * 6, 42);
  EXPECT_TRUE(true);
}