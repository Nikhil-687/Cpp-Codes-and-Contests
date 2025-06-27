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
        int n;
        cin >> n;
        vi a(n);
        int min = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] < min)
            {
                min = a[i];
            }
        }
        for(int i = 0; i < n; i++)
        {
            if(a[i] % min == 0)
            {
                a[i] = 0;
            }
        }
        min = INT_MAX;
        for(int i = 0; i < n; i++)
        {
            if(a[i] != 0 && a[i] < min)
            {
                min = a[i];
            }
        }
        for(int i = 0; i < n; i++)
        {
            if(a[i] != 0 && a[i] % min != 0)
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