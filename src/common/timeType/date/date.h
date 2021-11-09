#ifndef _COMMON_TIMETYPE_DATE_H_
#define _COMMON_TIMETYPE_DATE_H_

#include <iostream>
#include <ctime>
#include <string>

namespace common {
namespace timeType {

class Date {
public:

    Date();

    ~Date();

    void init();

    int getYear() const;

    void setYear(int year);

    int getMonth() const;

    void setMonth(int month);

    int getDay() const;

    void setDay(int day);

    std::string getDateAsString() const;

private:
    time_t now_time;

    int year;

    int month;

    int day;

};

}
}

#endif
