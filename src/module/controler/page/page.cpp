#include "page.h"

#include <common/timeType/dateTime/dateTime.h>

using Common::TimeType::DateTime;
using Common::DataType::ItemType;

Common::DataType::Item Module::Controler::Page::CreatePage() {
    Item item = Item();
    item.setItemType(ItemType::PAGE);
    item.setName("");
    item.setId("");
    DateTime *dateTime = new DateTime();
    dateTime->init();
    item.setDate_time(dateTime->getDateTimeAsString());
    item.setVersion("100");
    return item;
}
