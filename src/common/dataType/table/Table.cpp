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
