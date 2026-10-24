#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    while (1) {
        int n;
        cin >> n;
        int cnt = 1;
        vector<int> a(n);
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        for(int i = 1;i < n;i++){
            if(a[i] != a[i-1])cnt++;
        }

        cout << cnt << "\n";
        break;
    }
    
    return 0;
}