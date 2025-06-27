#include<iostream>
#include<stack>
using namespace std;
    
    
stack<int> S = {};




int main (){
    S.push(4);
    S.push(4);S.push(4);S.push(5);
    cout << S.top() << endl;
    S.push(6);
    S.empty();
    cout << S.top() << endl;
}