echo "Hello World" > ./output

sleep 2

File=$1
if [ -f "$File.cpp" ]; then
    g++ -o $File $File.cpp
    cat input | ./$File > output
else   
    touch $File.cpp
    cat ./temp.cpp > ./$File.cpp
    code ./$File.cpp
fi 

sleep 0.5