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
 
vector<int> factorize(int a){
    vector<int> factors;
    for(int i = 2;i*i <= a;i++){
        if(a % i == 0){
            factors.push_back(i);
            while(a % i == 0){
                a /=i;
            }
        }
    }
    if(a > 1)factors.push_back(a);
    return factors;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vi a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long ans = 0;
        for(int i = 0;i < n;i++){
            if(a[i] % x == 0 && x > 1){
                ans += a[i];
                a[i] = 0;
            }
        }

        vector<int> factors = factorize(x);
        unordered_map<int, int> DP; 


        int mx = 0;
        for(int i = 0;i < n;i++){
            if(a[i] != 0){
                int x = a[i];
                for(int j = 0;j < factors.size();j++){
                    if(a[i] % factors[j] == 0){
                        DP[factors[j]] += x;
                        mx = max(mx, DP[factors[j]]);
                        // while(a[i] % factors[j]){
                        //     a[i] /= factors[j];
                        // }
                    }
                }
            }
        }
        // for(auto i : factors)cout << i << " ";cout << " \n";
        // for(auto i : a)cout << i << " ";cout << " \n";
        // for(auto [i, j] : DP)cout << j << " ";cout << " \n";

        // for(auto [i, j] : DP){
        //     mx = max(mx, j);
        // }
        // cout << DP[2] << " ";

        cout << mx + ans << "\n";
        
    }
    
    return 0;
}