#include "ReadFile.h"
#include <fstream>
#include <filesystem>

Module::FileDate::ReadFile::ReadFile() {
    this->path = std::string();
    this->hasFile = false;
    this->fileInfo = std::string();
    this->fileInfoList = {};
    this->beginLineNum = -1;
    this->endLineNum = -1;
}

Module::FileDate::ReadFile::~ReadFile() {
    this->path = std::string();
    this->hasFile = false;
    this->fileInfo = std::string();
    this->fileInfoList.clear();
    this->fileInfoList = {};
    this->beginLineNum = -1;
    this->endLineNum = -1;
}

bool Module::FileDate::ReadFile::GetHasFile() {
    return this->hasFile;
}

void Module::FileDate::ReadFile::SetHasFile() {
    this->hasFile = std::filesystem::exists(this->path);
}

void Module::FileDate::ReadFile::SetFileInfo() {
    std::ifstream file; 
    file.open(this->path); 
    std::string tempInfo;
    while(getline(file, tempInfo, '\n')) {
        if (this->fileInfo.length() == 0) {
            this->fileInfo = tempInfo;
        } else {
            this->fileInfo = this->fileInfo + "\n" + tempInfo;
        }
        this->fileInfoList.push_back(tempInfo);
    } 
    file.close();
}

std::string Module::FileDate::ReadFile::GetFileInfo() {
    return this->fileInfo;
}

void Module::FileDate::ReadFile::SetPath(std::string path) {
    this->path = path;
}

std::string Module::FileDate::ReadFile::getPath() {
    return this->path;
}

std::vector<std::string> Module::FileDate::ReadFile::GetFileInfoList()
{
    return this->fileInfoList;
}