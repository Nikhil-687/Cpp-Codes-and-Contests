cd ~/WorkFolder/Cpp-Codes-and-Contests/CodeForces.cpp/
month=$(date +%B)
day=$(date +%d)
cd ./2026/
if [[ -d $month ]]; then
    echo "Month exists."
else
    mkdir ./$month
    cp -r ./Temp/* ./$month
fi
cd ./$month
if [[ -d $day ]]; then
    echo "date created."
else
    mkdir ./$day
    cp ./newDay/* ./$day
fi
cd ./$day
code .
if [[ -f "1.cpp" ]]; then
    echo "You can start working."    
else
    ./run.sh 1
fi
