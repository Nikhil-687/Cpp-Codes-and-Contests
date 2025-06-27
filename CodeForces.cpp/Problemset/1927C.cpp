#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
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
        int n, m, k;
        cin >> n >> m >> k;
        vi a(n), b(m);
        int cnt1 = 0, cnt2 = 0;
        umii mp1, mp2;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] >= 1 && a[i] <= k && mp1[a[i]] == 0)
            {
                mp1[a[i]]++;
                cnt1++;
            }
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            if(b[i] >= 1 && b[i] <= k && mp2[b[i]] == 0)
            {
                mp2[b[i]]++;
                cnt2++;
            }
        }
        if(cnt1 >= k/2 && cnt2 >= k/2)
        {
            for(int i = 1; i <= k; i++)
            {
                if(mp1[i] || mp2[i]){}
                else {ans.pb("NO"); goto end;}
            }
            ans.pb("YES");
            goto end;
        }
        else
        {
            ans.pb("NO");
            goto end;
        }
        end:;
        
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}