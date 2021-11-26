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

}

Module::CreateTable::CreateTable::CreateTable() {
    this->info = std::string();
    this->table = {};
}

Module::CreateTable::CreateTable::~CreateTable() {
    this->info = std::string();
    this->table = {};
}

void Module::CreateTable::CreateTable::SetInfo(const std::string& info) {
    this->info = info;
}

std::string Module::CreateTable::CreateTable::GetInfo() const {
    return this->info;
}

void Module::CreateTable::CreateTable::InitTable() {
    std::vector<std::string> sv;
    split(this->info, sv, '\n');
    for (std::string item : sv) {
        std::vector<std::string> temp;
        split(item, temp, '|');
        this->table.push_back(temp);
    }
}


std::vector<std::vector<std::string>> Module::CreateTable::CreateTable::GetTable() {
    return this->table;
}
