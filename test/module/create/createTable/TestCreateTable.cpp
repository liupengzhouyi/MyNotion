#include "TestCreateTable.h"
#include "TestCreateTable.h"
#include <iostream>
#include <string>
#include "../../../../src/module/create/createTable/createTable.h"
#include "gtest/gtest.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

using Test::TestModule::TestCreate::TastCreateTable;
using Module::Create::CreateTable;

TEST_F(TastCreateTable, TestCreateCreateTable) {
  std::string target = "|  |  a  | - | s | edf | \n";
  CreateTable *createTable = new CreateTable();
  createTable->SetInfo("| a |-|s|edf|");
  createTable->InitTable();
  std::string returnValue = createTable->GetTableAsString();
  EXPECT_EQ(target, returnValue);
}

TEST_F(TastCreateTable, TestDeleteCreateTable) {
  std::string target = "|  |  a  | - | s | edf | \n";
  CreateTable *createTable = new CreateTable();
  createTable->SetInfo("| a |-|s|edf|");
  createTable->InitTable();
  std::string returnValue = createTable->GetTableAsString();
  delete(createTable);
  EXPECT_EQ(target, returnValue);
}


TEST_F(TastCreateTable, TestCreateTableGetInfo) {
  std::string target = "| a |-|s|edf|";
  CreateTable *createTable = new CreateTable();
  createTable->SetInfo("| a |-|s|edf|");
  EXPECT_EQ(createTable->GetInfo(), target);
}


TEST_F(TastCreateTable, TestGetInfoByIndex) {
  std::string target = "| a |-|s|edf|";
  CreateTable *createTable = new CreateTable();
  createTable->SetInfo("| a |-|s|edf|");
  std::string info = createTable->GetInfoByIndex(3)[0];
  EXPECT_EQ("-", info);
}


TEST_F(TastCreateTable, GeiInfoInMap) {
  std::string target = "| a |-|s|edf|";
  CreateTable *createTable = new CreateTable();
  createTable->SetInfo("| a |-|s|edf|");
  std::map<std::string, std::vector<std::string>> myMap = createTable->GeiInfoInMap(3);
  std::string info = "";
  for (auto i = myMap.begin(); i != myMap.end(); ++i) {
        info = i->first;
        break;
  }
  EXPECT_EQ("-", info);
}