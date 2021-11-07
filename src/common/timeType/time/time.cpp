#include "time.h"

using common::timeType::Time;

common::timeType::Time::Time():hour(0), minute(0), second(0) {
    this->now_time = time(0);
}

common::timeType::Time::~Time() {
    this->setHour(0);
    this->setMinute(0);
    this->setSecond(0);
}

void common::timeType::Time::init() {
    tm *locelTime = localtime(&this->now_time);
    this->setHour(locelTime->tm_hour);
    this->setMinute(locelTime->tm_min);
    this->setSecond(locelTime->tm_sec);
}

int common::timeType::Time::getHour() const {
    return this->hour;
}

void common::timeType::Time::setHour(int hour) {
    this->hour = hour;
}

int common::timeType::Time::getMinute() const {
    return this->minute;
}

void common::timeType::Time::setMinute(int minute) {
    this->minute = minute;
}

int common::timeType::Time::getSecond() const {
    return this->second;
}

void common::timeType::Time::setSecond(int second) {
    this->second = second;
}

std::string common::timeType::Time::getTimeAsString() {
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