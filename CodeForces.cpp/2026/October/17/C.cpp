#include <bits/stdc++.h>
using namespace std;
 
const int MOD = 1e9 + 7; 
 
// Types
#define int long long
using ll  = long long;
using ull = unsigned long long;
using ld  = long double;
 
// Containers
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define mii map<int, int>
#define msi map<string, int>
#define msii map<int, string>
#define umii unordered_map<int, int>
#define usi unordered_set<int>
 
// Shortcuts
#define pb      push_back
#define all(x)  begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define sz(x)   (int)((x).size())
#define endl '\n' 
 

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
        int n, k, t;
        cin >> n >> k >> t;
        vi a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

    sort(a.begin(), a.end());
    int ans = 0;
        
    int i;
    for( i = 1;i < n && a[i] < t;i++){
        ans = ans + max(0ll, (a[i] - a[i-1] -1)/k);
    }
    if(a[0] != 0){
        ans = ans + max(0ll, ((a[0] + k-1)/k));
    }
    if(a[i-1] + k < t){
        ans = ans + max(0ll, (t - a[i-1] - 1)/k);
    }
    cout << ans << "\n";

    // vector<int> x(t+1, 1);
    // int j = 0, i;
    // for( i = 0;i <= t && j < n;i++){
    //     if(x[i] || a[j] == i){
    //         if(a[j] == i)j++;
    //         else {ans++;}
    //         for(int z = 0;i+z <= t && z < k;z++){
    //             x[z+i] = 0;
    //         }
    //     }
    // }
    // for(;i<= t;i++){

    //     // cout << i << " ";
    //     if(x[i]){
    //         ans++;
    //         i+=k;
    //     }
    // }
    // cout << ans << "\n";

    return 0;
}