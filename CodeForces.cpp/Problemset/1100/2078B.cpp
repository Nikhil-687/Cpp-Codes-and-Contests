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
    vector<vi> ans;
    while(t--){
        string s;
        int n, k;
        cin >> n >> k;
        vi a(n);
        int val = k%2 ? n : n-1;
        a[n-1] = n-1;
        a[n-2] = n;
        for(int  i = 0;i < n-2;i++){
            a[i] = val;
        }
        ans.pb(a);
    }
    for(int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
        
        // cout << ans[i] << endl;
    }
    return 0;
}