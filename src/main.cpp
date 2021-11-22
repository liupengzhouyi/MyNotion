#include <iostream>
#include <string>

#include <common/timeType/dateTime/dateTime.h>
#include <common/dataType/data/Data.h>
#include <common/dataType/table/Table.h>
#include <common/dataType/tableItem/TableItem.h>
#include <common/dataType/tableData/TableData.h>
#include <module/controler/page/page.h>
#include <module/fileData/readFile/ReadFile.h>

using Common::DataType::Data;
using Common::DataType::Item;
using Common::TimeType::DateTime;
using Common::DataType::TableData;
using Common::DataType::TableItem;
using Common::DataType::Table;
using Module::Controler::Page;
using Module::FileDate::ReadFile;

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
    TableData *date1 = new TableData(1);
    item1->SetData(date1);

    PrintLog("TableItem *item2 = new TableItem();");
    TableItem *item2 = new TableItem();
    TableData *date2 = new TableData(2);
    item2->SetData(date2);
    TableItem *item21 = new TableItem();
    TableData *date21 = new TableData(4);
    item21->SetData(date21);
    item2->SetNextColumnItem(item21);

    TableItem *item3 = new TableItem();
    TableData *date3 = new TableData(3);
    item3->SetData(date3);

    TableItem *item4 = new TableItem();
    TableData *date4 = new TableData();
    item4->SetData(date4);

    PrintLog("Table *table = new Table();");
    Table *table = new Table();
    // PrintLog("add");
    table->AddOneRow(item1);
    // PrintLog("add");
    table->AddOneRow(item2);
    table->AddOneRow(item3);
    table->AddOneRow(item4);
    PrintLog("show");
    table->ShowTable();

    std::cout << item2->GetData()->GetDataAsString() << std::endl;

    std::cout << item2->GetNextColumnItem()->GetData()->GetDataAsString() << std::endl;


    PrintLog("delete");
    delete(table);

    Table *table1 = new Table();
    table1->CreateTable(3, 4);
    table1->ShowTable();
    
    Page *page = new Page();
    Item pageItem = page->CreatePage();
    std::cout << pageItem.getDate_time() << std::endl;

    std::cout << "-----------------------" << std::endl;
    ReadFile readFile = ReadFile();
    readFile.SetPath("/home/github/MyNotion/README.md");
    readFile.SetHasFile();
    std::string info = std::string();
    if (readFile.GetHasFile()) {
        std::cout << ":::" << std::endl;
        readFile.SetFileInfo();
        info = readFile.GetFileInfo();
    }
    std::cout << info << std::endl;
    std::cout << "-----------------------" << std::endl;

    return 0;
}