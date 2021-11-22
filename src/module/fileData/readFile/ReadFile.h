#include <fstream>
#include <iostream>
#include <sys/stat.h>
#include <vector>

namespace Module {
namespace FileDate {

class ReadFile {

public:

    ReadFile();

    ~ReadFile();

    bool GetHasFile();

    void SetHasFile();

    void SetFileInfo();

    std::string GetFileInfo();

    void SetPath(std::string path);

    std::string getPath();

    std::vector<std::string> GetFileInfoList();
    
private:


   std::string path;
   bool hasFile;
   std::string fileInfo;
   std::vector<std::string> fileInfoList;
   int beginLineNum;
   int endLineNum;

};

}; // FileDate
}; // Module
