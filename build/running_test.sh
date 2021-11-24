
test_file=$(ls ./test)

echo "${test_file}"
for item in ${test_file}
do
    echo "🏠:./test/${item}"
    ./test/${item}
done
