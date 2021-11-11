#!/bin/bash

dir_name=$1

mkdir ${dir_name}


cmake -H.. -B${dir_name}

cd ${dir_name}

make