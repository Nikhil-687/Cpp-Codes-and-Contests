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
    vector<string> ans;
    while(t--){
        string s = "";
        int n, k;
        cin >> n >> k;
        // cin >> s;
        if(n == k){
            for(int i = 0; i < n; i++)
            {
                s += '1';
            }
            ans.pb(s);
            continue;
        }
        if(k == 0){
            for(int i = 0; i < n; i++)
            {
                s += '0';
            }
            ans.pb(s);
            continue;
        }
        s+= '1';
        for(int i = 0; i < n-k-1; i++)
        {
            s+='0';
        }
        for(int i = 0; i < k-1; i++)
        {
            s+= '1';
        }
        s+= '0';
        ans.pb(s);
    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}