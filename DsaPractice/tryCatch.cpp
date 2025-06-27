#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 10, b = 5;
    try{
        if(b == 0)
            throw 1;
        cout << a << "/" << b << " is: " << a/b << endl;
    }
    catch(int e){
        cout << "Error: Division by 0\n" ;
    }
    cout << "Bye\n";
}