#!/bin/bash

shell_folder=$(dirname $(readlink -f "$0"))
project_path="${shell_folder}/.."
google_test_path_frame="${shell_folder}/../source"
if [ -d "${google_test_path_frame}/googletest" ]
then
    echo "Google Test Frame already exists in source！"
else 
    echo "No Google Test Frame!"
    echo "Begin download google test frame..."
    cd ${google_test_path_frame}
    git clone https://gitee.com/heyuanquan/googletest.git
    echo "🐮🍺download google test frame over"
    echo "Building google test brin package..."
    cd googletest
    mkdir build 
    cd build
    cmake ..
    make
    echo "🐮🍺Building google test brin package success."

    echo "Copy library from ${project_path}/source/googletest/build/lib/* to ${project_path}/lib ..."
    if [ ! -d "${project_path}/lib" ]
    then
        mkdir ${project_path}/lib
    fi
    cp -r ${project_path}/source/googletest/build/lib/* ${project_path}/lib
    echo "🐮🍺Copy library over!"

    echo "🚮Delete google test source code..."
    if [ "${google_test_path_frame}" != "" ]
    then
        rm -rf ${google_test_path_frame}/googletest
    fi
    echo "🐮🍺Delete google test source code over!"
fi