#include "TableItem.h"


Common::DataType::TableItem::TableItem() : data(0)
{
    this->nextColumnItem = nullptr;
    this->nextRowItem = nullptr;
    this->previousColumnItem = nullptr;
    this->previousRowItem = nullptr;
}

Common::DataType::TableItem::~TableItem() 
{
    if (this->data != nullptr) {
        delete(this->data);
        this->data = nullptr;
    }
}

void Common::DataType::TableItem::AddRowItemAtLast(TableData *data) 
{
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

bool Common::DataType::TableItem::HasNextRowItem() 
{
    bool key = false;
    if (this->nextRowItem != nullptr) {
        key = true;
    }
    return key;
}

Common::DataType::TableItem* Common::DataType::TableItem::GetNextRowItem() 
{
    return this->nextRowItem;
}

bool Common::DataType::TableItem::HasNextColumnItem() 
{
    bool key = false;
    if (this->nextColumnItem != nullptr) {
        key = true;
    }
    return key;
}

Common::DataType::TableItem* Common::DataType::TableItem::GetNextColumnItem() 
{
    return this->nextColumnItem;
}

void Common::DataType::TableItem::SetNextRowItem(TableItem *data)
{
    this->nextRowItem = data;
}

Common::DataType::TableItem* Common::DataType::TableItem::CopyTableItemData(TableItem *data)
{
    TableItem *tempTableItem = new TableItem();
}

void Common::DataType::TableItem::SetData(Common::DataType::TableData *data)
{
    Common::DataType::TableData *tempTableData = new Common::DataType::TableData();
    tempTableData->CopyCreate(data);
    delete(this->data);
    this->data = data;
}

Common::DataType::TableData* Common::DataType::TableItem::GetData() const
{
    return this->data;
}