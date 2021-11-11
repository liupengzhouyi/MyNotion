#ifndef _COMMON_DATATYPE_TABLEDATA_
#define _COMMON_DATATYPE_TABLEDATA_

#include <iostream>
#include <string>

namespace Common {
namespace DataType {

enum TableDataType {
    INIT,
    STRING,
    INT,
    DOUBLE
};

class TableData {

public:
    TableData();

    TableData(int data);

    TableData(double data);

    TableData(std::string data);

    ~TableData();

    bool HasData() const;

    void DeleteData();

    std::string GetStringData() const;

    void SetStringData(const std::string& data);

    int GetIntData() const;

    void SetIntData(int data);

    double GetDoubleData() const;

    void SetDoubleData(double data);

    std::string GetDataAsString() const;

    void CopyCreate(TableData *data);

private:

    bool hasData;

    TableDataType dataType;

    std::string strData;

    int intData;

    double doubleData;

};

}
}

#endif