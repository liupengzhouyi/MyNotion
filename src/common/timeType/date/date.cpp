#include "date.h"

using common::timeType::Date;

common::timeType::Date::Date() {
    this->now_time = time(0);
}

common::timeType::Date::~Date() {
    this->setDay(0);
    this->setMonth(0);
    this->setYear(0);
}

void common::timeType::Date::init() {
    tm *ltm = localtime(&this->now_time);
    this->setYear(1900 + ltm->tm_year);
    this->setMonth(1 + ltm->tm_mon);
    this->setDay(ltm->tm_mday);
}

int common::timeType::Date::getYear() const {
    return this->year;
}

void common::timeType::Date::setYear(int year) {
    this->year = year;
}

int common::timeType::Date::getMonth() const {
    return this->month;
}

void common::timeType::Date::setMonth(int month) {
    this->month = month;
}

int common::timeType::Date::getDay() const {
    return this->day;
}

void common::timeType::Date::setDay(int day) {
    this->day = day;
}

std::string common::timeType::Date::getDateAsString() const {
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
