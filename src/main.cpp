#include <iostream>
#include <string>

#include <common/timeType/dateTime/dateTime.h>
#include <common/dataType/data/Data.h>
#include <common/dataType/table/Table.h>
#include <common/dataType/tableItem/TableItem.h>
#include <common/dataType/tableData/TableData.h>


using Common::DataType::Data;
using Common::DataType::Item;
using Common::TimeType::DateTime;
using Common::DataType::TableData;
using Common::DataType::TableItem;
using Common::DataType::Table;

void PrintLog(std::string log)
{
    std::cout << log << std::endl;
}

int main() 
{
    std::cout << "Holle, This is My Notion!" << std::endl;
    Item *item = new Item();
    item->initializationItem();
    std::string date_time = item->getDate_time();
    std::cout << "DateTime:" << date_time << std::endl;

    // TableData *data = new TableData(1);
    PrintLog("TableItem *item1 = new TableItem();");
    TableItem *item1 = new TableItem();
    PrintLog("TableItem *item2 = new TableItem();");
    TableItem *item2 = new TableItem();
    PrintLog("Table *table = new Table();");
    Table *table = new Table();
    // PrintLog("add");
    table->AddOneRow(item1);
    // PrintLog("add");
    table->AddOneRow(item2);
    PrintLog("delete");
    delete(table);

    return 0;
}