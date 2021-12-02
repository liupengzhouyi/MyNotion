#include <iostream>
#include <map>
#include <string>
#include <vector>

namespace Tools {
namespace Sort {
class SortMap {

private:

    std::map<std::string, std::vector<std::string>> myMap;

    std::vector<std::vector<std::string>> list;

public:

    SortMap();

    ~SortMap();

    void Setmap(const std::map<std::string, std::vector<std::string>>& myMap);

    std::map<std::string, std::vector<std::string>> GetMap() const;

    void SortStringVector();

    void ClearList();

    std::vector<std::vector<std::string>> GetList() const;

};
} // namespace Sort
} // namespace Tools

