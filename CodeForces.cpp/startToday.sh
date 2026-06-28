cd /home/konsol/WorkFolder/Cpp-Codes-and-Contests/CodeForces.cpp/
year=$(date +%Y)
month=$(date +%B)
day=$(date +%d)

if [[ -d $year ]]; then
	echo "Year exists."
else
	mkdir ./$year
	cp -r ./Temp/* ./$year
fi

cd ./$year/
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
# code .
if [[ -f "1.cpp" ]]; then
    echo "You can start working."    
else
    ./run.sh 1
fi
