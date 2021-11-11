#include "TableData.h"

Common::DataType::TableData::TableData() : intData(0), doubleData(0), strData() {
    this->dataType = TableDataType::INIT;
    this->hasData = false;
}

Common::DataType::TableData::TableData(int data) : intData(data), doubleData(0), strData() {
    this->dataType = TableDataType::INT;
    this->hasData = true;
}

Common::DataType::TableData::TableData(double data) : intData(0), doubleData(data), strData() {
    this->dataType = TableDataType::DOUBLE;
    this->hasData = true;
}

Common::DataType::TableData::TableData(std::string data) : intData(0), doubleData(0), strData(data) {
    this->dataType = TableDataType::STRING;
    this->hasData = true;
}

Common::DataType::TableData::~TableData() {
    this->hasData = false;
    this->dataType = TableDataType::INIT;
    this->strData = std::string();
    this->intData = 0;
    this->doubleData = 0;
}

bool Common::DataType::TableData::HasData() const {
    return this->hasData;
}

void Common::DataType::TableData::DeleteData() {
    this->dataType = TableDataType::INIT;
    this->hasData = false;
    this->strData = std::string();
    this->intData = 0;
    this->doubleData = 0;
}

std::string Common::DataType::TableData::GetStringData() const {
    if ((this->HasData()) && (this->dataType == TableDataType::STRING)) {
        return this->strData;
    }
    return std::string();
}

void Common::DataType::TableData::SetStringData(const std::string& data) {
    if ((this->HasData()) && (this->dataType == TableDataType::STRING)) {
        this->strData = data;
    }
}

int Common::DataType::TableData::GetIntData() const {
    if ((this->HasData()) && (this->dataType == TableDataType::INT)) {
        return this->intData;
    }
    return 0;
}

void Common::DataType::TableData::SetIntData(int data) {
    if ((this->HasData()) && (this->dataType == TableDataType::INT)) {
        this->intData = data;
    }
}

double Common::DataType::TableData::GetDoubleData() const {
    if ((this->HasData()) && (this->dataType == DataType::DOUBLE)) {
        return this->doubleData;
    }
    return 0;
}

void Common::DataType::TableData::SetDoubleData(double data) {
    if ((this->HasData()) && (this->dataType == DataType::DOUBLE)) {
        this->doubleData = data;
    }
}

std::string Common::DataType::TableData::GetDataAsString() const {
    std::string returnData;
    switch (this->dataType) {
    case (TableDataType::INIT):
        returnData = std::string();
        break;
    case (TableDataType::INT):
        returnData = std::to_string(this->intData);
        break;
    case (TableDataType::DOUBLE):
        returnData = std::to_string(this->doubleData);
        break;
    case (TableDataType::STRING):
        returnData = this->strData;
        break;
    default:
        break;
    }
    return returnData;
}

void Common::DataType::TableData::CopyCreate(TableData *data) {
    this->dataType = data->dataType;
    this->intData = data->intData;
    this->doubleData = data->doubleData;
    this->strData = data->strData;
}
