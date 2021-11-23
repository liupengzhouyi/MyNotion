
test_file=$(ls ./test)

for item in ${test_file}
do
    ./test/${item}
done
