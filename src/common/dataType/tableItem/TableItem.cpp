#include "TableItem.h"


Common::DataType::TableItem::TableItem()
{
    this->data = new Common::DataType::TableData();
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
    newItem->SetData(data);

    TableItem *temp = this->nextColumnItem;
    while (temp != nullptr) {
        temp = temp->nextColumnItem;
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

void Common::DataType::TableItem::SetNextColumnItem(TableItem *data)
{
    this->nextColumnItem = data;
}

Common::DataType::TableItem* Common::DataType::TableItem::GetNextRowItem() const
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
    return tempTableItem;
}

void Common::DataType::TableItem::SetData(Common::DataType::TableData *data)
{
    this->data = data;
}

Common::DataType::TableData* Common::DataType::TableItem::GetData() const
{
    return this->data;
}