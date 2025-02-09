#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool ans = 1;
        for(int i = 0;i < n;i++){
            int x;
            cin >> x;
            if(x <= 2*i || x <= 2*(n-i-1)){ans = 0;}
        }
        if(ans)cout << "Yes\n";
        else cout << "No\n";
    }
}