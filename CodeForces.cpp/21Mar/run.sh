File=$1
if [ "$File" ]; then
    g++ -o $File $File.cpp && ./${File%.cpp}
    next_char=$(printf "\\$(printf '%o' $(( $(printf '%d' "'$File") + 1 )))")
    touch ./$next_char.cpp
    cat ./temp.cpp > ./$next_char.cpp
    code ./$next_char.cpp
else   
    touch $File.cpp
    cat ./temp.cpp > ./$File.cpp
fi 