#include "Item.h"
#include <common/timeType/dateTime/dateTime.h>

using Common::TimeType::DateTime;
using Common::DataType::ItemType;

Common::DataType::Item::Item() {
    this->itemType = ItemType::INIT;
    this->name = std::string();
    this->info = std::string();
    this->id = std::string();
    this->auther = std::string();
    this->version = std::string();
    this->date_time = std::string();
}

Common::DataType::Item::~Item() {
    this->itemType = ItemType::INIT;
    this->name = std::string();
    this->info = std::string();
    this->id = std::string();
    this->auther = std::string();
    this->version = std::string();
    this->date_time = std::string();
}

void Common::DataType::Item::initializationItem() {
    Common::TimeType::DateTime *dateTime = new DateTime();
    dateTime->init();
    this->setDate_time(dateTime->getDataeTimeAsString());
}

ItemType Common::DataType::Item::getItemType() const {
    return this->itemType;
}

void Common::DataType::Item::setItemType(ItemType itemType) {
    this->itemType = static_cast<ItemType>(itemType);
}

std::string Common::DataType::Item::getName() const {
    return this->name;
}

void Common::DataType::Item::setName(const std::string& name) {
    this->name = name;
}

std::string Common::DataType::Item::getInfo() const {
    return this->info;
}

void Common::DataType::Item::setInfo(const std::string& info) {
    this->info = info;
}

std::string Common::DataType::Item::getId() const {
    return this->id;
}

void Common::DataType::Item::setId(const std::string& id) {
    this->id = id;
}

std::string Common::DataType::Item::getAuther() const {
    return this->auther;
}

void Common::DataType::Item::setAuther(const std::string& auther) {
    this->auther = auther;
}

std::string Common::DataType::Item::getVersion() const {
    return this->version;
}

void Common::DataType::Item::setVersion(const std::string& version) {
    this->version = version;
}

std::string Common::DataType::Item::getDate_time() const {
    return this->date_time;
}

void Common::DataType::Item::setDate_time(const std::string& date_time) {
    this->date_time = date_time;
}
