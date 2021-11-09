#include "time.h"

using Common::TimeType::Time;

Common::TimeType::Time::Time():hour(0), minute(0), second(0) {
    this->now_time = time(0);
}

Common::TimeType::Time::~Time() {
    this->setHour(0);
    this->setMinute(0);
    this->setSecond(0);
}

void Common::TimeType::Time::init() {
    tm *locelTime = localtime(&this->now_time);
    this->setHour(locelTime->tm_hour);
    this->setMinute(locelTime->tm_min);
    this->setSecond(locelTime->tm_sec);
}

int Common::TimeType::Time::getHour() const {
    return this->hour;
}

void Common::TimeType::Time::setHour(int hour) {
    this->hour = hour;
}

int Common::TimeType::Time::getMinute() const {
    return this->minute;
}

void Common::TimeType::Time::setMinute(int minute) {
    this->minute = minute;
}

int Common::TimeType::Time::getSecond() const {
    return this->second;
}

void Common::TimeType::Time::setSecond(int second) {
    this->second = second;
}

std::string Common::TimeType::Time::getTimeAsString() {
    std::string strTime = std::string();
    if ((this->getHour() == 0) || (this->getMinute() == 0) || (this->getSecond() == 0)) {
        strTime = std::string("00:00:00");
        return strTime;
    }
    strTime = strTime + std::to_string(this->getHour());
    strTime = strTime + std::string(":");
    if (this->getMinute() < 10) {
        strTime = strTime + std::string("0");
    }
    strTime = strTime + std::to_string(this->getMinute());
    strTime = strTime + std::string(":");
    if (this->getSecond() < 10) {
        strTime = strTime + std::string("0");
    }
    strTime = strTime + std::to_string(this->getSecond());
    return strTime;
}