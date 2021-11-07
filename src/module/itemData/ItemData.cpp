#include "ItemData.h"

using Module::Item::ItemType;

Module::ItemData::ItemData::ItemData() {
    this->data = nullptr;
    this->nextData = nullptr;
    this->previousData = nullptr;
    this->nextHistorydata = nullptr;
    this->previousHistoryData = nullptr;
}

Module::ItemData::ItemData::~ItemData() {
    if (this->data != nullptr) {
        delete(this->data);
        this->data = nullptr;
    } 
    
    
    this->nextData = nullptr;
    this->previousData = nullptr;
    this->nextHistorydata = nullptr;
    this->previousHistoryData = nullptr;
}

void Module::ItemData::ItemData::initialization() {
    this->data = nullptr;
    this->nextData = nullptr;
    this->previousData = nullptr;
    this->nextHistorydata = nullptr;
    this->previousHistoryData = nullptr;
}

void Module::ItemData::ItemData::setData(ItemType *data) {
    this->data = data;
}

ItemType* Module::ItemData::ItemData::getData() const {
    return this->data;
}
