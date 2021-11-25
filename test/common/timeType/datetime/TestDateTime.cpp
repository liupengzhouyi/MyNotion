#include "TestDateTime.h"
#include <iostream>
#include <string>
#include "../../../../src/common/timeType/dateTime/dateTime.h"
#include "gtest/gtest.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

using Test::TestCommon::TestTimeType::TestDateTime;
using Common::TimeType::DateTime;

TEST_F(TestDateTime, Test_DateTime) {
  int n = 0;
  DateTime *dateTime = new DateTime();
  dateTime->init();
  std::string strDate = dateTime->getDateTimeAsString();
  EXPECT_EQ(strDate.length(), 19);
}

TEST_F(TestDateTime, Test_DeleteDateTime) {
  int n = 0;
  DateTime *dateTime = new DateTime();
  dateTime->init();
  delete(dateTime);
  std::string strDate = dateTime->getDateTimeAsString();
  EXPECT_EQ(n, 0);
}

