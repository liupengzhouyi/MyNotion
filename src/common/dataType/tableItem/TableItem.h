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

    void SetNextColumnItem(TableItem *data);

    TableItem* GetNextRowItem() const;

    void SetNextRowItem(TableItem *data);

    TableItem* CopyTableItemData(TableItem *data);

    void SetData(TableData *data);

    TableData* GetData() const;

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