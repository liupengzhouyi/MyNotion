#include "TestDate.h"
#include <iostream>
#include <string>
#include "../../../../src/common/timeType/date/date.h"
#include "gtest/gtest.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

using Test::TestCommon::TestTimeType::TestDate;
using Common::TimeType::Date;

TEST_F(TestDate, One) {
  int n = 0;
  Date date;
  date.init();
  std::string strDate = date.getDateAsString();
  EXPECT_EQ(n, 0);
}

TEST_F(TestDate, Tow) {
  int n = 0;
  Date date;
  date.init();
  std::string strDate = date.getDateAsString();
  EXPECT_EQ(strDate.length(), 10);
}

