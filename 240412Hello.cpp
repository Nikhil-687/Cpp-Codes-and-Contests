#include<iostream>
#include "HelloWorld"
using namespace std;

int add2(int a,int b){
    return HelloWorld::add(a,b);
}

int main (){
    cout << add2(3,4);
}