#include "WirteFile.h"
#include <fstream>
#include <filesystem>

WirteFile::WirteFile() {
    this->path = std::string();
    this->hasFile = false;
    this->fileInfo = std::string();
}

WirteFile::~WirteFile() {
    this->path = std::string();
    this->hasFile = false;
    this->fileInfo = std::string();
}

bool WirteFile::GetHasFile() {
    return this->hasFile;
}

void WirteFile::SetHasFile() {
    this->hasFile = std::filesystem::exists(this->path);
}

void WirteFile::SetFileInfo() {
    std::ofstream file; 
    file.open(this->path); 
    file << this->fileInfo;
    file.close(); 
}

std::string WirteFile::GetFileInfo() {
    return this->fileInfo;
}

void WirteFile::SetPath(std::string path) {
    this->path = path;
}

std::string WirteFile::getPath() {
    return this->path;
}
