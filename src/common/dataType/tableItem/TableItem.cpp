#include "TableItem.h"


Common::DataType::TableItem::TableItem() {
    this->data = nullptr;
}

Common::DataType::TableItem::~TableItem() {
    if (this->data != nullptr) {
        delete(this->data);
        this->data = nullptr;
    }
}

void Common::DataType::TableItem::AddRowItemAtLast(TableData *data) {
    TableItem *newItem = new TableItem();
    TableData *tempData = new TableData();
    tempData->CopyCreate(data);
    newItem->data = tempData;
    TableItem *temp = this->nextRowItem;
    if (temp != nullptr) {
        temp = temp->nextRowItem;
    }
    temp = newItem;
}

bool Common::DataType::TableItem::HasNextRowItem() {
    bool key = false;
    if (this->nextRowItem != nullptr) {
        key = true;
    }
    return key;
}

Common::DataType::TableItem* Common::DataType::TableItem::GetNextRowItem() {
    TableItem *item  = nullptr;
    if (this->nextRowItem != nullptr) {
        item = this->nextRowItem;
    }
    return item;
}

bool Common::DataType::TableItem::HasNextColumnItem() {
    bool key = false;
    if (this->nextColumnItem != nullptr) {
        key = true;
    }
    return key;
}

Common::DataType::TableItem* Common::DataType::TableItem::GetNextColumnItem() {
    TableItem *item  = nullptr;
    if (this->nextColumnItem != nullptr) {
        item = this->nextRowItem;
    }
    return item;
}