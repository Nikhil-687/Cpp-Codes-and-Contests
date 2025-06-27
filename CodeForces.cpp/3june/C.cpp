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


bool isEqual(vi a){
    for(int i = 0;i < a.size();i++){
        if(a[i] != a[0]){return 0;}
    }
    return 1;
}

int32_t main()
{

    int t;
    cin >> t;
    vector<string> ans;
    while(t--){
        string s;
        int n;
        cin >> n;
        vi a(n);
        // cout << "HI\n";
        int cnt = 1;
        vi ai;
        vi ct;
        int cost;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if(isEqual(a)){ans.pb("0");goto end;}
        for(int i = 1;i < n;i++){
            if(a[i] == a[i-1]){cnt++; if(i == n-1){ai.pb(a[i-1]);ct.pb(cnt);cnt = 1;}}
            else {if(i != n-1){ai.pb(a[i-1]);ct.pb(cnt);cnt = 1;}else {ai.pb(a[i-1]);ct.pb(cnt);cnt = 1;ai.pb(a[i]);ct.pb(1);cnt = 1;}}
        }
        cost = ai[0]*(n-ct[0]);
        for(int i = 0;i < ai.size();i++){
            cost = min(cost, ai[i]*(n-ct[i]));
            // cout << ai[i] << "  " << ct[i] << "\n";
        }
        ans.pb(to_string(cost));
        end:;
    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}