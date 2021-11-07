#include <iostream>
#include <string>

#include <common/timeType/dateTime/dateTime.h>
#include <module/Item/Item.h>

using Module::Item::ItemType;
using common::timeType::DateTime;

int main() 
{
    std::cout << "Holle, This is My Notion!" << std::endl;
    DateTime *dateTime = new DateTime();
    dateTime->init();
    std::cout << dateTime->getDataeTimeAsString();
    ItemType *item = new ItemType();
    item->initializationItemtype();
    std::string date_time = item->getDate_time();
    std::cout << "DateTime:" << std::endl;
    return 0;
}