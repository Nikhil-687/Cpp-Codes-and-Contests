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
        string s;
        int n;
        cin >> n;
        vi a(n);
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        if(n == 1){ans.pb("1 1"); continue;}
        int cnt = 0, ind = 0, mx = 0;
        for(int i = 0; i < n; i++)
        {
            if(mp[a[i]] == 1)
            {
                cnt++;
                if(i == n-1){
                    if(cnt > mx)
                    {
                        mx = cnt;
                        ind = i+1;
                    }
                    cnt = 0;
                }
            }
            else {
                if(cnt > mx)
                {
                    mx = cnt;
                    ind = i;
                }
                cnt = 0;
            }
        }
        if(mx == 0) {ans.pb("0"); continue;}
        ans.pb(to_string(ind - mx + 1) + " " + to_string(ind));
    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}