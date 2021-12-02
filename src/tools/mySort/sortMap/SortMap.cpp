#include "SortMap.h"
#include <algorithm>

Tools::Sort::SortMap::SortMap() {
    this->myMap = {};
    this->list = {};
}

Tools::Sort::SortMap::~SortMap() {
    this->myMap = {};
    this->list = {};
}

void Tools::Sort::SortMap::Setmap(const std::map<std::string, std::vector<std::string>>& myMap) {
    this->myMap = myMap;
}

std::map<std::string, std::vector<std::string>> Tools::Sort::SortMap::GetMap() const {
    return this->myMap;
}

void Tools::Sort::SortMap::SortStringVector() {
    std::vector<int> tempIndexList = {};
    for (auto iter = this->myMap.begin(); iter != this->myMap.end(); iter++) {
        tempIndexList.push_back(std::stoi(iter->first));
    }
    sort(tempIndexList.begin(), tempIndexList.end());
    for (auto iter : tempIndexList) {
        auto temp = this->myMap.find(std::to_string(iter));
        if (temp != this->myMap.end()) {
            this->list.push_back(this->myMap[std::to_string(iter)]);
        }
    }
}

void Tools::Sort::SortMap::ClearList() {
    this->list.clear();
}

std::vector<std::vector<std::string>> Tools::Sort::SortMap::GetList() const {
    return this->list;
}
