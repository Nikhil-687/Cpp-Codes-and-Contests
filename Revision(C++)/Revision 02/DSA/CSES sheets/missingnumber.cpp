#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long sum = 0;
    for(int i = 1;i < n;i++){
        int x;
        cin >> x;
        sum += x;
    } 
    long long sum2 = (n*(n+1))/2;
    cout << sum2 - sum;
}