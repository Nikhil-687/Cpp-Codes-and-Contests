#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    cout << n << " ";
    while(n > 1){
        if(n%2){n = n*3+1;}
        else {n = n/2;}
        cout << n << " ";
    }
}