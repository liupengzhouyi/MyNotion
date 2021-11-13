#ifndef _TEST_COMMON_TIMETYPE_TESTDATE_H_
#define _TEST_COMMON_TIMETYPE_TESTDATE_H_


// #include "../../../../../src/common/timeType/date/date.h"
// #include "/home/github/MyNotion/src/common/timeType/date/date.h"
#include "gtest/gtest.h"

namespace Test {
namespace TestCommon {
namespace TestTimeType {

// using Common::TimeType::Date;

class TestDate : public ::testing::Test {

    // Date *date;

    // TestDate() {
    // }

    // ~TestDate() override {
    // }

    void SetUp() override {
        // Date *date = new Date();
        // date->init();
    }

    void TearDown() override {
        // if (this->date = nullptr) {
        //     delete(this->date);
        //     this->date = nullptr;
        // }
    }

};

}  // namespace TestTimeType
}  // namespace TestCommon
}  // namespace Test

#endif