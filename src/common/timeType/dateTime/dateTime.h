#ifndef _COMMON_TIMRTYPE_DATETIME_H_
#define _COMMON_TIMRTYPE_DATETIME_H_

#include <iostream>
#include <string>
#include "../date/date.h"
#include "../time/time.h"

namespace Common {
namespace TimeType {

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