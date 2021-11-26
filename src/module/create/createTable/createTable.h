#ifndef _MODULE_CREATE_CREATETABLE_H_
#define _MODULE_CREATE_CREATETABLE_H_

#include <iostream>
#include <string>
#include <vector>

namespace Module {
namespace CreateTable {

class CreateTable {

public:
    CreateTable();

    ~CreateTable();

    void SetInfo(const std::string& info);

    std::string GetInfo() const;

    void InitTable();

    std::vector<std::vector<std::string>> GetTable();

    

private:

    std::string info;

    std::vector<std::vector<std::string>> table;

};

} // namespace CreateTable
} // namespace Module

#endif