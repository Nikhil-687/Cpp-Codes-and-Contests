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
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        // for(int i = 0; i < n; i++)
        // {
        //     // cout << a[i] << " ";
        //     // ans.pb(to_string(a[i]) + " ");
        // }
        // ans.pb("\n");
        if(n == 1)
        {
            ans.pb("0\n");    
            goto end;
        }
        if(n == 2)
        {
            if((a[0] + a[1])%2 == 0)
                ans.pb("0\n");
            else if(a[0]%2 == 0 || a[1]%2 == 0)
                ans.pb("1\n");
            else 
                ans.pb("2\n");
            goto end;
        }
        // cout << a[0] << " ";
        for(int i = 0;i < n;i++){
            for(int j = i; j >= 0; j--){
                if((a[j] + a[n-i+j-1])%2 == 0){
                    ans.pb(to_string(i) + "\n");
                    goto end;
                }
            }
        }
        ans.pb(to_string(n) + "\n");
        end:;
    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
    return 0;
}