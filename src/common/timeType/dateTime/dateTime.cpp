#include "dateTime.h"

common::timeType::DateTime::DateTime() {
    this->date = new Date();
    this->time = new Time();
}

common::timeType::DateTime::~DateTime() {
    delete(this->date);
    delete(this->time);
}

void common::timeType::DateTime::init() {
    this->date->init();
    this->time->init();
}

std::string common::timeType::DateTime::getDataeTimeAsString() const {
    std::string strDateTime = std::string();
    strDateTime = this->date->getDateAsString() + " " + this->time->getTimeAsString();
    return strDateTime;
}
