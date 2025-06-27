#include<bits/stdc++.h>

int division(int a, int b){
    if(b == 0)throw 1;
    return a/b;
}

int main(){
    int a = 1;
    int b = 0;
    try{
        int c = division(a, b);
        std::cout << c << std::endl;
        // throw statement is used in try block and this thown value is catched by catch blocks
        // child class on first 
        // catch all be last block 
        // you can also throw your classes and structs from this try 
    }
    catch(int e){
        std::cout << "Division by zero\n";
    }
    std::cout << "Bye\n";
    return 0;
}