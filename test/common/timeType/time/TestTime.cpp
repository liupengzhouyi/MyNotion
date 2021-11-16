#include "TestTime.h"
#include <iostream>
#include <string>
#include "../../../../src/common/timeType/time/time.h"
#include "gtest/gtest.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

using Test::TestCommon::TestTimeType::TestTime;
using Common::TimeType::Time;

TEST_F(TestTime, One) {
  int n = 0;
  Time time;
  time.init();
  std::string strDate = time.getTimeAsString();
  EXPECT_EQ(n, 0);
}

