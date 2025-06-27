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
        int n, m;
        cin >> n >> m;
        vi a(n), b(m);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        a[0] = min(a[0], b[0] - a[0]);
        for(int i = 1;i < n; i++){
            if(min(a[i], b[0] - a[i]) >= a[i-1]){
                a[i] = min(a[i], b[0] - a[i]);
            }
            else{
                a[i] = max(a[i], b[0] - a[i]);
            }
        }
        for(int i = 1; i < n; i++)
        {
            // cout << a[i] << " ";
            if(a[i] < a[i-1]){
                ans.pb("NO");
                goto end;
            }
        }
        ans.pb("YES");
        end:;
    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}