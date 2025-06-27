#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
// #define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
#define pob pop_back
#define mp make_pair
#define fi first    
#define se second
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define mii map<int, int>
#define msi map<string, int>
#define msii map<int, string>
#define umii unordered_map<int, int>
#define usi unordered_set<int>

bool isSquare(int n){
    return (int)sqrt(n)*(int)sqrt(n) == n;
}


int main()
{
    
    int t;
    cin >> t;
    // vector<vi> ans;
    while(t--){
        auto check = [&](int k) {
            int j = sqrtl((int64_t)k * (k + 1) / 2);
            return ((int64_t)j * j != (int64_t)k * (k + 1) / 2);
        };
        // string s;
        int n;
        cin >> n;
        if (!check(n)) {
                    cout << "-1\n";
                    return;
                }
        vector<int> ans(n + 1);
        for (int i = 1; i <= n; i++) {
            ans[i] = i;
        }
        int j = 0;
        for (int i = 1; i <= n; i++) {
            while ((int64_t)j * j < (int64_t)i * (i + 1) / 2) j++;
            if ((int64_t)j * j == (int64_t)i * (i + 1) / 2) {
                swap(ans[i], ans[i + 1]);
            }
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    // for(int i = 0; i < ans.size(); i++)
    // {
        // for(int j = 0;j < ans[i].size();j++)cout << ans[i][j] << " "; cout << endl;
    // }
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// void solve() {
//     auto check = [&](int k) {
//         int j = sqrtl((int64_t)k * (k + 1) / 2);
//         return ((int64_t)j * j != (int64_t)k * (k + 1) / 2);
//     };
//     int n;
//     cin >> n;
//     if (!check(n)) {
//         cout << "-1\n";
//         return;
//     }
//     vector<int> ans(n + 1);
//     for (int i = 1; i <= n; i++) {
//         ans[i] = i;
//     }
//     int j = 0;
//     for (int i = 1; i <= n; i++) {
//         while ((int64_t)j * j < (int64_t)i * (i + 1) / 2) j++;
//         if ((int64_t)j * j == (int64_t)i * (i + 1) / 2) {
//             swap(ans[i], ans[i + 1]);
//         }
//         cout << ans[i] << " ";
//     }
//     cout << "\n";
// }
// int main() {
//     ios::sync_with_stdio(0), cin.tie(0);
//     int tt = 1;
//     cin >> tt;
//     while (tt--) {
//         solve();
//     }
// }