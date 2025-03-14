#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long M = 1000000007;
    long long ans = 1;
    while(n--){
        ans = ((ans%M)*2)%M;
    }
    cout << ans;
}