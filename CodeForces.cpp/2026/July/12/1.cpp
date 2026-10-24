#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    int t = 1;
    // cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int x = 4 * n - m;
        if(x < 0){
            cout << "INVALID INPUT" << "\n";
        }
        else if(x%2){
            cout << "INVALID INPUT\n";
        }
        else if(x > 2*n){
            cout << "INVALID INPUT\n";
        }
        else{
            cout << x / 2 << " " << n - x/2 << "\n";
        }
    }
    
    return 0;
}