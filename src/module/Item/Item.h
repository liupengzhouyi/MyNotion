#ifndef MODULE_ITEM_H
#define MODULE_ITEM_H

#include <iostream>
#include <string>

#include "ItemType/ItemType.h"


namespace Module {

namespace Item {

using Module::Item::ItemTypeClass;

class ItemType {

public:

    ItemType();

    ~ItemType();

    void initializationItemtype();
    
    ItemTypeClass getItemType() const;

    void setItemType(ItemTypeClass itemType);

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

    ItemTypeClass itemType;

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
