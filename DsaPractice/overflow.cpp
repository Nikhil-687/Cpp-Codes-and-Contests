#include <iostream>
using namespace std;
int main(){
    char a=128; 
    cout<<(int)a<<endl;
    char b=127; 
    b++; 
    cout<<(int)b<<endl;
    char c=-129;
    cout<<(int)c<<endl;
    char d=-128; 
    d--; 
    cout<<(int)d<<endl;
    int e = __INT8_MAX__;
    e++; 
    cout<<(int)e<<endl;
    return 0;
}