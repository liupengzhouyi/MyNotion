#include "dateTime.h"

Common::TimeType::DateTime::DateTime() {
    this->date = new Date();
    this->time = new Time();
}

Common::TimeType::DateTime::~DateTime() {
    delete(this->date);
    delete(this->time);
}

void Common::TimeType::DateTime::init() {
    this->date->init();
    this->time->init();
}

std::string Common::TimeType::DateTime::getDataeTimeAsString() const {
    std::string strDateTime = std::string();
    strDateTime = this->date->getDateAsString() + " " + this->time->getTimeAsString();
    return strDateTime;
}
