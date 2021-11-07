#ifndef MODULE_ITEM_ITEMTYPE_ITEMTYPE_H
#define MODULE_ITEM_ITEMTYPE_ITEMTYPE_H

#include <iostream>

namespace Module {

namespace Item {

enum class ItemTypeClass {
    INIT,  // 初始
    PAGE,  // 页面
    IMAGE, // 图片
    TABLE, // 表格
    LINK,  // 链接
    CODE,  // 代码
    TEXT,  // 文字
};

}
}

#endif