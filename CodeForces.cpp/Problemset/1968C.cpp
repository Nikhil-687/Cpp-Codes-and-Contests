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
    vector<vi> ans;
    while(t--){
        vector<int> s;
        int n;
        cin >> n;
        vi a(n), x(n);
        for(int i = 1; i < n; i++){
            cin >> x[i];
        }
        a[0] = 1000;
        for (int i = 1; i < n; i++)
        {
            a[i] = a[i-1] + x[i];
        }
        ans.pb(a);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {       
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}