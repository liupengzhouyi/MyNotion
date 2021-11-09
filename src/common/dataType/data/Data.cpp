#include "Data.h"

using common::dataType::Item;

common::dataType::Data::Data() {
    this->data = nullptr;
    this->nextData = nullptr;
    this->previousData = nullptr;
    this->nextHistorydata = nullptr;
    this->previousHistoryData = nullptr;
}

common::dataType::Data::~Data() {
    if (this->data != nullptr) {
        delete(this->data);
        this->data = nullptr;
    } 
    this->nextData = nullptr;
    this->previousData = nullptr;
    this->nextHistorydata = nullptr;
    this->previousHistoryData = nullptr;
}

void common::dataType::Data::initialization() {
    this->data = nullptr;
    this->nextData = nullptr;
    this->previousData = nullptr;
    this->nextHistorydata = nullptr;
    this->previousHistoryData = nullptr;
}

void common::dataType::Data::setData(Item *data) {
    this->data = data;
}

Item* common::dataType::Data::getData() const {
    return this->data;
}