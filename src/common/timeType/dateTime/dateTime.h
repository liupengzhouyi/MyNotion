#ifndef COMMON_TIMRTYPE_DATETIME_H
#define COMMON_TIMRTYPE_DATETIME_H

#include <iostream>
#include <string>
#include "../date/date.h"
#include "../time/time.h"

namespace common {
namespace timeType {

class DateTime {

public:
    DateTime();

    ~DateTime();

    void init();

    std::string getDataeTimeAsString() const;

private:

    Date *date;
    Time *time;
};

}
}

#endif