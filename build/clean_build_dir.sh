
list=$(ls -a)
echo "${list}"

for item in ${list}
do
    key=$(echo ${item} | grep ".sh")
    if [ "${key}" = "" ]
    then
        if [ "${item}" = "." ] || [ "${item}" = ".." ]
        then
            continue
        else
            echo "rm -rf ./${item}"
            rm -rf ./${item}
        fi
    fi 
done