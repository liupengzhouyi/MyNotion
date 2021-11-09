#ifndef _COMMON_DATATYPE_DATA_
#define _COMMON_DATATYPE_DATA_

#include <iostream>
#include <string>

#include <common/dataType/item/Item.h>

namespace common {
namespace dataType {

using common::dataType::Item;

class Data {

public:

    Data();

    ~Data();

    void initialization();

    void setData(Item *data);

    Item* getData() const;

private:
    Item *data;
    Item *nextData;
    Item *previousData;
    Item *nextHistorydata;
    Item *previousHistoryData;
};

}
}

#endif