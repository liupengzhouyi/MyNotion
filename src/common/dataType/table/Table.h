#ifndef _COMMON_DATATYPE_TABLE_
#define _COMMON_DATATYPE_TABLE_

#include <iostream>
#include <vector>
#include <string>
#include <common/dataType/tableItem/TableItem.h>

namespace Common {
namespace DataType {

class Table {

public:

    Table();

    ~Table();

    int getTableRowNumber() const;

    int getTableColumnsNumber() const;

    void AddOneRow(TableItem *tableRow);

    void ShowTable() const;

    bool CreateTable(int row, int column);
    
private:

    TableItem *table;

};

}
}
#endif