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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int cnt1 = 0, cnt2 = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == a[0])
            {
                cnt1++;
            }
            else{
                break;
            }
        }for(int i = 0; i < n; i++)
        {
            if(a[n-i-1] == a[n-1])
            {
                cnt2++;
            }
            else{
                break;
            }
        }
        int cnt = a.size();
        if(cnt1 == cnt)
        {
            ans.pb("0");
            continue;
        }
        ans.pb(to_string((a[0] == a[n-1]) ? (cnt - cnt1 - cnt2) : min(cnt - cnt1, cnt - cnt2)));

    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}