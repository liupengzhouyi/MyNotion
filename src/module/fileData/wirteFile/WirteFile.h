#include <iostream>
#include <string>

class WirteFile {

public:

   WirteFile();

   ~WirteFile();

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
   
};
