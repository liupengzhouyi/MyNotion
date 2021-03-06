#ifndef _COMMON_TIMETYPE_TIMT_H_
#define _COMMON_TIMETYPE_TIMT_H_

#include <iostream>
#include <ctime>
#include <string>

namespace Common {
namespace TimeType {

class Time {
public:

    Time();

    ~Time();

    void init();

    int getHour() const;

    void setHour(int hour);

    int getMinute() const;

    void setMinute(int minute);

    int getSecond() const;

    void setSecond(int second);

    std::string getTimeAsString();

private:
    time_t now_time;

    int hour;

    int minute;

    int second;

};

}
}

#endif
