#include <string>
#include "programm.h"
#include <gtest/gtest.h>



// сколько раз надо умножить цифры числа, чтобы получилось однозначная цифра
TEST(persistanceFirst, BasicAssertions) 
{
  EXPECT_EQ(persistence(39), 3);
}
TEST(persistanceSecond, BasicAssertions) 
{
  EXPECT_EQ(persistence(999), 4);
}
TEST(persistanceThird, BasicAssertions) 
{
  EXPECT_EQ(persistence(4), 0);
}



// каждая буква имеет баллы, какок слово имеет больше всего баллов?
TEST(scoringWordFirst, BasicAssertions) 
{
  EXPECT_EQ(highestScoringWord("man i need a taxi up to ubud"),"taxi");
}
TEST(scoringWordSecond, BasicAssertions) 
{
  EXPECT_EQ(highestScoringWord("what time are we climbing up the volcano"), "volcano");
}
TEST(scoringWordThird, BasicAssertions) 
{
  EXPECT_EQ(highestScoringWord("bb d"), "bb");
  // bug, a = 0 in code
}
