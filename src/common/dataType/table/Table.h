#ifndef _COMMON_DATATYPE_TABLE_
#define _COMMON_DATATYPE_TABLE_

#include <iostream>
#include <vector>
#include <string>
#include <common/dataType/data/Data.h>

namespace Common {
namespace DataType {


class Table {

public:

    Table();

    ~Table();

    int getTableHight() const;

    int getTablewith() const;

    int setData(int row, int column, const Data& item);

    Data getData(int row, int column) const;

    std::vector<Data> getRow(int rowNum) const;

    std::vector<std::string> getRowAsString(int rowNum) const;

    std::vector<std::string> getColumn(int columnNum) const;

    std::vector<Data> getColumnAsString(int columnNum) const;

    std::vector<std::vector<std::string>> GetTableAsString() const;

private:

    Data *item;

    Data *previousRowItem;
    
    Data *nextRowItem;

    Data *previousColumnItem;

    Data *nextColumnItem;

};

}
}
#endif