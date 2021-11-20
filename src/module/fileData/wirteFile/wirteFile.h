#include <iostream>
#include <string>

class WirteFile {

public:

   WirteFile();

   ~WirteFile();

   bool hasFile();

private:
   std::string path;
   std::string hasFile;
   std::string info;
   
};
