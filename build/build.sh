#!/bin/bash

dir_name=$1

mkdir ${dir_name}


cmake -H.. -B${dir_name}

cd ${dir_name}

make

# rm -rf ./.cmake
echo "delete dir: ${dir_name}"
rm -rf ./${dir_name}