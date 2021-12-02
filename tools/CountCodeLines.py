import os

code_dir = '../src'

file_set = []
cpp_code = 0
cmake_code = 0    

def getFile(code_dir : str):
    files= os.listdir(code_dir)
    for iter in files:
        newPath = code_dir + '/' + iter
        if not os.path.isdir(newPath): #判断是否是文件夹，不是文件夹才打
            # print(newPath)
            file_set.append(newPath)
        else:
            getFile(newPath)


getFile(code_dir=code_dir)

def readFile(file_path : str) -> int:
    count = 0
    for line in open(file_path, 'r', encoding='utf-8'):
        count = count + 1
    return count

for file_path in file_set:
    # print(file_path)
    if '.cpp' in file_path or '.h' in file_path:
        cpp_code = cpp_code + readFile(file_path=file_path)
    if 'CMakeLists.txt' in file_path:
        cmake_code = cmake_code + readFile(file_path=file_path)
    
print('cpp code:' + str(cpp_code))
print('cmake code:' + str(cmake_code))
    




