#include "TestCreateTable.h"
#include <iostream>
#include <string>
#include "../../../../../src/module/create/createTable/createTable.h"
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

