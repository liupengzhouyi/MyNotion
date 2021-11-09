#include <iostream>
#include <string>

#include <common/timeType/dateTime/dateTime.h>
#include <common/dataType/data/Data.h>

using Common::DataType::Data;
using Common::DataType::Item;
using Common::TimeType::DateTime;

int main() 
{
    std::cout << "Holle, This is My Notion!" << std::endl;
    Item *item = new Item();
    item->initializationItem();
    std::string date_time = item->getDate_time();
    std::cout << "DateTime:" << date_time << std::endl;
    return 0;
}