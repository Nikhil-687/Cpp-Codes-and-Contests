#include<bits/stdc++.h>
using namespace std;

// #define int long long
int fun(int a){
    int ans = 0;
    while (a > 1)
    {
        int b = a;
        a = a/2;
        ans++;
        if(a == 1){
            if(b == 2){}
            else{ans++;}
        }
        /* code */
    }
    return ans;
    
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        // newfun(n, m, x, y, 1);
        if((n == x || x == 1) && (m == y || y == 1)){
            if(n == 1 && m == 1){
                cout << 1 << "\n";
                goto X;
            }
            cout << 1+fun(min(n, m)) << "\n";
            goto X;
        }
        if(n == 1){
            cout << fun(min(y,m-y+1)) << "\n";
            goto X;
        }
        if(m == 1){
            cout << fun(min(x,n-x+1)) << "\n";
            goto X;
        }
        cout << 1+ min(fun(n)+fun(min(y, m-y+1)), fun(m)+fun(min(x, n-x+1))) << "\n";
        X:;
    }
    return 0;
}