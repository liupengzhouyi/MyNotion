#include "createTable.h"
#include <sstream>

namespace {

void split(const std::string& s, std::vector<std::string>& sv, const char delim = ' ') 
{
    sv.clear();
    std::istringstream iss(s);
    std::string temp;
    while (std::getline(iss, temp, delim)) {
        sv.emplace_back(std::move(temp));
    }
    return;
}

void SplitMarkDownTable(const std::string& s, std::vector<std::string>& returnVector, const char delim = '|')
{
    returnVector.clear();
    std::string item = "";
    for (auto iter : s) {
        if (iter == delim) {
            returnVector.emplace_back(item);
            item = "";
        } else {
            item = item + iter;
        }
    }
    return;
}

}

Module::Create::CreateTable::CreateTable() {
    this->info = std::string();
    this->table = {};
}

Module::Create::CreateTable::~CreateTable() {
    this->info = std::string();
    this->table = {};
}

void Module::Create::CreateTable::SetInfo(const std::string& info) {
    this->info = info;
}

std::string Module::Create::CreateTable::GetInfo() const {
    return this->info;
}

void Module::Create::CreateTable::InitTable() {
    std::vector<std::string> sv;
    split(this->info, sv, '\n');
    for (std::string item : sv) {
        std::vector<std::string> temp;
        split(item, temp, '|');
        this->table.push_back(temp);
    }
}

std::vector<std::vector<std::string>> Module::Create::CreateTable::GetTable() const {
    return this->table;
}

std::string Module::Create::CreateTable::GetTableAsString() const
{
    std::string tableAsStr = "";
    for (std::vector<std::string> tableLine : this->GetTable()) {
        std::string line = "| ";
        for (std::string item : tableLine) {
            line = line + item + " | ";
        }
        line = line + "\n";
        tableAsStr = tableAsStr + line;
    }
    return tableAsStr;
}

std::vector<std::string> Module::Create::CreateTable::GetInfoByIndex(int index) const
{
    std::vector<std::string> returnVector = {};
    for (std::vector<std::string> iter : this->GetTable()) {
        returnVector.push_back(iter[index]);
    }
    return returnVector;
}

std::map<std::string, std::vector<std::string>> Module::Create::CreateTable::GeiInfoInMap(int index) const
{
    std::map<std::string, std::vector<std::string>> returnMap = {};
    for (std::vector<std::string> iter : this->GetTable()) {
        returnMap[iter[index]] = iter;
    }
    return returnMap;
}