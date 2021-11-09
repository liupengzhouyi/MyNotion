#include "date.h"

using Common::TimeType::Date;

Common::TimeType::Date::Date() {
    this->now_time = time(0);
}

Common::TimeType::Date::~Date() {
    this->setDay(0);
    this->setMonth(0);
    this->setYear(0);
}

void Common::TimeType::Date::init() {
    tm *ltm = localtime(&this->now_time);
    this->setYear(1900 + ltm->tm_year);
    this->setMonth(1 + ltm->tm_mon);
    this->setDay(ltm->tm_mday);
}

int Common::TimeType::Date::getYear() const {
    return this->year;
}

void Common::TimeType::Date::setYear(int year) {
    this->year = year;
}

int Common::TimeType::Date::getMonth() const {
    return this->month;
}

void Common::TimeType::Date::setMonth(int month) {
    this->month = month;
}

int Common::TimeType::Date::getDay() const {
    return this->day;
}

void Common::TimeType::Date::setDay(int day) {
    this->day = day;
}

std::string Common::TimeType::Date::getDateAsString() const {
    std::string strDate = std::string("");
    if ((this->getYear() < 1000) || (this->getMonth() == 0) || (this->getDay() == 0)){
        strDate = std::string("0000-00-00");
        return strDate;
    }
    strDate = strDate + std::to_string(this->getYear());
    strDate = strDate + std::string("-");
    if (this->getMonth() < 10) {
        strDate = strDate + std::string("0");
    }
    strDate = strDate + std::to_string(this->getMonth());
    strDate = strDate + std::string("-");
    if (this->getDay() < 10) {
        strDate = strDate + std::string("0");
    }
    strDate = strDate + std::to_string(this->getDay());
    return strDate;
}
