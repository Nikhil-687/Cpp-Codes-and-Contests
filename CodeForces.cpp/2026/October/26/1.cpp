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
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vi a(n), b(n), c(n);
        int mn = -1;
        vpii x;
        vpii partialMutable;
        for (int i = 0; i < n; i++) {
            cin >> a[i] >> b[i] >> c[i];
            if(a[i] <= b[i] && b[i] <= c[i]){
                if(a[i] == b[i] && b[i] == c[i]){
                    if(mn == -1){
                        mn = (a[i] + b[i] + c[i]);
                    }
                    else{
                        mn = min(mn, (a[i] + b[i] + c[i]));
                    }
                }
                else{
                    x.push_back({a[i] + b[i] + c[i], b[i] - a[i] + 1});
                }
            }
            else{
                x.push_back({(a[i] + b[i] + c[i]), 0});
            }
        }
        
        sort(x.begin(), x.end());

        
        int xmn = x[0].first;
        int i;
        for(i = 0;i < x.size() -1;i++){
            k = k - x[i].second;
            x[i].first = x[i].first - x[i].second;
            x[i].second = 0;
            if(k >= (i+1) * (x[i+1].first - x[i].first)){
                k = k - (i+1) * (x[i+1].first - x[i].first);
                xmn = x[i+1].first;
            }
            else{
                break;
            }
        }

        if(x.size() == 1){
            k = k - x[0].second;
            xmn = x[0].first - x[0].second;
            x[0].second = 0;
        }

        if(k >= i+1){
            xmn = xmn + k / (i+1);
        }

        if(mn == -1){
            cout << xmn << "\n";
        }
        else if(x.size() == 0){
            cout << mn << "\n";
        }
        else{
            cout << min(xmn, mn) << "\n";
        }

    }
    
    return 0;
}


// 1 10
// -3 0 1
// 2 1
// 1 2 2
// 2 2 -3
// 2 3
// -3 0 -2
// 3 -3 -1
// 1 5
// 0 -3 3
// 1 5
// -1 -1 0
// 2 9
// 3 3 0
// -3 2 -2
// 2 7
// -2 0 2
// -1 1 2
// 2 6
// 0 2 1
// 3 -2 0
// 3 10
// 3 -2 -1
// 1 3 -2
// 0 -1 -2
// 3 5
// 1 0 -3
// -2 -3 0
// -1 -2 -3