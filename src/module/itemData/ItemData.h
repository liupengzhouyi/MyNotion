#ifndef MODULE_ITEMDATA_ITEMDATA_H
#define MODULE_ITEMDATA_ITEMDATA_H

#include <iostream>
#include <string>

#include <module/item/ItemType.h>

namespace Module {
namespace ItemData {

using Module::Item::ItemType;

class ItemData {

public:

    ItemData();

    ~ItemData();

    void initialization();

    void setData(ItemType *data);

    ItemType* getData() const;

private:
    ItemType *data;
    ItemType *nextData;
    ItemType *previousData;
    ItemType *nextHistorydata;
    ItemType *previousHistoryData;
};

}
}

#endif