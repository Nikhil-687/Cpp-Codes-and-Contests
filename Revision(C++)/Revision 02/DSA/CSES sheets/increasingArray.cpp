#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    int x = 0;
    int prev = 0;
    long long ans = 0;
    for(int i = 0;i < n;i++){
        if(x == 0){
            cin >> x;
            prev = x;
        }
        else{
            cin >> x;
            if(prev <= x){
                prev = x;
            }
            else{
                ans += prev - x;
            }
        }
    }
    cout << ans;
}