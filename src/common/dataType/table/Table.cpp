#include "Table.h"


Common::DataType::Table::Table() {
    this->table = nullptr;
}

Common::DataType::Table::~Table() {
    if (this->table != nullptr) {
        delete(this->table);
        this->table = nullptr;
    }
}

int Common::DataType::Table::getTableRowNumber() const {
    int rows = 0;

    if (this->table == nullptr) {
        return rows;
    } else {
        rows = rows + 1;
    }

    Common::DataType::TableItem *temp = nullptr;
    if (this->table->HasNextRowItem()) {
        temp = this->table->GetNextRowItem();
    }

    while(temp != nullptr) {
        rows = rows + 1;
        temp = temp ->GetNextRowItem();
    }

    return rows;
}

int Common::DataType::Table::getTableColumnsNumber() const {
    int columns = 0;
    
    if (this->table == nullptr) {
        return columns;
    } else {
        columns = columns + 1;
    }

    Common::DataType::TableItem *temp = nullptr;
    if (this->table->HasNextRowItem()) {
        temp = this->table->GetNextRowItem();
    }

    while(temp != nullptr) {
        columns = columns + 1;
        temp = temp ->GetNextRowItem();
    }

    return columns;
}

void Common::DataType::Table::AddOneRow(TableItem *tableItem)
{
    if (tableItem == nullptr) {
        return;
    }
    if (this->table = nullptr) {
        std::cout << "this->table->SetData(tableItem->GetData());" << std::endl;
        this->table->SetData(tableItem->GetData());
    } else {
        if (this->table->HasNextRowItem()) {
            TableItem *temp = this->table->GetNextRowItem();
            while(temp->HasNextRowItem()) {
                temp = temp->GetNextRowItem();
            }
            temp->SetNextRowItem(tableItem);
        } else {
            this->table->SetNextRowItem(tableItem);
        }
    }
}