#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
     
    int t = 1;
    // cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        int mx = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        sort(a.begin(), a.end());
        int days = 0;
        for(int days = 0;days < mx;days++){
            int x = 0;
            for(int i = a.size()-1; i >= 0;i--){
                x += a[i] / days;
                if(x >= m){
                    goto X;
                }
            }
            cout << days-1 << "\n";
            X:;
        }
        
    }
}
