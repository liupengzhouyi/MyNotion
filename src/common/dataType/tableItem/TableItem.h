#ifndef _COMMON_DATATYPE_TABLEITEM_
#define _COMMON_DATATYPE_TABLEITEM_

#include <iostream>
#include <common/dataType/tableData/TableData.h>

namespace Common {
namespace DataType {

class TableItem {

public:
    TableItem();

    ~TableItem();

    void AddRowItemAtLast(TableData *data);

    bool HasNextRowItem();

    TableItem* GetNextRowItem();

    bool HasNextColumnItem();

    TableItem* GetNextColumnItem();

private:

    TableData *data;

    TableItem *previousRowItem;
    
    TableItem *nextRowItem;

    TableItem *previousColumnItem;

    TableItem *nextColumnItem;
};

}
}

#endif