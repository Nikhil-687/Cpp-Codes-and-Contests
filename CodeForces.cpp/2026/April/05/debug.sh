File=$1
if [ -f "$File.cpp" ]; then
    g++ -o $File $File.cpp
    # gdb ./$File 
    # gdb ./$File
    gdb -ex "run" ./$File
    # next_char=$(printf "\\$(printf '%o' $(( $(printf '%d' "'$File") + 1 )))")
    # touch ./$next_char.cpp
    # cat ./temp.cpp > ./$next_char.cpp
    # code ./$next_char.cpp
else   
    touch $File.cpp
    cat ./temp.cpp > ./$File.cpp
    code ./$File.cpp
fi 