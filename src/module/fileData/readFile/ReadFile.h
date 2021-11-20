#include <fstream>
#include <iostream>
#include <sys/stat.h>

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

private:

   std::string path;
   bool hasFile;
   std::string fileInfo;
   int beginLineNum;
   int endLineNum;

};

}; // FileDate
}; // Module
