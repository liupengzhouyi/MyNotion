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

void Common::DataType::Table::AddOneRow(TableItem *tableRow)
{
    if (tableRow == nullptr) {
        return;
    }
    TableItem *temp = this->table;
    if (temp == nullptr) {
        this->table = tableRow;
        return;
    }
    while (temp->HasNextRowItem()) {
        temp = temp->GetNextRowItem();
    }
    temp->SetNextRowItem(tableRow);
}

void Common::DataType::Table::ShowTable() const
{
    TableItem *tempTableHead = this->table;
    while (tempTableHead != nullptr) {
        std::cout << ".|";
        TableItem *tempTableItem = tempTableHead;
        while(tempTableItem != nullptr) {
            TableData *tableData = tempTableItem->GetData();
            if (tableData->HasData()) {
                std::cout << tableData->GetDataAsString() << ", ";
            } else {
                std::cout << "null" << ", ";
            }
            tempTableItem = tempTableItem->GetNextColumnItem();
        }
        std::cout << std::endl;;
        tempTableHead = tempTableHead->GetNextRowItem();
    }
}

bool Common::DataType::Table::CreateTable(int row, int column)
{
    if (this->table != nullptr) {
        return false;
    }
    this->table = new TableItem();
    table->SetData(new TableData(9));
    TableItem *indexHead = nullptr;
    TableItem *index = nullptr;
    if (this->table != nullptr) {
        index = this->table;
        indexHead = this->table;
    } else {
        return false;
    }

    for (int i = 1; i < column; i++) {
        TableItem *temp = new TableItem();
        temp->SetData(new TableData(2));
        if (temp != nullptr) {
            if ((index != nullptr) && (!index->HasNextColumnItem())) {
                index->SetNextColumnItem(temp);
            } else {
                delete(temp);
                return false;
            }
        }
        if ((index != nullptr) && (index->HasNextColumnItem())) {
            index = index->GetNextColumnItem();
        } else {
            return false;
        }
    }

    index = nullptr;
    for (int i = 1; i < row; i++) {
        TableItem *head = nullptr;
        index = new TableItem();
        index->SetData(new TableData(2));
        if (index != nullptr) {
            head = index;
        } else {
            return false;
        }
        for (int j = 1; j < column; j++) {
            TableItem *temp = new TableItem();
            temp->SetData(new TableData(2));
            if (temp != nullptr) {
                if ((index != nullptr) && (!index->HasNextColumnItem())) {
                    index->SetNextColumnItem(temp);
                } else {
                    delete(temp);
                    return false;
                }
            }
            if ((index != nullptr) && (index->HasNextColumnItem())) {
                index = index->GetNextColumnItem();
            } else {
                return false;
            }
        }
        index = nullptr;
        indexHead->SetNextRowItem(head);
        head = nullptr;
        indexHead = indexHead->GetNextRowItem();
    }

}