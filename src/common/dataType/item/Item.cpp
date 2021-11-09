#include "Item.h"
#include <common/timeType/dateTime/dateTime.h>

using common::timeType::DateTime;
using common::dataType::ItemType;

common::dataType::Item::Item() {
    this->itemType = ItemType::INIT;
    this->name = std::string();
    this->info = std::string();
    this->id = std::string();
    this->auther = std::string();
    this->version = std::string();
    this->date_time = std::string();
}

common::dataType::Item::~Item() {
    this->itemType = ItemType::INIT;
    this->name = std::string();
    this->info = std::string();
    this->id = std::string();
    this->auther = std::string();
    this->version = std::string();
    this->date_time = std::string();
}

void common::dataType::Item::initializationItem() {
    common::timeType::DateTime *dateTime = new DateTime();
    dateTime->init();
    this->setDate_time(dateTime->getDataeTimeAsString());
}

ItemType common::dataType::Item::getItemType() const {
    return this->itemType;
}

void common::dataType::Item::setItemType(ItemType itemType) {
    this->itemType = static_cast<ItemType>(itemType);
}

std::string common::dataType::Item::getName() const {
    return this->name;
}

void common::dataType::Item::setName(const std::string& name) {
    this->name = name;
}

std::string common::dataType::Item::getInfo() const {
    return this->info;
}

void common::dataType::Item::setInfo(const std::string& info) {
    this->info = info;
}

std::string common::dataType::Item::getId() const {
    return this->id;
}

void common::dataType::Item::setId(const std::string& id) {
    this->id = id;
}

std::string common::dataType::Item::getAuther() const {
    return this->auther;
}

void common::dataType::Item::setAuther(const std::string& auther) {
    this->auther = auther;
}

std::string common::dataType::Item::getVersion() const {
    return this->version;
}

void common::dataType::Item::setVersion(const std::string& version) {
    this->version = version;
}

std::string common::dataType::Item::getDate_time() const {
    return this->date_time;
}

void common::dataType::Item::setDate_time(const std::string& date_time) {
    this->date_time = date_time;
}
