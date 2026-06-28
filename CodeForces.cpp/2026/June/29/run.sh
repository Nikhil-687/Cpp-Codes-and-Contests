File=$1
if [ -f "$HOME/Today/$File.cpp" ]; then
    g++ -o $HOME/Today/$File $HOME/Today/$File.cpp
    # gdb ./$File
    # gdb ./$File
	echo "executing $HOME/Today/$File.cpp"
    $HOME/Today/$File
    next_char=$(printf "\\$(printf '%o' $(( $(printf '%d' "'$File") + 1 )))")
    $HOME/Today/run.sh $next_char
    # touch ./$next_char.cpp
    # cat ./temp.cpp > ./$next_char.cpp
    # code ./$next_char.cpp
else
    touch $HOME/Today/$File.cpp
    cp $HOME/Today/temp.cpp $HOME/Today/$File.cpp
    code $HOME/Today/
fi
