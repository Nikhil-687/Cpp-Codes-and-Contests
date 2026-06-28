File=$1
if [ -f "$File.py" ]; then
    cat input | python3 $File.py > output
else   
    touch $File.py
    cat ./temp.py > ./$File.py
    code ./$File.py
fi 