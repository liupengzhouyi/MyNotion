#ifndef _COMMON_DATATYPE_ITEM_H_
#define _COMMON_DATATYPE_ITEM_H_

#include <iostream>
#include <string>

namespace Common {

namespace DataType {

enum class ItemType {
    INIT,  // 初始
    PAGE,  // 页面
    IMAGE, // 图片
    TABLE, // 表格
    LINK,  // 链接
    CODE,  // 代码
    TEXT,  // 文字
};

class Item {

public:

    Item();

    ~Item();

    void initializationItem();
    
    ItemType getItemType() const;

    void setItemType(ItemType itemType);

    std::string getName() const;

    void setName(const std::string& name);

    std::string getInfo() const;

    void setInfo(const std::string& info);

    std::string getId() const;

    void setId(const std::string& id);

    std::string getAuther() const;

    void setAuther(const std::string& auther);

    std::string getVersion() const;

    void setVersion(const std::string& version);

    std::string getDate_time() const;

    void setDate_time(const std::string& date_time);

private:

    ItemType itemType;

    std::string name;

    std::string info;

    std::string id;

    std::string auther;

    std::string version;

    std::string date_time;

};

}
}

#endif
