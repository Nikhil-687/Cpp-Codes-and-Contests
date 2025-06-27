#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define int long long
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


int32_t main()
{

    int t;
    cin >> t;
    vector<vvi> ans;
    while(t--){
        string s;
        int n, m;
        cin >> n >> m;
        vi a(m);
        for(int i = 0; i < m; i++)
        {
            cin >> a[i];
            // a[i] = a[i]/100;
        }
        // cout << "HI\n";
        sort(all(a));
        vi c(2,0);
        vvi b(n, c);
        for(int i = 0, j = 0; i < m-i && j < b.size();i++){
            // cout << a[i] << " " << a[m-i-1];
            b[j][0] = a[i];
            b[j][1] = a[m-i-1];
            if(j != b.size()-1){
                b[j+1][0] = a[m-i-1];
                b[j+1][1] = a[i];
            }
            j+=2;
        }
        // cout << "\n";
        ans.pb(b);
    }
    for(int i = 0; i < ans.size(); i++)
    {
        for(auto j: ans[i]){
            for(auto k: j){
                cout << k << " ";
            }
            for(auto k: j){
                cout << k << " ";
            }
            for(auto k: j){
                cout << k << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}