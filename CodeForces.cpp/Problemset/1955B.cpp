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
        int n, c, d;
        cin >> n >> c >> d;
        vi a(n*n);
        vvi b(n, vi(n));
        vi c2(n*n);
        int min = INT_MAX;
        for (int i = 0; i < n*n; i++)
        {
            cin >> a[i];
            if (a[i] < min)
            {
                min = a[i];
            }
        }
        int val = min;
        for(int i = 0,k = 0; i < n; i++)
        {
            if(i != 0)val = b[i-1][0] + c;
            for(int j = 0;j < n;j++, k++)
            {
                b[i][j] = val;
                c2[k] = val;
                val += d;
            }
        }
        sort(c2.begin(), c2.end());
        sort(a.begin(), a.end());
        for(int i = 0; i < n*n; i++)
        {
            if(c2[i] != a[i])
            {
                ans.pb("NO");
                goto end;
            }
        }
        ans.pb("YES");
        end:;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}