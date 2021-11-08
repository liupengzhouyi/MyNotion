#include "ItemType.h"
#include <common/timeType/dateTime/dateTime.h>
// #include "../../../common/timeType/dateTime/dateTime.h"

using Module::Item::ItemType;
using Module::Item::ItemTypeClass;
using common::timeType::DateTime;

Module::Item::ItemType::ItemType() {
    this->itemType = ItemTypeClass::INIT;
    this->name = std::string();
    this->info = std::string();
    this->id = std::string();
    this->auther = std::string();
    this->version = std::string();
    this->date_time = std::string();
}

Module::Item::ItemType::~ItemType() {
    this->itemType = ItemTypeClass::INIT;
    this->name = std::string();
    this->info = std::string();
    this->id = std::string();
    this->auther = std::string();
    this->version = std::string();
    this->date_time = std::string();
}

void Module::Item::ItemType::initializationItemtype() {
    common::timeType::DateTime *dateTime = new DateTime();
    dateTime->init();
    this->setDate_time(dateTime->getDataeTimeAsString());
}

ItemTypeClass Module::Item::ItemType::getItemType() const {
    return this->itemType;
}

void Module::Item::ItemType::setItemType(ItemTypeClass itemType) {
    this->itemType = static_cast<ItemTypeClass>(itemType);
}

std::string Module::Item::ItemType::getName() const {
    return this->name;
}

void Module::Item::ItemType::setName(const std::string& name) {
    this->name = name;
}

std::string Module::Item::ItemType::getInfo() const {
    return this->info;
}

void Module::Item::ItemType::setInfo(const std::string& info) {
    this->info = info;
}

std::string Module::Item::ItemType::getId() const {
    return this->id;
}

void Module::Item::ItemType::setId(const std::string& id) {
    this->id = id;
}

std::string Module::Item::ItemType::getAuther() const {
    return this->auther;
}

void Module::Item::ItemType::setAuther(const std::string& auther) {
    this->auther = auther;
}

std::string Module::Item::ItemType::getVersion() const {
    return this->version;
}

void Module::Item::ItemType::setVersion(const std::string& version) {
    this->version = version;
}

std::string Module::Item::ItemType::getDate_time() const {
    return this->date_time;
}

void Module::Item::ItemType::setDate_time(const std::string& date_time) {
    this->date_time = date_time;
}
