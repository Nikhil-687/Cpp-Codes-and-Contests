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
    vvi ans;
    while(t--){
        string s;
        int n;
        cin >> n;
        vi a(1,-1);
        vi l(n), r(n), d(n);
        for(int i = 0; i < n; i++)
        {
            cin >> d[i];
        }
        for(int i = 0; i < n; i++)
        {
            cin >> l[i] >> r[i];
        }
        int h = 0;
        if(l[0] <= 0 && r[0] >= 0)
        {
        }
        else
        {
            // a.pb(-1);
            ans.pb(a);
            goto end;
        }
        for(int i = 1; i < n; i++)
        {
            
            if(d[i] == -1)
            {
                for(int j = i+1;j < n;j++){
                    if(l[j] > h){
                        d[i] = 1;
                        goto X;
                    }
                    if(r[j] == h){
                        d[i] = 0;
                        goto X;
                    }
                }
                d[i] = 0;
                X:;
            }
            h+= d[i];
            if(h <= r[i] && h >= l[i]){}
            else{
                // a.pb(h);
                ans.pb(a);
                goto end;
            }
        }
        ans.pb(d);
        end:;
    }
    for(int i = 0; i < ans.size(); i++)
    {
        for(int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}