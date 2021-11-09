#include "Data.h"

using Common::DataType::Item;

Common::DataType::Data::Data() {
    this->data = nullptr;
    this->nextData = nullptr;
    this->previousData = nullptr;
    this->nextHistorydata = nullptr;
    this->previousHistoryData = nullptr;
}

Common::DataType::Data::~Data() {
    if (this->data != nullptr) {
        delete(this->data);
        this->data = nullptr;
    } 
    this->nextData = nullptr;
    this->previousData = nullptr;
    this->nextHistorydata = nullptr;
    this->previousHistoryData = nullptr;
}

void Common::DataType::Data::initialization() {
    this->data = nullptr;
    this->nextData = nullptr;
    this->previousData = nullptr;
    this->nextHistorydata = nullptr;
    this->previousHistoryData = nullptr;
}

void Common::DataType::Data::setData(Item *data) {
    this->data = data;
}

Item* Common::DataType::Data::getData() const {
    return this->data;
}